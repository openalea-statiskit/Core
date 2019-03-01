#include "_core.h"


namespace autowig {
}

void wrapper_7d52b247865d503986da71f28e0da3e9(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteMultivariateDistributionEstimation > class_7d52b247865d503986da71f28e0da3e9(module, "_LazyEstimation_7d52b247865d503986da71f28e0da3e9", "");
    class_7d52b247865d503986da71f28e0da3e9.def(pybind11::init<  >());
    class_7d52b247865d503986da71f28e0da3e9.def(pybind11::init< class ::statiskit::SplittingDistribution const * >());
    class_7d52b247865d503986da71f28e0da3e9.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >());

}