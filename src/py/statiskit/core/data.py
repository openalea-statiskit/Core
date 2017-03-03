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
                              NamedData,
                              UnivariateDataFrame, WeightedUnivariateDataFrame,
                              MultivariateData,
                              MultivariateDataFrame)

from controls import controls
from event import outcome_type

__all__ = ['UnivariateDataFrame', 'WeightedUnivariateDataFrame', 'MultivariateDataFrame']

UnivariateData.Generator.__nonzero__ = UnivariateData.Generator.is_valid
MultivariateData.Generator.__nonzero__ = MultivariateData.Generator.is_valid
del UnivariateData.Generator.is_valid, MultivariateData.Generator.is_valid

UnivariateData.Generator.event = property(UnivariateData.Generator.event)
MultivariateData.Generator.event = property(MultivariateData.Generator.event)

UnivariateData.Generator.weight = property(UnivariateData.Generator.weight)
MultivariateData.Generator.weight = property(MultivariateData.Generator.weight)

def wrapper_next(f):

    class IteratorState(object):

        def __init__(self, generator):
            self._event = generator.event
            self._weight = generator.weight

        @property
        def event(self):
            return self._event

        @property
        def weight(self):
            return self._weight

    @wraps(f)
    def next(self):
        if not self:
            raise StopIteration()
        else:
            state = IteratorState(self)
            f(self)
            return state

    return next

UnivariateData.Generator.next = wrapper_next(UnivariateData.Generator.__next__)
del wrapper_next

def wrapper_next(f):

    class IteratorState(object):

        def __init__(self, generator):
            self._event = generator.event[:]
            self._weight = generator.weight

        @property
        def event(self):
            return self._event

        @property
        def weight(self):
            return self._weight

    @wraps(f)
    def next(self):
        if not self:
            raise StopIteration()
        else:
            state = IteratorState(self)
            f(self)
            return state

    return next

MultivariateData.Generator.next = wrapper_next(MultivariateData.Generator.__next__)
del wrapper_next

UnivariateData.sample_space = property(UnivariateData.get_sample_space)
MultivariateData.sample_space = property(MultivariateData.get_sample_space)
del UnivariateData.get_sample_space

UnivariateData.total = property(UnivariateData.compute_total)
del UnivariateData.compute_total

UnivariateData.min = property(UnivariateData.compute_minimum)
del UnivariateData.compute_minimum

UnivariateData.max = property(UnivariateData.compute_maximum)
del UnivariateData.compute_maximum

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

UnivariateDataFrame.sample_space = property(UnivariateData.sample_space.fget, UnivariateDataFrame.set_sample_space)
del UnivariateDataFrame.set_sample_space

UnivariateDataFrame.nb_events = property(UnivariateDataFrame.get_nb_events)
del UnivariateDataFrame.get_nb_events

def __str__(self):
    if self.nb_events > controls.head:
        rows = [("", str(self.name))] + [(str(index), str(it.event)) if it.event is not None else (repr(index), '?') for index, it in enumerate(self) if index < controls.head] + [('...', '...')] + [(repr(index), repr(it.event)) if it.event is not None else (repr(index), '?') for index, it in enumerate(self) if index > max(self.nb_events - controls.tail, controls.head)]
    else:
        rows = [("", str(self.name))] + [(str(index), str(it.event)) if it.event is not None else (repr(index), '?') for index, it in enumerate(self)]
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
    string = '<table style="max-width: 100%;">\n\t\t<tr>\n\t\t\t<th></th>\n\t\t\t<th>$'+ r'\mathbf{' + controls.remove_latex(self.name._repr_latex_()) + '}$</th>\n\t\t</tr>'
    etc = False
    for i, j in enumerate(self):
        if i < controls.head or i >= max(controls.head, len(self) - controls.tail):
            string += '\n\t\t<tr>\n\t\t\t<th>' + repr(i) + '</th>\n'
            string += '\n\t\t\t<td>'
            if j is not None:
                string += j._repr_latex_()
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
        if fmt == '|':
            estimation = histogram_estimation(self, **kwargs.pop('histogram', dict(lazy=True)))
            axes = estimation.estimated.pdf_plot(axes=axes, color=color, alpha=alpha, **kwargs)
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

MultivariateDataFrame.nb_events = property(MultivariateDataFrame.get_nb_events)
MultivariateDataFrame.nb_variables = property(MultivariateDataFrame.get_nb_variables)

def names(self):
    return [str(self.get_variable(index).name) for index in range(self.nb_variables)]

MultivariateDataFrame.names = property(names)
del names

def __dir__(self):
    return sorted(self.names)

MultivariateDataFrame.__dir__ = __dir__
del __dir__

def __getattr__(self, attr):
    try:
        return self.get_variable(self.names.index(attr))
    except:
        raise AttributeError("'" + self.__class__.__name__ + "' object has no attribute '" + attr + "'")

MultivariateDataFrame.__getattr__ = __getattr__
del __getattr__

def __repr__(self):
    if self.nb_events > controls.head:
        rows = [[""] + [repr(variable.name) for variable in self.variables]] + [[repr(index)] + [repr(uevent) if uevent is not None else '?' for uevent in mevent] for index, mevent in enumerate(self) if index < controls.head] + [['...'] + ['...'] * len(self.variables)] + [[repr(index)] + [repr(uevent) if uevent is not None else '?' for uevent in mevent] for index, mevent in enumerate(self) if index > max(len(self) - controls.tail, controls.head)]
    else:
        rows = [[""] + [repr(variable.name) for variable in self.variables]] + [[repr(index)] + [repr(uevent) if uevent is not None else '?' for uevent in mevent] for index, mevent in enumerate(self)]
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
    for variable in range(self.nb_variables):
        string += '\n\t\t\t<th>'+ self.get_variable(variable).name + '</th>'
    string += '\n\t\t</tr>'
    etc = False
    for i, j in enumerate(self):
        if i < controls.head or i >= max(controls.head, self.nb_events - controls.tail):
            string += '\n\t\t<tr>\n\t\t\t<th>' + repr(i) + '</th>' + '\n\t\t\t<td>'
            string += '</td>\n\t\t\t<td>'.join(j.event[k]._repr_latex_() if j.event[k] is not None else self.sample_space[k]._repr_latex_() for k in range(len(j.event)))
            string += '</td>'
        elif not etc:
            etc = True
            string += '\n\t\t<tr>\n\t\t\t<th> . . . </th>'
            string += '\n\t\t\t<td>$\dots$</td>' * len(j.event)
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
