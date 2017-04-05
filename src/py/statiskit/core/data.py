##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

from functools import wraps
import warnings
import re
import ast

import _core
from __core.statiskit import (UnivariateData,
                                WeightedUnivariateData,
                                NamedData,
                                    UnivariateDataFrame, 
                              MultivariateData,
                                WeightedMultivariateData,
                                MultivariateDataFrame)

from controls import controls
from event import outcome_type
from moment import (mean_estimation,
                    variance_estimation)

__all__ = ['UnivariateDataFrame',
           'WeightedUnivariateData',
           'MultivariateDataFrame',
           'WeightedMultivariateData']

UnivariateData.sample_space = property(UnivariateData.get_sample_space)
MultivariateData.sample_space = property(MultivariateData.get_sample_space)
del UnivariateData.get_sample_space

UnivariateData.total = property(UnivariateData.compute_total)
del UnivariateData.compute_total

UnivariateData.min = property(UnivariateData.compute_minimum)
del UnivariateData.compute_minimum

UnivariateData.max = property(UnivariateData.compute_maximum)
del UnivariateData.compute_maximum

def get_mean(self):
    if not hasattr(self, '_mean'):
        return mean_estimation('nat', self)
    else:
        return self._mean(self)

def set_mean(self, mean):
    self._mean = mean_estimation(mean)

UnivariateData.mean = property(get_mean, set_mean)
del get_mean, set_mean

def get_variance(self):
    if not hasattr(self, '_variance'):
        return variance_estimation('nat', self)
    else:
        return self._variance(self)

def set_variance(self, variance):
    self._variance = variance_estimation(variance)

UnivariateData.variance = property(get_variance, set_variance)
del get_variance, set_variance

def standard_deviation(self):
    return (self.variance)**(1/2.)

UnivariateData.standard_deviation = standard_deviation
del standard_deviation

def wrapper_set_name(f):
    @wraps(f)
    def set_name(self, name):
        if not isinstance(name, basestring):
            raise TypeError('expected basestring, but got {!r}'.format(type(name)))
        is_name = True
        try:
            root = ast.parse(name)
        except SyntaxError:
            is_name = False
        else:
            if not isinstance(root, ast.Module):
                is_name = False
            if len(root.body) != 1:
                is_name = False
            if not isinstance(root.body[0], ast.Expr):
                is_name = False
            if not isinstance(root.body[0].value, ast.Name):
                is_name = False
            if root.body[0].value.id != name:
                is_name = False
        if not is_name:
            warn = "invalid identifier " + name
            name = re.sub('[^0-9a-zA-Z_]', '', name)
            name = re.sub('^[^a-zA-Z_]+', '', name)
            warnings.warn(warn + " converted to " + name, SyntaxWarning)

        f(self, name)
        

    return set_name

NamedData.name = property(NamedData.get_name, wrapper_set_name(NamedData.set_name))
del wrapper_set_name, NamedData.get_name, NamedData.set_name

class Events(object):

    def __init__(self, dataframe):
        self._dataframe = dataframe

    def __iter__(self):

        class Iterator(object):

            def __init__(self, events):
                self._events = events
                self._index = 0

            def next(self):
                if self._index < len(self._events):
                    event = self._events[self._index]
                    self._index += 1
                    return event
                else:
                    raise StopIteration()

        return Iterator(self)

def wrapper_events(f0, f1, f2):

    @wraps(f0)
    def __len__(self):
        return f0(self._dataframe)

    @wraps(f1)
    def __getitem__(self, index):
        if isinstance(index, slice):
            return [self[index] for index in xrange(*index.indices(len(self)))]
        else:
            if index < 0:
                index += len(self)
            if not 0 <= index < len(self):
                raise IndexError(self._dataframe.__class__.__name__ + " index out of range")
            return f1(self._dataframe, index)

    @wraps(f2)
    def __setitem__(self, index, value):
        if isinstance(index, slice):
            try:
                indices = index
                values = self[index]
                for index, value in zip(index.indices(len(self)), value):
                    self[index] = value
            except:
                for index, value in zip(indices, values):
                     self[index] = value
                raise
        else:
            if index < 0:
                index += len(self)
            if not 0 <= index < len(self):
                raise IndexError(self._dataframe.__class__.__name__ + " index out of range")
            return f2(self._dataframe, index, value)

    return __len__, __getitem__, __setitem__

