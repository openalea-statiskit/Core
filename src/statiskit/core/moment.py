##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

from functools import wraps

import statiskit.core._core
#from statiskit.core.__core.statiskit import UnivariateSampleSpace, CategoricalSampleSpace, NominalSampleSpace, OrdinalSampleSpace, DiscreteSampleSpace, IntegerSampleSpace, ContinuousSampleSpace, RealSampleSpace

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
