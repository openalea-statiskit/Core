#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_7f5e0d6c276b59ea87e915ac4e3eafdf)()const= &::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_6375bd4b368450a684e289f7598736a6(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > class_6375bd4b368450a684e289f7598736a6(module, "_ActiveEstimation_6375bd4b368450a684e289f7598736a6", "");
    class_6375bd4b368450a684e289f7598736a6.def(pybind11::init<  >());
    class_6375bd4b368450a684e289f7598736a6.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_6375bd4b368450a684e289f7598736a6.def(pybind11::init< struct ::statiskit::DiscreteMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_6375bd4b368450a684e289f7598736a6.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >());
    class_6375bd4b368450a684e289f7598736a6.def("get_data", method_pointer_7f5e0d6c276b59ea87e915ac4e3eafdf, pybind11::return_value_policy::reference_internal, "");

}