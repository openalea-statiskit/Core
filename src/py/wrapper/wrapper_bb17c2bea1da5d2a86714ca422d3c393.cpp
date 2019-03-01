#include "_core.h"


namespace autowig {
}

void wrapper_bb17c2bea1da5d2a86714ca422d3c393(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > class_bb17c2bea1da5d2a86714ca422d3c393(module, "_LazyEstimation_bb17c2bea1da5d2a86714ca422d3c393", "");
    class_bb17c2bea1da5d2a86714ca422d3c393.def(pybind11::init<  >());
    class_bb17c2bea1da5d2a86714ca422d3c393.def(pybind11::init< struct ::statiskit::CategoricalMultivariateConditionalDistribution const * >());
    class_bb17c2bea1da5d2a86714ca422d3c393.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > const & >());

}