class UnivariateEvents(Events):
    pass

UnivariateEvents.__len__, UnivariateEvents.__getitem__, UnivariateEvents.__setitem__ = wrapper_events(UnivariateDataFrame.get_nb_events, UnivariateDataFrame.get_event, UnivariateDataFrame.set_event)
del UnivariateDataFrame.get_nb_events, UnivariateDataFrame.get_event, UnivariateDataFrame.set_event
UnivariateDataFrame.events = property(UnivariateEvents)

UnivariateDataFrame.sample_space = property(UnivariateData.sample_space.fget, UnivariateDataFrame.set_sample_space)
del UnivariateDataFrame.set_sample_space

def __str__(self):
    events = self.events
    if len(events) > controls.head:
        rows = [("", str(self.name))] + [(str(index), str(event)) if event is not None else (repr(index), '?') for index, event in enumerate(events) if index < controls.head] + [('...', '...')] + [(repr(index), repr(event)) if event is not None else (repr(index), '?') for index, event in enumerate(events) if index > max(len(events) - controls.tail, controls.head)]
    else:
        rows = [("", str(self.name))] + [(str(index), str(event)) if event is not None else (repr(index), '?') for index, event in enumerate(events)]
    columns = zip(*rows)
    maxima = [max(max(*[len(row) for row in column]), 3) + 2 for column in columns]
    string = []
    for index, row in enumerate(rows):
        string.append(' '.join(('{:<' + repr(maximum) + '}').format(row[index]) for index, maximum in enumerate(maxima)))
    return '\n'.join(string)

UnivariateDataFrame.__str__ = UnivariateDataFrame.__str__
UnivariateDataFrame.__repr__ = __str__
del __str__

def _repr_html_(self):
    sample_space = self.sample_space
    string = '<table style="max-width: 100%;">\n\t\t<tr>\n\t\t\t<th></th>\n\t\t\t<th>$'+ r'\mathbf{' + self.name + '}$</th>\n\t\t</tr>'
    etc = False
    events = self.events
    for index, event in enumerate(events):
        if index < controls.head or index >= max(controls.head, len(events) - controls.tail):
            string += '\n\t\t<tr>\n\t\t\t<th>' + repr(index) + '</th>\n'
            string += '\n\t\t\t<td>'
            if event is not None:
                string += event._repr_latex_()
            else:
                string += sample_space._repr_latex_()
            string += '</td>'
        elif not etc:
            etc = True
            string += '\n\t\t<tr>\n\t\t\t<th> . . . </th>'
            string += '\n\t\t\t<td>$\dots$</td>\n\t\t</tr>'
    string += '\n\t</table>'
    return string

UnivariateDataFrame._repr_html_ = _repr_html_
del _repr_html_

