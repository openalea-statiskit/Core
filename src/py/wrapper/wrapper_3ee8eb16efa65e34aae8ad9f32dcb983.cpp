#include "_core.h"

class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_67bd25f66bd65a22852d6cd86376d6bb)()const= &::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_3ee8eb16efa65e34aae8ad9f32dcb983(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_3ee8eb16efa65e34aae8ad9f32dcb983(module, "_ActiveEstimation_3ee8eb16efa65e34aae8ad9f32dcb983", "");
    class_3ee8eb16efa65e34aae8ad9f32dcb983.def(pybind11::init<  >());
    class_3ee8eb16efa65e34aae8ad9f32dcb983.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_3ee8eb16efa65e34aae8ad9f32dcb983.def(pybind11::init< struct ::statiskit::CategoricalUnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const * >());
    class_3ee8eb16efa65e34aae8ad9f32dcb983.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());
    class_3ee8eb16efa65e34aae8ad9f32dcb983.def("get_data", method_pointer_67bd25f66bd65a22852d6cd86376d6bb, pybind11::return_value_policy::reference_internal, "");

}