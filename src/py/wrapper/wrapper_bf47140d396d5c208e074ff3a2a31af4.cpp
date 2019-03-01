#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_06e3b49b9057576985e9e96448e883d6)()const= &::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_bf47140d396d5c208e074ff3a2a31af4(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > class_bf47140d396d5c208e074ff3a2a31af4(module, "_ActiveEstimation_bf47140d396d5c208e074ff3a2a31af4", "");
    class_bf47140d396d5c208e074ff3a2a31af4.def(pybind11::init<  >());
    class_bf47140d396d5c208e074ff3a2a31af4.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_bf47140d396d5c208e074ff3a2a31af4.def(pybind11::init< struct ::statiskit::MixtureSingularDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_bf47140d396d5c208e074ff3a2a31af4.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_bf47140d396d5c208e074ff3a2a31af4.def("get_data", method_pointer_06e3b49b9057576985e9e96448e883d6, pybind11::return_value_policy::reference_internal, "");

}