def pdf_plot(self, axes=None, color='b', alpha=1., **kwargs):
    from estimation import frequency_estimation, histogram_estimation
    sample_space = self.sample_space
    norm = kwargs.pop('norm', False)
    if isinstance(norm, bool):
        if not norm:
            kwargs['norm'] = self.total
    elif isinstance(norm, (int, float)):
        if norm <= 0:
            raise ValueError('\'norm\' parameter')
        kwargs['norm'] = norm
    else:
        raise TypeError('\'norm\' parameter')
    if sample_space.outcome is outcome_type.CATEGORICAL:
        estimation = frequency_estimation(data = self, **kwargs.pop('frequency', dict(lazy=True)))
        axes = estimation.estimated.pdf_plot(axes=axes, color=color, alpha=alpha, **kwargs)
    elif sample_space.outcome is outcome_type.DISCRETE:
        estimation = frequency_estimation(data = self, **kwargs.pop('frequency', dict(lazy=True)))
        axes = estimation.estimated.pdf_plot(axes=axes, color=color, alpha=alpha, pmin=0., pmax=1., **kwargs)
    elif sample_space.outcome is outcome_type.CONTINUOUS:
        fmt = kwargs.pop('fmt', '|')
        if fmt == '|':
            estimation = histogram_estimation(self, **kwargs.pop('histogram', dict(lazy=True)))
            axes = estimation.estimated.pdf_plot(axes=axes, color=color, alpha=alpha, fmt=fmt, **kwargs)
        elif fmt == '-':
            raise NotImplementedError
    else:
        raise NotImplementedError
    return axes

UnivariateDataFrame.pdf_plot = pdf_plot
del pdf_plot

def cdf_plot(self, axes=None, color='b', alpha=1., **kwargs):
    from estimation import frequency_estimation
    sample_space = self.sample_space
    norm = kwargs.pop('norm', False)
    if isinstance(norm, bool):
        if not norm:
            kwargs['norm'] = self.total
    elif isinstance(norm, (int, float)):
        if norm <= 0:
            raise ValueError('\'norm\' parameter')
        kwargs['norm'] = norm
    else:
        raise TypeError('\'norm\' parameter')
    estimation = frequency_estimation(data = self, **kwargs.pop('frequency', dict(lazy=True)))
    if not sample_space.outcome is outcome_type.CATEGORICAL:
        if not 'pmin' in kwargs:
            kwargs['pmin'] = 0.
        if not 'pmax' in kwargs:
            kwargs['pmax'] = 1.
    return estimation.estimated.cdf_plot(axes=axes, color=color, alpha=alpha, **kwargs)

UnivariateDataFrame.cdf_plot = cdf_plot
del cdf_plot

def names(self):
    return [str(component.name) for component in self.components]

MultivariateDataFrame.names = property(names)
del names

def __dir__(self):
    return sorted(self.names)

MultivariateDataFrame.__dir__ = __dir__
del __dir__

def __getattr__(self, attr):
    try:
        names = self.names
        index = names.index(attr)
        return self.components[index]
    except:
        raise AttributeError("'" + self.__class__.__name__ + "' object has no attribute '" + attr + "'")

MultivariateDataFrame.__getattr__ = __getattr__
del __getattr__

class MultivariateEvents(Events):
    pass

MultivariateEvents.__len__, MultivariateEvents.__getitem__, MultivariateEvents.__setitem__ = wrapper_events(MultivariateDataFrame.get_nb_events, MultivariateDataFrame.get_event, MultivariateDataFrame.set_event)
del MultivariateDataFrame.get_nb_events, MultivariateDataFrame.get_event, MultivariateDataFrame.set_event
MultivariateDataFrame.events = property(MultivariateEvents)

class Components(object):

    def __init__(self, dataframe):
        self._dataframe = dataframe

    def __iter__(self):

        class Iterator(object):

            def __init__(self, components):
                self._components = components
                self._index = 0

            def next(self):
                if self._index < len(self._components):
                    component = self._components[self._index]
                    self._index += 1
                    return component
                else:
                    raise StopIteration()

        return Iterator(self)
        
def wrapper_components(f0, f1, f2):

    @wraps(f0)
    def __len__(self):
        return f0(self._dataframe)

    @wraps(f1)
    def __getitem__(self, index):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError(self._dataframe.__class__.__name__ + " index out of range")
        return f1(self._dataframe, index)

    @wraps(f2)
    def __setitem__(self, index, value):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError(self._dataframe.__class__.__name__ + " index out of range")
        return f2(self._dataframe, index, value)

    return __len__, __getitem__, __setitem__

