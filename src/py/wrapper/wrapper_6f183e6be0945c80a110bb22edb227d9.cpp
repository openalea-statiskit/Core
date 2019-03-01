#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::LogarithmicDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_80385c9003115fb0a2329d33f12d73ee)()const= &::statiskit::LazyEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_6f183e6be0945c80a110bb22edb227d9(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_6f183e6be0945c80a110bb22edb227d9(module, "_LazyEstimation_6f183e6be0945c80a110bb22edb227d9", "");
    class_6f183e6be0945c80a110bb22edb227d9.def(pybind11::init<  >());
    class_6f183e6be0945c80a110bb22edb227d9.def(pybind11::init< class ::statiskit::LogarithmicDistribution const * >());
    class_6f183e6be0945c80a110bb22edb227d9.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_6f183e6be0945c80a110bb22edb227d9.def("copy", method_pointer_80385c9003115fb0a2329d33f12d73ee, "");

}