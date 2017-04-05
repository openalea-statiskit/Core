##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

from functools import wraps

import statiskit.core._core
from statiskit.core.__core.statiskit import (_LazyEstimation, _ActiveEstimation, _OptimizationEstimation,
                                             UnivariateDistributionEstimation,
                                                CategoricalUnivariateDistributionEstimation,
                                                    CategoricalUnivariateMixtureDistributionEMEstimation,
                                                DiscreteUnivariateDistributionEstimation, 
                                                    DiscreteUnivariateFrequencyDistributionEstimation, 
                                                    PoissonDistributionMLEstimation,# PoissonDistributionMMEstimation,
                                                    BinomialDistributionMLEstimation, BinomialDistributionMMEstimation,
                                                    NegativeBinomialDistributionMLEstimation, NegativeBinomialDistributionMMEstimation,
                                                    DiscreteUnivariateMixtureDistributionEMEstimation,
                                                ContinuousUnivariateDistributionEstimation,
                                                    ContinuousUnivariateFrequencyDistributionEstimation,
                                                    NormalDistributionMLEstimation,
                                                    UnivariateHistogramDistributionEstimation,
                                                    RegularUnivariateHistogramDistributionSlopeHeuristicSelection,
                                                    IrregularUnivariateHistogramDistributionSlopeHeuristicSelection,
                                                    ContinuousUnivariateMixtureDistributionEMEstimation,
                                             MultivariateDistributionEstimation,
                                                _IndependentMultivariateDistributionEstimation,
                                                MixedIndependentMultivariateDistributionEstimation,
                                                    MixedMultivariateMixtureDistributionEMEstimation,
                                                CategoricalMultivariateDistributionEstimation,
                                                    CategoricalIndependentMultivariateDistributionEstimation,
                                                    CategoricalMultivariateMixtureDistributionEMEstimation,
                                                DiscreteMultivariateDistributionEstimation,
                                                    DiscreteIndependentMultivariateDistributionEstimation,
                                                    DiscreteMultivariateMixtureDistributionEMEstimation,
                                                ContinuousMultivariateDistributionEstimation,
                                                    ContinuousIndependentMultivariateDistributionEstimation,
                                                    ContinuousMultivariateMixtureDistributionEMEstimation,
                                             _MixtureDistributionEMEstimation)

from event import outcome_type
from data import UnivariateData, MultivariateData
from slope_heuristic import Proxy
from _tools import unused_warning

__all__ = ['frequency_estimation',
           'binomial_estimation',
           'poisson_estimation',
           'normal_estimation',
           'histogram_estimation',
           'independent_estimation',
           'mixture_estimation']

UnivariateDistributionEstimation.estimated = property(UnivariateDistributionEstimation.get_estimated)
del UnivariateDistributionEstimation.get_estimated

def active_estimation_decorator(cls):

    cls.data = property(cls.get_data)
    del cls.get_data

    def pdf_plot(self, axes=None, fmt=('|', '-'), color=('b', 'r'), alpha=(1., 1.), norm=False, **kwargs):
        axes = self.data_frame.pdf_plot(axes=axes, fmt=fmt[0], color=color[0], alpha=alpha[0], norm=norm, **kwargs.pop('data_frame', dict()))
        if isinstance(norm, bool):
            if not norm:
                norm = self.data.total
            else:
                norm = 1.
        return self.estimated.pdf_plot(axes=axes, fmt=fmt[1], color=color[1], alpha=alpha[1], norm=norm, **kwargs.pop('estimated', dict()))

    cls.pdf_plot = pdf_plot
    del pdf_plot

for cls in _ActiveEstimation:
    active_estimation_decorator(cls)

def list_estimator_decorator(cls):

    cls.add = cls.add_estimator
    del cls.add_estimator

    cls.remove = cls.remove_estimator
    del cls.remove_estimator

    def wrapper__getitem__(f):
        @wraps(f)
        def __getitem__(self, index):
            if isinstance(index, slice):
                return [self[index] for index in xrange(*index.indices(len(self)))]
            else:
                if index < 0:
                    index += len(self)
                if not 0 <= index < len(self):
                    raise IndexError(self.__class__.__name__ + " index out of range")
                return f(self, index)
        return __getitem__

    cls.Estimator.__getitem__ = wrapper__getitem__(cls.get_estimator)
    del cls.get_estimator

def list_estimation_decorator(cls):

    class Proxy(object):

        def __init__(self, proxy, index):
            self._proxy = proxy
            self._index = index

    def wrapper_estimation_proxy(f, g):
        @wraps(f)
        def estimation(self):
            return f(self._proxy, self._index)
        @wraps(f)
        def score(self):
            return f(self._proxy, self._index)
        return estimation, score

    Proxy.estimation, Proxy.score = wrapper_estimation_proxy(cls.get_estimation, cls.get_score)
    del cls.get_estimation, cls.get_score

    def __getitem__(self, index):
        return Proxy(self, index)

    cls.__getitem__ = __getitem__

    list_estimator_decorator(cls.Estimator)

