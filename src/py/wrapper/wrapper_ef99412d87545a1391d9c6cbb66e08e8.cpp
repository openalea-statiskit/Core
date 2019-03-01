#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::NormalDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_8b5a724b1663514d8aa35a27852f0b63)()const= &::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_ef99412d87545a1391d9c6cbb66e08e8(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_ef99412d87545a1391d9c6cbb66e08e8(module, "_LazyEstimation_ef99412d87545a1391d9c6cbb66e08e8", "");
    class_ef99412d87545a1391d9c6cbb66e08e8.def(pybind11::init<  >());
    class_ef99412d87545a1391d9c6cbb66e08e8.def(pybind11::init< class ::statiskit::NormalDistribution const * >());
    class_ef99412d87545a1391d9c6cbb66e08e8.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_ef99412d87545a1391d9c6cbb66e08e8.def("copy", method_pointer_8b5a724b1663514d8aa35a27852f0b63, "");

}