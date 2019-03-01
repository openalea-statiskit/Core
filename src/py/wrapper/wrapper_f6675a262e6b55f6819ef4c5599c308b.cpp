#include "_core.h"


namespace autowig {
}

void wrapper_f6675a262e6b55f6819ef4c5599c308b(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_f6675a262e6b55f6819ef4c5599c308b(module, "_MixtureDistributionEMEstimation_f6675a262e6b55f6819ef4c5599c308b", "");
    class_f6675a262e6b55f6819ef4c5599c308b.def(pybind11::init<  >());
    class_f6675a262e6b55f6819ef4c5599c308b.def(pybind11::init< struct ::statiskit::DiscreteUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_f6675a262e6b55f6819ef4c5599c308b.def(pybind11::init< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());

}