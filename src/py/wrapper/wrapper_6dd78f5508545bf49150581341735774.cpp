#include "_core.h"


namespace autowig {
}

void wrapper_6dd78f5508545bf49150581341735774(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_6dd78f5508545bf49150581341735774(module, "_MixtureDistributionEMEstimation_6dd78f5508545bf49150581341735774", "");
    class_6dd78f5508545bf49150581341735774.def(pybind11::init<  >());
    class_6dd78f5508545bf49150581341735774.def(pybind11::init< struct ::statiskit::ContinuousUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_6dd78f5508545bf49150581341735774.def(pybind11::init< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());

}