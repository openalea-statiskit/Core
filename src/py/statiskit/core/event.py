##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

from functools import wraps

import statiskit.core._core
from statiskit.core.__core.statiskit import outcome_type, event_type, UnivariateEvent, _ElementaryEvent, _SetCensoredEvent, _LeftCensoredEvent, _RightCensoredEvent, _IntervalCensoredEvent, CategoricalElementaryEvent, CategoricalSetCensoredEvent, DiscreteElementaryEvent, DiscreteSetCensoredEvent, DiscreteLeftCensoredEvent, DiscreteRightCensoredEvent, DiscreteIntervalCensoredEvent, ContinuousElementaryEvent, ContinuousSetCensoredEvent, ContinuousLeftCensoredEvent, ContinuousRightCensoredEvent,ContinuousIntervalCensoredEvent, MultivariateEvent

from statiskit.core.controls import controls

__all__ = ['outcome_type', 'event_type',
           'CategoricalElementaryEvent', 'CategoricalSetCensoredEvent',
           'DiscreteElementaryEvent', 'DiscreteSetCensoredEvent', 'DiscreteLeftCensoredEvent', 'DiscreteRightCensoredEvent', 'DiscreteIntervalCensoredEvent',
           'ContinuousElementaryEvent', 'ContinuousSetCensoredEvent', 'ContinuousLeftCensoredEvent', 'ContinuousRightCensoredEvent', 'ContinuousIntervalCensoredEvent']

UnivariateEvent.outcome = property(UnivariateEvent.get_outcome)
del UnivariateEvent.get_outcome

UnivariateEvent.event = property(UnivariateEvent.get_event)
del UnivariateEvent.get_event

def statiskit_elementary_event_decorator(cls):

    def __str__(self):
        return str(self.value)

    cls.__str__ = __str__
    del __str__

    def _repr_latex_(self):
        return "$" + repr(self) + "$"

    cls._repr_latex_ = _repr_latex_
    del _repr_latex_

    cls.value = property(cls.get_value)
    del cls.get_value

for cls in _ElementaryEvent:
    statiskit_elementary_event_decorator(cls)

def __repr__(self):
    return str(self.value)

CategoricalElementaryEvent.__repr__ = __repr__
del __repr__

def __repr__(self):
    return str(self.value)

DiscreteElementaryEvent.__repr__ = __repr__
del __repr__

def __repr__(self):
    return controls.float_str(self.value)

ContinuousElementaryEvent.__repr__ = __repr__
del __repr__

def statiskit_set_censored_event_decorator(cls):

    def __str__(self):
        return "{" + ", ".join(str(value) for value in self.values) + "}"

    cls.__str__ = __str__
    del __str__

    def __repr__(self):
        return "{" + ", ".join(repr(value) for value in self.values) + "}"

    cls.__repr__ = __repr__
    del __repr__

    def _repr_latex_(self):
        return r"$\left\{" + ", ".join(controls.remove_latex(value._repr_latex_()) for value in self.values) + r"}\right\}$"

    cls._repr_latex_ = _repr_latex_
    del _repr_latex_

def wrapper(f):
    @wraps(f)
    def get_values(self):
        values = f(self)
        return [CategoricalElementaryEvent(value) for value in values]

CategoricalSetCensoredEvent.values = wrapper(CategoricalSetCensoredEvent.get_values)
del CategoricalSetCensoredEvent.get_values

def wrapper(f):
    @wraps(f)
    def get_values(self):
        values = f(self)
        return [DiscreteElementaryEvent(value) for value in values]

DiscreteSetCensoredEvent.values = wrapper(DiscreteSetCensoredEvent.get_values)
del DiscreteSetCensoredEvent.get_values

def wrapper(f):
    @wraps(f)
    def get_values(self):
        values = f(self)
        return [ContinuousElementaryEvent(value) for value in values]

ContinuousSetCensoredEvent.values = wrapper(ContinuousSetCensoredEvent.get_values)
del ContinuousSetCensoredEvent.get_values

for cls in _SetCensoredEvent:
    statiskit_set_censored_event_decorator(cls)

def statiskit_left_censored_event_decorator(cls):

    def __str__(self):
        return str(self.upper_bound) + "-"

    cls.__str__ = __str__
    del __str__

    def __repr__(self):
        return repr(self.upper_bound) + "-"

    cls.__repr__ = __repr__
    del __repr__

    def _repr_latex_(self):
        return r"$\left] -\infty, " + str(self.upper_bound) + r" \right]$"

    cls._repr_latex_ = _repr_latex_
    del _repr_latex_

def wrapper(f):
    @wraps(f)
    def get_upper_bound(self):
        return DiscreteElementaryEvent(f(self))

