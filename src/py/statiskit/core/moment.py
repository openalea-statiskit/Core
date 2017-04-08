##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

from functools import wraps

import statiskit.core._core
from statiskit.core.__core.statiskit import (MeanEstimation,
                                                NaturalMeanEstimation,
                                            VarianceEstimation,
                                                NaturalVarianceEstimation)

def _mean_estimation(algo, data, mapping, **kwargs):
    try:
        algo = mapping[algo]()
    except KeyError:
        raise ValueError('\'algo\' parameter, possible values are ' + ', '.join('"' + algo + '"' for algo in mapping.iterkeys()))
    except:
        raise
    if data:
        lazy = kwargs.pop('lazy', False)
    for attr in kwargs.keys():
        if hasattr(algo, attr):
            setattr(algo, attr, kwargs.pop(attr))
    if data:
        return algo(data)
    else:
        return algo

def wrapper__float__(f):

    @wraps(f)
    def __float__(self):
        return f(self)

    return __float__

MeanEstimation.__float__ = wrapper__float__(MeanEstimation.get_mean)
del MeanEstimation.get_mean

VarianceEstimation.mean = property(VarianceEstimation.get_mean)
del VarianceEstimation.get_mean

VarianceEstimation.__float__ = wrapper__float__(VarianceEstimation.get_variance)
del VarianceEstimation.get_variance

def __str__(self):
    return str(float(self))

MeanEstimation.__str__ = __str__
VarianceEstimation.__str__ = __str__

def __repr__(self):
    return repr(float(self))

MeanEstimation.__repr__ = __repr__
VarianceEstimation.__repr__ = __repr__

def mean_estimation(algo='nat', data=None, **kwargs):
    """
    """
    mapping = dict(nat = NaturalMeanEstimation.Estimator)
    try:
        algo = mapping[algo]()
    except KeyError:
        raise ValueError('\'algo\' parameter, possible values are ' + ', '.join('"' + algo + '"' for algo in mapping.iterkeys()))
    except:
        raise
    for attr in kwargs.keys():
        if hasattr(algo, attr):
            setattr(algo, attr, kwargs.pop(attr))
    if data:
        return algo(data)
    else:
        return algo

NaturalVarianceEstimation.Estimator.bias = property(NaturalVarianceEstimation.Estimator.get_bias, NaturalVarianceEstimation.Estimator.set_bias)
del NaturalVarianceEstimation.Estimator.get_bias, NaturalVarianceEstimation.Estimator.set_bias

def variance_estimation(algo='nat', data=None, **kwargs):
    """
    """
    mapping = dict(nat = NaturalVarianceEstimation.Estimator)
    try:
        algo = mapping[algo]()
    except KeyError:
        raise ValueError('\'algo\' parameter, possible values are ' + ', '.join('"' + algo + '"' for algo in mapping.iterkeys()))
    except:
        raise
    for attr in kwargs.keys():
        if hasattr(algo, attr):
            setattr(algo, attr, kwargs.pop(attr))
    if data:
        return algo(data, float(data.mean))
    else:
        return algo

#__all__ = ['NaturalMomentEstimator']
#
#def wrapper(f):
#    @wraps(f)
#    def __call__(self, *args, **kwargs):
#        if any(not isinstance(arg, UnivariateDataFrame) for arg in args):
#            raise TypeError('\'args\' parameter')
#        if len(args) > 4:
#            raise NotImplementedError('Moment estimators do not implement the estimation of moments with order strictly superior to \'4\'')
#        args += (kwargs.pop('na_action', na_action_type.PASS),)
#        return f(self, *args)
#    return __call__
#
#MomentEstimator.__call__ = wrapper(MomentEstimator.__call__)
#del wrapper
#
#def __str__(self):
#    return "Natural moment estimator"
#
#NaturalMomentEstimator.__str__ = __str__
#del __str__
