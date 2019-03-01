#include "_core.h"


namespace autowig {
}

void wrapper_6d99edae55df515bbdeb7c5c0e15917e(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > class_6d99edae55df515bbdeb7c5c0e15917e(module, "_LazyEstimation_6d99edae55df515bbdeb7c5c0e15917e", "");
    class_6d99edae55df515bbdeb7c5c0e15917e.def(pybind11::init<  >());
    class_6d99edae55df515bbdeb7c5c0e15917e.def(pybind11::init< struct ::statiskit::DiscreteMultivariateConditionalDistribution const * >());
    class_6d99edae55df515bbdeb7c5c0e15917e.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > const & >());

}