from functools import wraps
import math

import _core
from __core.statiskit import (SplittingOperator,
                                  MultinomialSplittingOperator,
                                  DirichletMultinomialSplittingOperator,
                                  SplittingMixtureOperator)

__all__ = ['MultinomialSplittingOperator',
           'DirichletMultinomialSplittingOperator',
           'SplittingMixtureOperator']

def wrapper_probability(f):
    @wraps(f)
    def probability(self, *events, **kwargs):
        if len(events) == 1:
            event = events[-1]
        else:
            event = None
        if not isinstance(event, MultivariateEvent):
            event = VectorEvent(len(events))
            for index, component in enumerate(events):
                if isinstance(component, basestring):
                    event[index] = CategoricalElementaryEvent(component)
                elif isinstance(component, int):
                    event[index] = DiscreteElementaryEvent(component)
                elif isinstance(component, float):
                    event[index] = ContinuousElementaryEvent(component)
                elif isinstance(component, UnivariateEvent):
                    event[index] = component
                else:
                    raise TypeError('\'events\' parameters')                
            # event = VectorEvent(event)
        if not isinstance(event, MultivariateEvent):
            raise TypeError('\'event\' parameter')
        return f(self, event, kwargs.pop('log', False))
    return probability
    
SplittingOperator.probability = wrapper_probability(SplittingOperator.probability)

SplittingOperator.nb_parameters = property(SplittingOperator.get_nb_parameters)
del SplittingOperator.get_nb_parameters

SplittingOperator.nb_components = property(SplittingOperator.get_nb_components)
del SplittingOperator.get_nb_components

MultinomialSplittingOperator.pi = property(MultinomialSplittingOperator.get_pi, MultinomialSplittingOperator.set_pi)
del MultinomialSplittingOperator.get_pi, MultinomialSplittingOperator.set_pi

def __str__(self):
    return "M(S, " + str(self.pi) + ")"

MultinomialSplittingOperator.__str__ = __str__
MultinomialSplittingOperator.__repr__ = __str__
del __str__

def _repr_latex_(self):
    return r"$\mathcal{M}\left(S, " + self.pi._repr_latex_()[1:-1] + r"\right)$"

MultinomialSplittingOperator._repr_latex_ = _repr_latex_
del _repr_latex_

DirichletMultinomialSplittingOperator.alpha = property(DirichletMultinomialSplittingOperator.get_alpha, DirichletMultinomialSplittingOperator.set_alpha)
del DirichletMultinomialSplittingOperator.get_alpha, DirichletMultinomialSplittingOperator.set_alpha

def __str__(self):
    return "DM(S, " + str(self.alpha) + ")"

DirichletMultinomialSplittingOperator.__str__ = __str__
DirichletMultinomialSplittingOperator.__repr__ = __str__
del __str__

def _repr_latex_(self):
    return r"$\mathcal{DM}\left(S, " + self.alpha._repr_latex_()[1:-1] + r"\right)$"

DirichletMultinomialSplittingOperator._repr_latex_ = _repr_latex_
del _repr_latex_