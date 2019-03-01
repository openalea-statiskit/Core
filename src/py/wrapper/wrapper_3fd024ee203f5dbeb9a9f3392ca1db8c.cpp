#include "_core.h"


namespace autowig {
}

void wrapper_3fd024ee203f5dbeb9a9f3392ca1db8c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_3fd024ee203f5dbeb9a9f3392ca1db8c(module, "_LazyEstimation_3fd024ee203f5dbeb9a9f3392ca1db8c", "");
    class_3fd024ee203f5dbeb9a9f3392ca1db8c.def(pybind11::init<  >());
    class_3fd024ee203f5dbeb9a9f3392ca1db8c.def(pybind11::init< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const * >());
    class_3fd024ee203f5dbeb9a9f3392ca1db8c.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());

}