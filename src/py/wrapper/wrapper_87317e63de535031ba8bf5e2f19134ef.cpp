#include "_core.h"


namespace autowig {
}

void wrapper_87317e63de535031ba8bf5e2f19134ef(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_87317e63de535031ba8bf5e2f19134ef(module, "_LazyEstimation_87317e63de535031ba8bf5e2f19134ef", "");
    class_87317e63de535031ba8bf5e2f19134ef.def(pybind11::init<  >());
    class_87317e63de535031ba8bf5e2f19134ef.def(pybind11::init< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const * >());
    class_87317e63de535031ba8bf5e2f19134ef.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());

}