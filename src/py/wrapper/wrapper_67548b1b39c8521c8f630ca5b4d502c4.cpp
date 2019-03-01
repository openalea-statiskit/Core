#include "_core.h"


namespace autowig {
}

void wrapper_67548b1b39c8521c8f630ca5b4d502c4(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_67548b1b39c8521c8f630ca5b4d502c4(module, "_UnivariateFrequencyDistributionEstimation_67548b1b39c8521c8f630ca5b4d502c4", "");
    class_67548b1b39c8521c8f630ca5b4d502c4.def(pybind11::init<  >());
    class_67548b1b39c8521c8f630ca5b4d502c4.def(pybind11::init< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const *, struct ::statiskit::UnivariateData const * >());
    class_67548b1b39c8521c8f630ca5b4d502c4.def(pybind11::init< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());

}