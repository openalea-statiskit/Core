#include "_core.h"


namespace autowig {
}

void wrapper_96486d682f0851438822ccbdd2c8c3eb(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::HolderType< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > class_96486d682f0851438822ccbdd2c8c3eb(module, "Estimator", "");
    class_96486d682f0851438822ccbdd2c8c3eb.def(pybind11::init<  >());
    class_96486d682f0851438822ccbdd2c8c3eb.def(pybind11::init< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const & >());

}