# for cls in _ListEstimation:
#     list_estimation_decorator(cls)

def optimization_estimator_decorator(cls):

    cls.mindiff = property(cls.get_mindiff, cls.set_mindiff)
    del cls.get_mindiff, cls.set_mindiff

    cls.minits = property(cls.get_minits, cls.set_minits)
    del cls.get_minits, cls.set_minits

    cls.maxits = property(cls.get_maxits, cls.set_maxits)
    del cls.get_maxits, cls.set_maxits

def optimization_estimation_decorator(cls):

    def wrapper__getitem__(f):
        @wraps(f)
        def __getitem__(self, index):
            if isinstance(index, slice):
                return [self[index] for index in xrange(*index.indices(len(self)))]
            else:
                if index < 0:
                    index += len(self)
                if not 0 <= index < len(self):
                    raise IndexError(self.__class__.__name__ + " index out of range")
                return f(self, index)
        return __getitem__          


    cls.__getitem__ = wrapper__getitem__(cls.get_step)
    del cls.get_step

for cls in _OptimizationEstimation:
    optimization_estimation_decorator(cls)

def _estimation(algo, data, mapping, **kwargs):
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
        return algo(data, lazy)
    else:
        return algo

def frequency_estimation(data, **kwargs):
    if isinstance(data, UnivariateData):
        outcome = data.sample_space.outcome
        kwargs['mult'] = False
    elif isinstance(data, MultivariateData):
        if all(component.sample_space.outcome is outcome_type.CATEGORICAL for component in data.components):
            outcome = outcome_type.CATEGORICAL
        elif all(component.sample_space.outcome is outcome_type.DISCRETE for component in data.components):
            outcome = outcome_type.DISCRETE
        elif all(component.sample_space.outcome is outcome_type.CONTINUOUS for component in data.components):
            outcome = outcome_type.CONTINUOUS
        else:
            outcome = outcome_type.MIXED
        kwargs['mult'] = True
    elif isinstance(data, outcome_type):
        outcome = data
        data = None
    else:
        raise TypeError('\'data\' parameter')
    mult = kwargs.pop('mult', outcome is outcome_type.MIXED)
    if mult:
        raise NotImplementedError()
    else:
        if outcome == outcome_type.CATEGORICAL:
            mapping = dict(mle = CategoricalUnivariateDistributionEstimation.Estimator)
        elif outcome == outcome_type.DISCRETE:
            mapping = dict(mle = DiscreteUnivariateFrequencyDistributionEstimation.Estimator)
        elif outcome == outcome_type.CONTINUOUS:
            mapping = dict(mle = ContinuousUnivariateFrequencyDistributionEstimation.Estimator)
        else:
            raise ValueError('\'outcome\' parameter')
    return _estimation('mle', data, mapping, **kwargs)

def binomial_estimation(algo='ml', data=None, **kwargs):
    """
    """
    return _estimation(algo, 
                       data,
                       dict(ml = BinomialDistributionMLEstimation.Estimator,
                            mm = BinomialDistributionMMEstimation.Estimator),
                       **kwargs)

def poisson_estimation(algo='mle', data=None, **kwargs):
    """
    """
    return _estimation(algo, 
                       data,
                       dict(ml = PoissonDistributionMLEstimation.Estimator,
                            #mme = BinomialDistributionMMEstimation.Estimator),
                            ),
                       **kwargs)

def normal_estimation(algo='ml', data=None, **kwargs):
    """
    """
    return _estimation(algo, 
                       data,
                       dict(ml = NormalDistributionMLEstimation.Estimator),
                       **kwargs)

class Proxy(Proxy):
    pass

def wrapper(f):
    @wraps(f)
    def __getitem__(self, index):
        if isinstance(index, slice):
            return [self[index] for index in xrange(*index.indices(len(self)))]
        else:
            if index < 0:
                index += len(self)
            if not 0 <= index < len(self):
                raise IndexError
            return f(self.obj, index)
    return __getitem__

Proxy.__getitem__ = wrapper(RegularUnivariateHistogramDistributionSlopeHeuristicSelection.get_estimated)
RegularUnivariateHistogramDistributionSlopeHeuristicSelection.estimated = property(Proxy)
Proxy.__getitem__ = wrapper(IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.get_estimated)
IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.estimated = property(Proxy)


UnivariateHistogramDistributionEstimation.Estimator.nb_bins = property(UnivariateHistogramDistributionEstimation.Estimator.get_nb_bins, UnivariateHistogramDistributionEstimation.Estimator.set_nb_bins)
del UnivariateHistogramDistributionEstimation.Estimator.get_nb_bins, UnivariateHistogramDistributionEstimation.Estimator.set_nb_bins

IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.max_bins = property(IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.get_max_bins, IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.set_max_bins)
del IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.get_max_bins, IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.set_max_bins

RegularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.max_bins = property(RegularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.get_max_bins, RegularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.set_max_bins)
del RegularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.get_max_bins, RegularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.set_max_bins

