#include "_core.h"


namespace autowig {
}

void wrapper_a361e68cde6a5b379c5300d00bee657c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > class_a361e68cde6a5b379c5300d00bee657c(module, "_MixtureDistributionEMEstimation_a361e68cde6a5b379c5300d00bee657c", "");
    class_a361e68cde6a5b379c5300d00bee657c.def(pybind11::init<  >());
    class_a361e68cde6a5b379c5300d00bee657c.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >());
    class_a361e68cde6a5b379c5300d00bee657c.def(pybind11::init< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >());

}