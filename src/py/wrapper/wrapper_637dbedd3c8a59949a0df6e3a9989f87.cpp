#include "_core.h"


namespace autowig {
}

void wrapper_637dbedd3c8a59949a0df6e3a9989f87(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > class_637dbedd3c8a59949a0df6e3a9989f87(module, "_MixtureDistributionEMEstimation_637dbedd3c8a59949a0df6e3a9989f87", "");
    class_637dbedd3c8a59949a0df6e3a9989f87.def(pybind11::init<  >());
    class_637dbedd3c8a59949a0df6e3a9989f87.def(pybind11::init< struct ::statiskit::MixtureSingularDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_637dbedd3c8a59949a0df6e3a9989f87.def(pybind11::init< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());

}