#include "_core.h"


namespace autowig {
}

void wrapper_5940fdd28e32560cbb554a38b002be00(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > class_5940fdd28e32560cbb554a38b002be00(module, "_MixtureDistributionEMEstimation_5940fdd28e32560cbb554a38b002be00", "");
    class_5940fdd28e32560cbb554a38b002be00.def(pybind11::init<  >());
    class_5940fdd28e32560cbb554a38b002be00.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >());
    class_5940fdd28e32560cbb554a38b002be00.def(pybind11::init< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >());

}