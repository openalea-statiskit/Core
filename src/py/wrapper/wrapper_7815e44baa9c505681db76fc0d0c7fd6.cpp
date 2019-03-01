#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_6c695d2ebbf45d4ba94609396fcb05f3)()const= &::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_7815e44baa9c505681db76fc0d0c7fd6(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > > class_7815e44baa9c505681db76fc0d0c7fd6(module, "_ActiveEstimation_7815e44baa9c505681db76fc0d0c7fd6", "");
    class_7815e44baa9c505681db76fc0d0c7fd6.def(pybind11::init<  >());
    class_7815e44baa9c505681db76fc0d0c7fd6.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_7815e44baa9c505681db76fc0d0c7fd6.def(pybind11::init< struct ::statiskit::SingularDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_7815e44baa9c505681db76fc0d0c7fd6.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_7815e44baa9c505681db76fc0d0c7fd6.def("get_data", method_pointer_6c695d2ebbf45d4ba94609396fcb05f3, pybind11::return_value_policy::reference_internal, "");

}