#include "_core.h"


namespace autowig {
}

void wrapper_1f50e5c48a545cf9a618ddbf871d3a9c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, struct ::statiskit::CategoricalMultivariateDistributionEstimation > class_1f50e5c48a545cf9a618ddbf871d3a9c(module, "_LazyEstimation_1f50e5c48a545cf9a618ddbf871d3a9c", "");
    class_1f50e5c48a545cf9a618ddbf871d3a9c.def(pybind11::init<  >());
    class_1f50e5c48a545cf9a618ddbf871d3a9c.def(pybind11::init< struct ::statiskit::CategoricalMultivariateDistribution const * >());
    class_1f50e5c48a545cf9a618ddbf871d3a9c.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >());

}