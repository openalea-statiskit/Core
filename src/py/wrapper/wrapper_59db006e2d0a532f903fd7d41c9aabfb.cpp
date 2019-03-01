#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_072da179189554b298514722c6863f96)()const= &::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_59db006e2d0a532f903fd7d41c9aabfb(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, struct ::statiskit::SingularDistributionEstimation > class_59db006e2d0a532f903fd7d41c9aabfb(module, "_LazyEstimation_59db006e2d0a532f903fd7d41c9aabfb", "");
    class_59db006e2d0a532f903fd7d41c9aabfb.def(pybind11::init<  >());
    class_59db006e2d0a532f903fd7d41c9aabfb.def(pybind11::init< struct ::statiskit::SingularDistribution const * >());
    class_59db006e2d0a532f903fd7d41c9aabfb.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_59db006e2d0a532f903fd7d41c9aabfb.def("copy", method_pointer_072da179189554b298514722c6863f96, "");

}