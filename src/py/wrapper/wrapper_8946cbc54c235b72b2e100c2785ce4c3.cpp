#include "_core.h"


namespace autowig {
}

void wrapper_8946cbc54c235b72b2e100c2785ce4c3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_8946cbc54c235b72b2e100c2785ce4c3(module, "_LazyEstimation_8946cbc54c235b72b2e100c2785ce4c3", "");
    class_8946cbc54c235b72b2e100c2785ce4c3.def(pybind11::init<  >());
    class_8946cbc54c235b72b2e100c2785ce4c3.def(pybind11::init< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const * >());
    class_8946cbc54c235b72b2e100c2785ce4c3.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());

}