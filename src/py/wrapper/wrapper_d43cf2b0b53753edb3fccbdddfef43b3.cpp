#include "_core.h"

class ::statiskit::MultivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::*method_pointer_cb2276db8fb554c4ac6d540ebeb4cafd)()const= &::statiskit::ActiveEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_d43cf2b0b53753edb3fccbdddfef43b3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > > class_d43cf2b0b53753edb3fccbdddfef43b3(module, "_ActiveEstimation_d43cf2b0b53753edb3fccbdddfef43b3", "");
    class_d43cf2b0b53753edb3fccbdddfef43b3.def(pybind11::init<  >());
    class_d43cf2b0b53753edb3fccbdddfef43b3.def(pybind11::init< class ::statiskit::MultivariateConditionalData const * >());
    class_d43cf2b0b53753edb3fccbdddfef43b3.def(pybind11::init< struct ::statiskit::CategoricalMultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const * >());
    class_d43cf2b0b53753edb3fccbdddfef43b3.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > const & >());
    class_d43cf2b0b53753edb3fccbdddfef43b3.def("get_data", method_pointer_cb2276db8fb554c4ac6d540ebeb4cafd, pybind11::return_value_policy::reference_internal, "");

}