def histogram_estimation(data, algo='irr', **kwargs):
    """
    """
    if isinstance(data, UnivariateData):
        kwargs['mult'] = False
    elif isinstance(data, MultivariateData):
        kwargs['mult'] = True
    else:
        raise TypeError('\'data\' parameter')
    mult = kwargs.pop('mult', data)
    if mult:
        raise NotImplementedError()
    else:
        mapping = dict(irr = RegularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator,
                       reg = IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator,
                       cla = UnivariateHistogramDistributionEstimation.Estimator)
    return _estimation(algo, data, mapping, **kwargs)

MultivariateDistributionEstimation.estimated = property(MultivariateDistributionEstimation.get_estimated)
del MultivariateDistributionEstimation.get_estimated

def independent_multivariate_distribution_estimation_decorator(cls):

    pass    
    # cls.marginals = property(cls.get_marginal)
    # del cls.get_marginals

for cls in _IndependentMultivariateDistributionEstimation:
    independent_multivariate_distribution_estimation_decorator(cls)

def independent_estimation(data, **kwargs):
    if isinstance(data, MultivariateDataFrame):
        if all(component.sample_space.outcome is outcome_type.CATEGORICAL for component in data.components):
            mapping = dict(dflt = CategoricalIndependentMultivariateDistributionEstimation.Estimator)
        elif all(component.sample_space.outcome is outcome_type.DISCRETE for component in data.components):
            mapping = dict(dflt = DiscreteIndependentMultivariateDistributionEstimation.Estimator)
        elif all(component.sample_space.outcome is outcome_type.CONTINUOUS for component in data.components):
            mapping = dict(dflt = ContinuousIndependentMultivariateDistributionEstimation.Estimator)
        else:
            mapping = dict(dflt = MixedIndependentMultivariateDistributionEstimation.Estimator)
    elif isinstance(data, outcome_type):
        if data is outcome_type.MIXED:
            mapping = dict(dflt = MixedIndependentMultivariateDistributionEstimation.Estimator)
        elif data is outcome_type.CATEGORICAL:
            mapping = dict(dflt = CategoricalIndependentMultivariateDistributionEstimation.Estimator)
        elif data is outcome_type.DISCRETE:
            mapping = dict(dflt = DiscreteIndependentMultivariateDistributionEstimation.Estimator)
        elif data is outcome_type.CONTINUOUS:
            mapping = dict(dflt = ContinuousIndependentMultivariateDistributionEstimation.Estimator)
        else:
            raise ValueError('\'data\' parameter')
    else:
        raise TypeError('\'data\' parameter')
    return _estimation('dflt', data, mapping, **kwargs)


def mixture_distribution_em_estimator_decorator(cls):

    cls.default_estimator = property(cls.get_default_estimator, cls.set_default_estimator)
    del cls.get_default_estimator, cls.set_default_estimator

    cls.initializator = property(cls.get_initializator, cls.set_initializator)
    del cls.get_initializator, cls.set_initializator

for cls in _MixtureDistributionEMEstimation:
    mixture_distribution_em_estimator_decorator(cls.Estimator)

def mixture_estimation(data, algo='em', **kwargs):
    if isinstance(data, UnivariateData):
        outcome = data.sample_space.outcome
        kwargs['mult'] = False
    elif isinstance(data, MultivariateData):
        if all(component.sample_space.outcome is outcome_type.CATEGORICAL for component in data.components):
            outcome = outcome_type.CATEGORICAL
        elif all(component.sample_space.outcome is outcome_type.DISCRETE for component in data.components):
            outcome = outcome_type.DISCRETE
        elif all(component.sample_space.outcome is outcome_type.CONTINUOUS for component in data.components):
            outcome = outcome_type.CONTINUOUS
        else:
            outcome = outcome_type.MIXED
        kwargs['mult'] = True
    elif isinstance(data, outcome_type):
        outcome = data
        data = None
    else:
        raise TypeError('\'data\' parameter')
    mult = kwargs.pop('mult', outcome is outcome_type.MIXED)
    if mult:
        if outcome is outcome_type.MIXED:
            mapping = dict(em = MixedMultivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome is outcome_type.CATEGORICAL:
            mapping = dict(em = CategoricalMultivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome is outcome_type.DISCRETE:
            mapping = dict(em = DiscreteMultivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome is outcome_type.CONTINUOUS:
            mapping = dict(em = ContinuousMultivariateMixtureDistributionEMEstimation.Estimator)
    else:
        if outcome is outcome_type.MIXED:
            raise ValueError('\'mult\' parameter')
        elif outcome is outcome_type.CATEGORICAL:
            mapping = dict(em = CategoricalUnivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome is outcome_type.DISCRETE:
            mapping = dict(em = DiscreteUnivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome is outcome_type.CONTINUOUS:
            mapping = dict(em = MixedMultivariateMixtureDistributionEMEstimation.Estimator)
    return _estimation(algo, data, mapping, **kwargs)