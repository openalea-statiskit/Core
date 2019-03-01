#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_b2534751f5815d4bbd3de17f8e6d7c2a)()const= &::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_87317e63de535031ba8bf5e2f19134ef(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_87317e63de535031ba8bf5e2f19134ef(module, "_LazyEstimation_87317e63de535031ba8bf5e2f19134ef", "");
    class_87317e63de535031ba8bf5e2f19134ef.def(pybind11::init<  >());
    class_87317e63de535031ba8bf5e2f19134ef.def(pybind11::init< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const * >());
    class_87317e63de535031ba8bf5e2f19134ef.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_87317e63de535031ba8bf5e2f19134ef.def("copy", method_pointer_b2534751f5815d4bbd3de17f8e6d7c2a, "");

}