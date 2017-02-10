##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

from functools import wraps
import warnings
from statiskit.misc.tools import to_identifier
import re

import statiskit.core._core
from statiskit.core.__core.statiskit import VariableName, UnivariateDataFrame, WeightedUnivariateDataFrame, MultivariateDataFrame

from statiskit.core.controls import controls
from statiskit.core.event import outcome_type
from statiskit.core.estimator import frequency_estimation, histogram_estimation

__all__ = ['UnivariateDataFrame', 'WeightedUnivariateDataFrame', 'MultivariateDataFrame']

def wrapper(f):
    @wraps(f)
    def __init__(self, *args):
        if len(args) > 0:
            if isinstance(args[0], VariableName):
                f(self, args[0])
            else:
                f(self, to_identifier(args[0]))
                if len(args) > 1:
                    self.ascii = args[1]
                    if len(args) > 2:
                        self.latex = args[1]
                elif not self.identifier == args[0]:
                    self.ascii = args[0]
        else:
            f(self)
    return __init__

VariableName.__init__ = wrapper(VariableName.__init__)
del wrapper

def wrapper(f):
    @wraps(f)
    def set_identifier(self, identifier):
        identifier = to_identifier(identifier)
        f(self, identifier)
    return set_identifier

VariableName.identifier = property(VariableName.get_identifier, wrapper(VariableName.set_identifier))
del wrapper, VariableName.get_identifier, VariableName.set_identifier

def wrapper(f):
    @wraps(f)
    def get_ascii(self):
        ascii = f(self)
        if ascii == '':
            return self.identifier
        else:
            return ascii
    return get_ascii

VariableName.ascii = property(wrapper(VariableName.get_ascii), VariableName.set_ascii)
del wrapper, VariableName.get_ascii, VariableName.set_ascii

def __repr__(self):
    return self.ascii

VariableName.__str__ = VariableName.__repr__
VariableName.__repr__ = __repr__
del __repr__

def wrapper(f):
    @wraps(f)
    def get_latex(self):
        latex = f(self)
        if latex == '':
            ascii = self.ascii
            if re.match("V([0-9]*)", ascii):
                return r"$\text{V}_{" + ascii[1:] + "}$"
            else:
                return r"$\text{" + ascii + "}$"
        else:
            return latex
    return get_latex

VariableName.latex = property(wrapper(VariableName.get_latex), VariableName.set_latex)
del wrapper, VariableName.get_latex, VariableName.set_latex

def _repr_latex_(self):
    return self.latex

VariableName._repr_latex_ = _repr_latex_
del _repr_latex_

def wrapper(f):
    @wraps(f)
    def __init__(self, *args):
        variables = UnivariateDataFrameVector()
        for arg in args:
            try:
                variables.push_back(arg)
            except:
                raise
        f(self, variables)
    return __init__

MultivariateDataFrame.__init__ = wrapper(MultivariateDataFrame.__init__)
del wrapper

def __repr__(self):
    if len(self) > controls.head:
        rows = [("", repr(self.name))] + [(repr(index), repr(event)) if event is not None else (repr(index), '?') for index, event in enumerate(self) if index < controls.head] + [('...', '...')] + [(repr(index), repr(event)) if event is not None else (repr(index), '?') for index, event in enumerate(self) if index > max(len(self) - controls.tail, controls.head)]
    else:
        rows = [("", repr(self.name))] + [(repr(index), repr(event)) if event is not None else (repr(index), '?') for index, event in enumerate(self)]
    columns = zip(*rows)
    maxima = [max(max(*[len(row) for row in column]), 3) + 2 for column in columns]
    string = []
    for index, row in enumerate(rows):
        string.append(' '.join(('{:<' + repr(maximum) + '}').format(row[index]) for index, maximum in enumerate(maxima)))
    return '\n'.join(string)

UnivariateDataFrame.__str__ = UnivariateDataFrame.__repr__
UnivariateDataFrame.__repr__ = __repr__
del __repr__

def __repr__(self):
    if len(self) > controls.head:
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

