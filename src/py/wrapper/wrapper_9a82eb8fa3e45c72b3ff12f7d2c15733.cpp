#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::LogarithmicDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_0f08b9020c265621a4884312d90913a1)()const= &::statiskit::ActiveEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_9a82eb8fa3e45c72b3ff12f7d2c15733(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_9a82eb8fa3e45c72b3ff12f7d2c15733(module, "_ActiveEstimation_9a82eb8fa3e45c72b3ff12f7d2c15733", "");
    class_9a82eb8fa3e45c72b3ff12f7d2c15733.def(pybind11::init<  >());
    class_9a82eb8fa3e45c72b3ff12f7d2c15733.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_9a82eb8fa3e45c72b3ff12f7d2c15733.def(pybind11::init< class ::statiskit::LogarithmicDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_9a82eb8fa3e45c72b3ff12f7d2c15733.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_9a82eb8fa3e45c72b3ff12f7d2c15733.def("get_data", method_pointer_0f08b9020c265621a4884312d90913a1, pybind11::return_value_policy::reference_internal, "");

}