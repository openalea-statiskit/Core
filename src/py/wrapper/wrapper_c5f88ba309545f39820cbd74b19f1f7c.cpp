#include "_core.h"

class ::statiskit::MultivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::*method_pointer_b194181ea9d1543db755d00eead714fb)()const= &::statiskit::ActiveEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_c5f88ba309545f39820cbd74b19f1f7c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > > class_c5f88ba309545f39820cbd74b19f1f7c(module, "_ActiveEstimation_c5f88ba309545f39820cbd74b19f1f7c", "");
    class_c5f88ba309545f39820cbd74b19f1f7c.def(pybind11::init<  >());
    class_c5f88ba309545f39820cbd74b19f1f7c.def(pybind11::init< class ::statiskit::MultivariateConditionalData const * >());
    class_c5f88ba309545f39820cbd74b19f1f7c.def(pybind11::init< struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const * >());
    class_c5f88ba309545f39820cbd74b19f1f7c.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > const & >());
    class_c5f88ba309545f39820cbd74b19f1f7c.def("get_data", method_pointer_b194181ea9d1543db755d00eead714fb, pybind11::return_value_policy::reference_internal, "");

}