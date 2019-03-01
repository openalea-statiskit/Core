#include "_core.h"


namespace autowig {
}

void wrapper_6f183e6be0945c80a110bb22edb227d9(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_6f183e6be0945c80a110bb22edb227d9(module, "_LazyEstimation_6f183e6be0945c80a110bb22edb227d9", "");
    class_6f183e6be0945c80a110bb22edb227d9.def(pybind11::init<  >());
    class_6f183e6be0945c80a110bb22edb227d9.def(pybind11::init< class ::statiskit::LogarithmicDistribution const * >());
    class_6f183e6be0945c80a110bb22edb227d9.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());

}