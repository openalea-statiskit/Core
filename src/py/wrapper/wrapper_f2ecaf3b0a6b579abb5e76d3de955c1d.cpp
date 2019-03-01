#include "_core.h"


namespace autowig {
}

void wrapper_f2ecaf3b0a6b579abb5e76d3de955c1d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > > class_f2ecaf3b0a6b579abb5e76d3de955c1d(module, "Estimator", "");
    class_f2ecaf3b0a6b579abb5e76d3de955c1d.def(pybind11::init<  >());
    class_f2ecaf3b0a6b579abb5e76d3de955c1d.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const & >());

}