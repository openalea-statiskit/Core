#include "_core.h"


namespace autowig {
}

void wrapper_4b1365f753d05b8db1db0b529f5110f9(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > class_4b1365f753d05b8db1db0b529f5110f9(module, "_LazyEstimation_4b1365f753d05b8db1db0b529f5110f9", "");
    class_4b1365f753d05b8db1db0b529f5110f9.def(pybind11::init<  >());
    class_4b1365f753d05b8db1db0b529f5110f9.def(pybind11::init< struct ::statiskit::DiscreteUnivariateConditionalDistribution const * >());
    class_4b1365f753d05b8db1db0b529f5110f9.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());

}