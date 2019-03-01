#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::MultinomialSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_d853579033215139818e8452c7f0b180)()const= &::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_423ed9cbac44541cb53a4cf80e6e15d5(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, struct ::statiskit::SingularDistributionEstimation > class_423ed9cbac44541cb53a4cf80e6e15d5(module, "_LazyEstimation_423ed9cbac44541cb53a4cf80e6e15d5", "");
    class_423ed9cbac44541cb53a4cf80e6e15d5.def(pybind11::init<  >());
    class_423ed9cbac44541cb53a4cf80e6e15d5.def(pybind11::init< class ::statiskit::MultinomialSingularDistribution const * >());
    class_423ed9cbac44541cb53a4cf80e6e15d5.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_423ed9cbac44541cb53a4cf80e6e15d5.def("copy", method_pointer_d853579033215139818e8452c7f0b180, "");

}