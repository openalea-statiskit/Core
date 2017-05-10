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
                                             MeanVectorEstimation,
                                                 NaturalMeanVectorEstimation,
                                             VarianceEstimation,
                                                 NaturalVarianceEstimation,
                                             CovarianceMatrixEstimation,
                                                 NaturalCovarianceMatrixEstimation)
__all__ = []

MeanEstimation.mean = property(MeanEstimation.get_mean)
del MeanEstimation.get_mean

MeanVectorEstimation.mean = property(MeanVectorEstimation.get_mean)
del MeanVectorEstimation.get_mean

VarianceEstimation.mean = property(VarianceEstimation.get_mean)
del VarianceEstimation.get_mean

CovarianceMatrixEstimation.mean = property(CovarianceMatrixEstimation.get_mean)
del CovarianceMatrixEstimation.get_mean

VarianceEstimation.variance = property(VarianceEstimation.get_variance)
del VarianceEstimation.get_variance

CovarianceMatrixEstimation.covariance = property(CovarianceMatrixEstimation.get_covariance)
del CovarianceMatrixEstimation.get_covariance

def __str__(self):
    return str(self.mean)

MeanEstimation.__str__ = __str__
del __str__

def __repr__(self):
    return repr(self.mean)

MeanEstimation.__repr__ = __repr__
del __repr__

def __str__(self):
    return str(self.mean)

MeanVectorEstimation.__str__ = __str__
del __str__

def __repr__(self):
    return repr(self.mean)

MeanVectorEstimation.__repr__ = __repr__
del __repr__

def __str__(self):
    return str(self.variance)

VarianceEstimation.__str__ = __str__
del __str__

def __repr__(self):
    return repr(self.variance)

VarianceEstimation.__repr__ = __repr__
del __repr__

def __str__(self):
    return str(self.covariance)

CovarianceMatrixEstimation.__str__ = __str__
del __str__

def __repr__(self):
    return repr(self.covariance)

CovarianceMatrixEstimation.__repr__ = __repr__
del __repr__


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

def mean_vector_estimation(algo='nat', data=None, **kwargs):
    """
    """
    mapping = dict(nat = NaturalMeanVectorEstimation.Estimator)
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

NaturalCovarianceMatrixEstimation.Estimator.bias = property(NaturalCovarianceMatrixEstimation.Estimator.get_bias, NaturalCovarianceMatrixEstimation.Estimator.set_bias)
del NaturalCovarianceMatrixEstimation.Estimator.get_bias, NaturalCovarianceMatrixEstimation.Estimator.set_bias

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
        return algo(data, data.mean)
    else:
        return algo

def covariance_matrix_estimation(algo='nat', data=None, **kwargs):
    """
    """
    mapping = dict(nat = NaturalCovarianceMatrixEstimation.Estimator)
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
        return algo(data, data.mean)
    else:
        return algo
