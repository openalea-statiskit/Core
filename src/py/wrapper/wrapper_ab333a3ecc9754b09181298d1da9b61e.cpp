#include "_core.h"


namespace autowig {
}

void wrapper_ab333a3ecc9754b09181298d1da9b61e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator, autowig::HolderType< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > class_ab333a3ecc9754b09181298d1da9b61e(module, "Estimator", "");
    class_ab333a3ecc9754b09181298d1da9b61e.def(pybind11::init<  >());
    class_ab333a3ecc9754b09181298d1da9b61e.def(pybind11::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const & >());

}