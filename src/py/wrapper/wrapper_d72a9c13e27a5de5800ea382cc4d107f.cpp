#include "_core.h"


namespace autowig {
}

void wrapper_d72a9c13e27a5de5800ea382cc4d107f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_d72a9c13e27a5de5800ea382cc4d107f(module, "_LazyEstimation_d72a9c13e27a5de5800ea382cc4d107f", "");
    class_d72a9c13e27a5de5800ea382cc4d107f.def(pybind11::init<  >());
    class_d72a9c13e27a5de5800ea382cc4d107f.def(pybind11::init< struct ::statiskit::ContinuousUnivariateMixtureDistribution const * >());
    class_d72a9c13e27a5de5800ea382cc4d107f.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());

}