DiscreteLeftCensoredEvent.upper_bound = property(wrapper(DiscreteLeftCensoredEvent.get_upper_bound))
del DiscreteLeftCensoredEvent.get_upper_bound

def wrapper(f):
    @wraps(f)
    def get_upper_bound(self):
        return ContinuousElementaryEvent(f(self))

ContinuousLeftCensoredEvent.upper_bound = property(wrapper(ContinuousLeftCensoredEvent.get_upper_bound))
del ContinuousLeftCensoredEvent.get_upper_bound

def statiskit_right_censorted_event_decorator(cls):

    def __str__(self):
        return str(self.lower_bound) + "+"

    cls.__str__ = __str__
    del __str__

    def __repr__(self):
        return repr(self.lower_bound) + "+"

    cls.__repr__ = __repr__
    del __repr__

    def _repr_latex_(self):
        return r"$\left[" + controls.remove_latex(self.lower_bound._repr_latex_()) + r", \infty \right[$"

    cls._repr_latex_ = _repr_latex_
    del _repr_latex_

def wrapper(f):
    @wraps(f)
    def get_lower_bound(self):
        return DiscreteElementaryEvent(f(self))

DiscreteRightCensoredEvent.lower_bound = property(wrapper(DiscreteRightCensoredEvent.get_lower_bound))
del DiscreteRightCensoredEvent.get_lower_bound

def wrapper(f):
    @wraps(f)
    def get_lower_bound(self):
        return ContinuousElementaryEvent(f(self))

ContinuousRightCensoredEvent.lower_bound = property(wrapper(ContinuousRightCensoredEvent.get_lower_bound))
del ContinuousRightCensoredEvent.get_lower_bound

def statiskit_interval_censorted_event_decorator(cls):

    def __str__(self):
        return "[" + str(self.lower_bound) + ", " + str(self.upper_bound) + "]"

    cls.__str__ = __str__
    del __str__

    def __repr__(self):
        return "[" + repr(self.lower_bound) + ", " + repr(self.upper_bound) + "]"

    cls.__repr__ = __repr__
    del __repr__

    def _repr_latex_(self):
        return r"$\left[" + controls.remove_latex(self.lower_bound._repr_latex_()) + ", " + controls.remove_latex(self.upper_bound._repr_latex_()) + r"\right]$"

    cls._repr_latex_ = _repr_latex_
    del _repr_latex_

def wrapper(f):
    @wraps(f)
    def get_upper_bound(self):
        return DiscreteElementaryEvent(f(self))

DiscreteIntervalCensoredEvent.upper_bound = property(wrapper(DiscreteIntervalCensoredEvent.get_upper_bound))
del DiscreteIntervalCensoredEvent.get_upper_bound

def wrapper(f):
    @wraps(f)
    def get_upper_bound(self):
        return ContinuousElementaryEvent(f(self))

ContinuousIntervalCensoredEvent.upper_bound = property(wrapper(ContinuousIntervalCensoredEvent.get_upper_bound))
del ContinuousIntervalCensoredEvent.get_upper_bound

MultivariateEvent.__len__ = MultivariateEvent.size
del MultivariateEvent.size

def wrapper(f):
    @wraps(f)
    def get_lower_bound(self):
        return DiscreteElementaryEvent(f(self))

DiscreteIntervalCensoredEvent.lower_bound = property(wrapper(DiscreteIntervalCensoredEvent.get_lower_bound))
del DiscreteIntervalCensoredEvent.get_lower_bound

def wrapper(f):
    @wraps(f)
    def get_lower_bound(self):
        return ContinuousElementaryEvent(f(self))

ContinuousIntervalCensoredEvent.lower_bound = property(wrapper(ContinuousIntervalCensoredEvent.get_lower_bound))
del ContinuousIntervalCensoredEvent.get_lower_bound

def wrapper(f):
    @wraps(f)
    def __getitem__(self, index):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError
        return f(self, index)
    return __getitem__

MultivariateEvent.__getitem__ = wrapper(MultivariateEvent.get_event)
del wrapper, MultivariateEvent.get_event

def wrapper(f):
    @wraps(f)
    def __setitem__(self, index, event):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError
        return f(self, index, event)
    return __setitem__

MultivariateEvent.__setitem__ = wrapper(MultivariateEvent.set_event)
del wrapper, MultivariateEvent.set_event

def __str__(self):
    return '(' + ', '.join(str(event) if not event is None else '?' for event in self) + ')'

MultivariateEvent.__str__ = __str__
del __str__

def __repr__(self):
    return '(' + ', '.join(repr(event) if not event is None else '?' for event in self) + ')'

MultivariateEvent.__repr__ = __repr__
del __repr__
