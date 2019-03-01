#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_30cb362e5d2c5275878ee2af9d27b927)()const= &::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_134023695d4459f2931df9cb87b57330(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > class_134023695d4459f2931df9cb87b57330(module, "_ActiveEstimation_134023695d4459f2931df9cb87b57330", "");
    class_134023695d4459f2931df9cb87b57330.def(pybind11::init<  >());
    class_134023695d4459f2931df9cb87b57330.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_134023695d4459f2931df9cb87b57330.def(pybind11::init< struct ::statiskit::ContinuousMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_134023695d4459f2931df9cb87b57330.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >());
    class_134023695d4459f2931df9cb87b57330.def("get_data", method_pointer_30cb362e5d2c5275878ee2af9d27b927, pybind11::return_value_policy::reference_internal, "");

}