#include "_core.h"

class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_7ea7e4e79f67522ba4962d142e52341a)()const= &::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_6714db1d278d5fec95ea3760f54b9fa0(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_6714db1d278d5fec95ea3760f54b9fa0(module, "_ActiveEstimation_6714db1d278d5fec95ea3760f54b9fa0", "");
    class_6714db1d278d5fec95ea3760f54b9fa0.def(pybind11::init<  >());
    class_6714db1d278d5fec95ea3760f54b9fa0.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_6714db1d278d5fec95ea3760f54b9fa0.def(pybind11::init< struct ::statiskit::DiscreteUnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const * >());
    class_6714db1d278d5fec95ea3760f54b9fa0.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_6714db1d278d5fec95ea3760f54b9fa0.def("get_data", method_pointer_7ea7e4e79f67522ba4962d142e52341a, pybind11::return_value_policy::reference_internal, "");

}