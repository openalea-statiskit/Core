#include "_core.h"


namespace autowig {
}

void wrapper_9dcc67ced1f05c0a9b634f6e7bdffe6c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_9dcc67ced1f05c0a9b634f6e7bdffe6c(module, "_LazyEstimation_9dcc67ced1f05c0a9b634f6e7bdffe6c", "");
    class_9dcc67ced1f05c0a9b634f6e7bdffe6c.def(pybind11::init<  >());
    class_9dcc67ced1f05c0a9b634f6e7bdffe6c.def(pybind11::init< struct ::statiskit::DiscreteUnivariateMixtureDistribution const * >());
    class_9dcc67ced1f05c0a9b634f6e7bdffe6c.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());

}