#include "_core.h"


namespace autowig {
}

void wrapper_90ffe8fffb9b5923867b6c24ac9eedb7(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, struct ::statiskit::MultivariateDistributionEstimation > class_90ffe8fffb9b5923867b6c24ac9eedb7(module, "_LazyEstimation_90ffe8fffb9b5923867b6c24ac9eedb7", "");
    class_90ffe8fffb9b5923867b6c24ac9eedb7.def(pybind11::init<  >());
    class_90ffe8fffb9b5923867b6c24ac9eedb7.def(pybind11::init< struct ::statiskit::MultivariateDistribution const * >());
    class_90ffe8fffb9b5923867b6c24ac9eedb7.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const & >());

}