Components.__len__, Components.__getitem__, Components.__setitem__ = wrapper_components(MultivariateDataFrame.get_nb_components, MultivariateDataFrame.get_component, MultivariateDataFrame.set_component)
del wrapper_components, MultivariateDataFrame.get_nb_components, MultivariateDataFrame.get_component, MultivariateDataFrame.set_component
MultivariateDataFrame.components = property(Components)

def __repr__(self):
    events = self.events
    if len(events) > controls.head:
        rows = [[""] + [repr(component.name) for component in self.components]] + [[repr(index)] + [repr(uevent) if uevent is not None else '?' for uevent in mevent] for index, mevent in enumerate(events) if index < controls.head] + [['...'] + ['...'] * len(self.components)] + [[repr(index)] + [repr(uevent) if uevent is not None else '?' for uevent in mevent] for index, mevent in enumerate(events) if index > max(len(events) - controls.tail, controls.head)]
    else:
        rows = [[""] + [repr(component.name) for component in self.components]] + [[repr(index)] + [repr(uevent) if uevent is not None else '?' for uevent in mevent] for index, mevent in enumerate(events)]
    columns = zip(*rows)
    maxima = [max(max(*[len(row) for row in column]), 3) + 2 for column in columns]
    string = []
    for index, row in enumerate(rows):
        string.append(' '.join(('{:<' + repr(maximum) + '}').format(row[index]) for index, maximum in enumerate(maxima)))
    return '\n'.join(string)

MultivariateDataFrame.__str__ = MultivariateDataFrame.__repr__
MultivariateDataFrame.__repr__ = __repr__
del __repr__

def _repr_html_(self):
    string = '<table style="max-width: 100%;">'
    string += '\n\t\t<tr>\n\t\t\t<th></th>'
    for component in self.components:
        string += '\n\t\t\t<th>'+ component.name + '</th>'
    string += '\n\t\t</tr>'
    etc = False
    events = self.events
    for i, event in enumerate(events):
        if i < controls.head or i >= max(controls.head, len(events) - controls.tail):
            string += '\n\t\t<tr>\n\t\t\t<th>' + repr(i) + '</th>' + '\n\t\t\t<td>'
            string += '</td>\n\t\t\t<td>'.join(event[k]._repr_latex_() if event[k] is not None else self.sample_space[k]._repr_latex_() for k in range(len(event)))
            string += '</td>'
        elif not etc:
            etc = True
            string += '\n\t\t<tr>\n\t\t\t<th> . . . </th>'
            string += '\n\t\t\t<td>$\dots$</td>' * len(event)
    string += '\n\t</table>'
    return string

MultivariateDataFrame._repr_html_ = _repr_html_
del _repr_html_

#def lorenz_plot(self, axes=None, fmt='-', color='b', alpha=1., **kwargs):
#    sample_space = self.sample_space
#    norm = kwargs.pop('norm', False)
#    if isinstance(norm, bool):
#        if not norm:
#            kwargs['norm'] = self.compute_total(True)
#    elif isinstance(norm, (int, float)):
#        if norm <= 0:
#            raise ValueError('\'norm\' parameter')
#        kwargs['norm'] = norm
#    else:
#        raise TypeError('\'norm\' parameter')
#    estimation = frequency_estimation(data = self, **kwargs.pop('frequency', dict(lazy=True)))
#    if not sample_space.outcome is outcome_type.CATEGORICAL:
#        if not 'pmin' in kwargs:
#            kwargs['pmin'] = 0.
#        if not 'pmax' in kwargs:
#            kwargs['pmax'] = 1.
#    return estimation.estimated.lorenz_plot(axes=axes, fmt=fmt, color=color, alpha=alpha, **kwargs)
#
#UnivariateDataFrame.lorenz_plot = lorenz_plot
#del lorenz_plot
