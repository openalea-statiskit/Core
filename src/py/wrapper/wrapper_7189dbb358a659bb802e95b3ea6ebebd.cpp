#include "_core.h"


namespace autowig {
}

void wrapper_7189dbb358a659bb802e95b3ea6ebebd(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteMultivariateDistributionEstimation > class_7189dbb358a659bb802e95b3ea6ebebd(module, "_LazyEstimation_7189dbb358a659bb802e95b3ea6ebebd", "");
    class_7189dbb358a659bb802e95b3ea6ebebd.def(pybind11::init<  >());
    class_7189dbb358a659bb802e95b3ea6ebebd.def(pybind11::init< struct ::statiskit::DiscreteMultivariateDistribution const * >());
    class_7189dbb358a659bb802e95b3ea6ebebd.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >());

}