#include "_core.h"

struct ::statiskit::MixtureSingularDistribution const * (::statiskit::OptimizationEstimation< ::statiskit::MixtureSingularDistribution *, ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_014ed38b48b5567f97c1cff72c5dfd81)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_a2e03e1beb3652d19910e253216cbbdd(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > class_a2e03e1beb3652d19910e253216cbbdd(module, "_OptimizationEstimation_a2e03e1beb3652d19910e253216cbbdd", "");
    class_a2e03e1beb3652d19910e253216cbbdd.def(pybind11::init<  >());
    class_a2e03e1beb3652d19910e253216cbbdd.def(pybind11::init< struct ::statiskit::MixtureSingularDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_a2e03e1beb3652d19910e253216cbbdd.def(pybind11::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_a2e03e1beb3652d19910e253216cbbdd.def("get_iteration", method_pointer_014ed38b48b5567f97c1cff72c5dfd81, pybind11::return_value_policy::reference_internal, "");

}