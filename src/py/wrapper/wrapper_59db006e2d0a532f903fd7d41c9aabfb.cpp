#include "_core.h"


namespace autowig {
}

void wrapper_59db006e2d0a532f903fd7d41c9aabfb(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, struct ::statiskit::SingularDistributionEstimation > class_59db006e2d0a532f903fd7d41c9aabfb(module, "_LazyEstimation_59db006e2d0a532f903fd7d41c9aabfb", "");
    class_59db006e2d0a532f903fd7d41c9aabfb.def(pybind11::init<  >());
    class_59db006e2d0a532f903fd7d41c9aabfb.def(pybind11::init< struct ::statiskit::SingularDistribution const * >());
    class_59db006e2d0a532f903fd7d41c9aabfb.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());

}