def _repr_html_(self):
    string = '<table style="max-width: 100%;">'
    string += '\n\t\t<tr>\n\t\t\t<th></th>'
    for variable in self.variables:
        string += '\n\t\t\t<th>$'+r'\mathbf{' + controls.remove_latex(variable.name._repr_latex_()) + '}$</th>'
    string += '\n\t\t</tr>'
    etc = False
    for i, j in enumerate(self):
        if i < controls.head or i >= max(controls.head, len(self) - controls.tail):
            string += '\n\t\t<tr>\n\t\t\t<th>' + repr(i) + '</th>'
            string += '\n\t\t\t<td>' + '</td>\n\t\t\t<td>'.join(l._repr_latex_() if l is not None else self.variables[k].sample_space._repr_latex_() for k, l in enumerate(j)) + '</td>'
        elif not etc:
            etc = True
            string += '\n\t\t<tr>\n\t\t\t<th> . . . </th>'
            string += '\n\t\t\t<td>$\dots$</td>' * len(j)
    string += '\n\t</table>'
    return string

MultivariateDataFrame._repr_html_ = _repr_html_
del _repr_html_

def wrapper(f):
    @wraps(f)
    def set_name(self, name):
        if name is None:
            name = VariableName()
        elif not isinstance(name, VariableName):
            name = VariableName(name)
        f(self, name)
    return set_name

UnivariateDataFrame.name = property(UnivariateDataFrame.get_name, wrapper(UnivariateDataFrame.set_name))
del UnivariateDataFrame.get_name, UnivariateDataFrame.set_name

UnivariateDataFrame.sample_space = property(UnivariateDataFrame.get_sample_space, UnivariateDataFrame.set_sample_space)
del UnivariateDataFrame.get_sample_space, UnivariateDataFrame.set_sample_space

def wrapper(f, g):
    @wraps(f)
    @wraps(g)
    def set_locked(self, locked):
        if self.locked and not locked:
            warnings.warn('Unlocking data frame can have serious side effects')
            g(self)
        elif not self.locked and locked:
            f(self)
    return set_locked

UnivariateDataFrame.locked = property(UnivariateDataFrame.is_locked, wrapper(UnivariateDataFrame.lock, UnivariateDataFrame.unlock))
del wrapper, UnivariateDataFrame.is_locked, UnivariateDataFrame.lock, UnivariateDataFrame.unlock

class SampleSpaceProxy(object):

    def __init__(self, data):
        self.data = data

    def __repr__(self):
        return ' x '.join(repr(sample_space) for sample_space in self) + ')'

    def __len__(self):
        return len(self.data.variables)

    def __getitem__(self, index):
        return self.data.variables[index].sample_space

    def __setitem__(self, index, value):
        self.data.variables[index].sample_space = value

    def _repr_latex_(self):
        string = []
        previous = ''
        nb = 0
        for sample_space in self:
            current = controls.remove_latex(sample_space._repr_latex_())
            if previous == '' or current == previous:
                nb += 1
            else:
                if nb == 1:
                    string.append(previous)
                else:
                    string.append('{' + previous + '}^{' + repr(nb) +'}')
                nb = 1
            previous = current
        if nb == 1:
            string.append(previous)
        else:
            string.append('{' + previous + '}^{' + repr(nb) +'}')
        return '$' + r' \times '.join(string) + '$'

MultivariateDataFrame.sample_space = property(SampleSpaceProxy)

UnivariateDataFrame.__len__ = UnivariateDataFrame.size
del UnivariateDataFrame.size

MultivariateDataFrame.__len__ = MultivariateDataFrame.size
del MultivariateDataFrame.size

def wrapper(f):
    @wraps(f)
    def __getitem__(self, index):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError
        return f(self, index)
    return __getitem__

UnivariateDataFrame.__getitem__ = wrapper(UnivariateDataFrame.get_event)
MultivariateDataFrame.__getitem__ = wrapper(MultivariateDataFrame.get_event)#__getitem__
del wrapper, UnivariateDataFrame.get_event, MultivariateDataFrame.get_event

def wrapper(f):
    @wraps(f)
    def __setitem__(self, index, event):
        event = self.sample_space(event)
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError
        return f(self, index, event)
    return __setitem__

UnivariateDataFrame.__setitem__ = wrapper(UnivariateDataFrame.set_event)
MultivariateDataFrame.__setitem__ = wrapper(MultivariateDataFrame.set_event)
del wrapper, UnivariateDataFrame.set_event, MultivariateDataFrame.set_event

def wrapper(f):
    @wraps(f)
    def append(self, event=None):
        event = self.sample_space(event)
        if event is None:
            f(self)
        else:
            f(self, event)
    return append

UnivariateDataFrame.append = wrapper(UnivariateDataFrame.append_event)
MultivariateDataFrame.append = wrapper(MultivariateDataFrame.append_event)
del wrapper, UnivariateDataFrame.append_event, MultivariateDataFrame.append_event

