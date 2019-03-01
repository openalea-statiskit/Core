#include "_core.h"

class ::statiskit::MultivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::*method_pointer_5fc123f962285d24b134bb10c9bdf736)()const= &::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_0b7e758230bf50db981289f48e9fdca7(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > > class_0b7e758230bf50db981289f48e9fdca7(module, "_ActiveEstimation_0b7e758230bf50db981289f48e9fdca7", "");
    class_0b7e758230bf50db981289f48e9fdca7.def(pybind11::init<  >());
    class_0b7e758230bf50db981289f48e9fdca7.def(pybind11::init< class ::statiskit::MultivariateConditionalData const * >());
    class_0b7e758230bf50db981289f48e9fdca7.def(pybind11::init< struct ::statiskit::DiscreteMultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const * >());
    class_0b7e758230bf50db981289f48e9fdca7.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > const & >());
    class_0b7e758230bf50db981289f48e9fdca7.def("get_data", method_pointer_5fc123f962285d24b134bb10c9bdf736, pybind11::return_value_policy::reference_internal, "");

}