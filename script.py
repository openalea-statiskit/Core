from statiskit import (linalg,
                       core)

from statiskit.data import core as data
data = data.load('FPD17')

pi = [1.] * len(data.components)
components = [core.SplittingDistribution(core.PoissonDistribution(1.),
                                         core.MultinomialSplittingOperator(linalg.Vector(pi)))]
for x in [1.1, 1.2, 1.3, 1.4]:
    for index in range(len(data.components)):
        pi = [1.] * len(data.components)
        pi[index] = x
        components.append(core.SplittingDistribution(core.PoissonDistribution(x),
                                                     core.MultinomialSplittingOperator(linalg.Vector(pi))))

initializator = core.MixtureDistribution(*components,
                                         pi = linalg.Vector([1.] * len(components)))

estimator = core.shifted_estimation(core.outcome_type.DISCRETE,
                                    shift = 1,
                                    estimator = core.selection(core.outcome_type.DISCRETE,
                                                               estimators = [core.poisson_estimation('ml'),
                                                                             core.binomial_estimation('ml'),
                                                                             core.negative_binomial_estimation('ml')]))

estimator = core.splitting_estimation(sum = estimator,
                                      splitting = core.splitting_selection('MN',
                                                                           'DM'))

results = [core.mixture_estimation(data, 'em',
                                   initializator = initializator,
                                   default_estimator = estimator)]

# break SplittingDistributionEstimation::Estimator::operator()
# break /home/pfernique/.miniconda/envs/statiskit-dev/include/statiskit/core/estimator.hpp:99
# catch throw
# execfile('script.py')