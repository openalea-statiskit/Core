#include "_core.h"


namespace autowig {
}

void wrapper_1b793d6dd01553ae939c99e3743fa436(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > class_1b793d6dd01553ae939c99e3743fa436(module, "_MixtureDistributionEMEstimation_1b793d6dd01553ae939c99e3743fa436", "");
    class_1b793d6dd01553ae939c99e3743fa436.def(pybind11::init<  >());
    class_1b793d6dd01553ae939c99e3743fa436.def(pybind11::init< struct ::statiskit::CategoricalUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_1b793d6dd01553ae939c99e3743fa436.def(pybind11::init< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >());

}