#include "_core.h"


namespace autowig {
}

void wrapper_f7ee5d4607de508bb39519488f31e96c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousMultivariateDistributionEstimation > class_f7ee5d4607de508bb39519488f31e96c(module, "_LazyEstimation_f7ee5d4607de508bb39519488f31e96c", "");
    class_f7ee5d4607de508bb39519488f31e96c.def(pybind11::init<  >());
    class_f7ee5d4607de508bb39519488f31e96c.def(pybind11::init< struct ::statiskit::ContinuousMultivariateDistribution const * >());
    class_f7ee5d4607de508bb39519488f31e96c.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >());

}