def wrapper(f):
    @wraps(f)
    def append(self, event=None, weight=1.):
        event = self.sample_space(event)
        if event is None:
            if not weight == 1.:
                raise ValueError('\'weight\' parameter')
            f(self)
        else:
            f(self, event, weight)
    return append

WeightedUnivariateDataFrame.append = wrapper(WeightedUnivariateDataFrame.append_event)
#MultivariateDataFrame.append = wrapper(MultivariateDataFrame.append_event)
del wrapper, WeightedUnivariateDataFrame.append_event#, MultivariateDataFrame.append_event

def wrapper(f):
    @wraps(f)
    def insert(self, index, event=None):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError
        event = self.sample_space(event)
        if event is None:
            f(self, index)
        else:
            f(self, index, event)
    return insert

UnivariateDataFrame.insert = wrapper(UnivariateDataFrame.insert_event)
MultivariateDataFrame.insert = wrapper(MultivariateDataFrame.insert_event)
del wrapper, UnivariateDataFrame.insert_event, MultivariateDataFrame.insert_event

def wrapper(f):
    @wraps(f)
    def remove(self, index=-1):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError
        f(self, index)
    return remove

UnivariateDataFrame.remove = wrapper(UnivariateDataFrame.remove_event)
MultivariateDataFrame.remove = wrapper(MultivariateDataFrame.remove_event)
del wrapper, UnivariateDataFrame.remove_event, MultivariateDataFrame.remove_event

class VariablesProxy(object):

    def __init__(self, data):
        self.data = data

    def _repr_latex_(self):
        return r'$\left(' + ', '.join(variable._repr_latex_() for variable in self) + r'\right)$'

def __repr__(self):
    return '(' + ', '.join(variable.__repr__()  for variable in self) + ')'

VariablesProxy.__str__ = VariablesProxy.__repr__
VariablesProxy.__repr__ = __repr__
del __repr__

def wrapper(f):
    @wraps(f)
    def __len__(self):
        return f(self.data)
    return __len__

VariablesProxy.__len__ = wrapper(MultivariateDataFrame.get_nb_variables)
del wrapper, MultivariateDataFrame.get_nb_variables

def wrapper(f):
    @wraps(f)
    def __getitem__(self, index):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError
        return f(self.data, index)
    return __getitem__

VariablesProxy.__getitem__ = wrapper(MultivariateDataFrame.get_variable)
del wrapper, MultivariateDataFrame.get_variable

def wrapper(f):
    @wraps(f)
    def __setitem__(self, index, variable):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError
        f(self.data, index, variable)
    return __setitem__

VariablesProxy.__setitem__ = wrapper(MultivariateDataFrame.set_variable)
del wrapper, MultivariateDataFrame.set_variable

def wrapper(f):
    @wraps(f)
    def __setitem__(self, variable):
        f(self.data, variable)
    return __setitem__

VariablesProxy.append = wrapper(MultivariateDataFrame.append_variable)
del wrapper, MultivariateDataFrame.append_variable

def wrapper(f):
    @wraps(f)
    def insert(self, index, variable):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError
        f(self.data, index, variable)
    return insert

#VariablesProxy.insert = wrapper(MultivariateDataFrame.insert_variable)
#del wrapper, MultivariateDataFrame.insert_variable

def wrapper(f):
    @wraps(f)
    def remove(self, index=-1):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError
        f(self.data, index)
    return remove

VariablesProxy.remove = wrapper(MultivariateDataFrame.remove_variable)
del wrapper, MultivariateDataFrame.remove_variable

MultivariateDataFrame.variables = property(VariablesProxy)

def __dir__(self):
    return [str(variable.name.identifier) for variable in self.variables]

MultivariateDataFrame.__dir__ = __dir__
del __dir__

def __getattr__(self, attr):
    try:
        return self.variables[[str(variable.name.identifier) for variable in self.variables].index(attr)]
    except:
        raise AttributeError(attr)

MultivariateDataFrame.__getattr__ = __getattr__
del __getattr__

def pdf_plot(self, axes=None, color='b', alpha=1., **kwargs):
    sample_space = self.sample_space
    norm = kwargs.pop('norm', False)
    if isinstance(norm, bool):
        if not norm:
            kwargs['norm'] = self.compute_total(True)
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
    sample_space = self.sample_space
    norm = kwargs.pop('norm', False)
    if isinstance(norm, bool):
        if not norm:
            kwargs['norm'] = self.compute_total(True)
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
