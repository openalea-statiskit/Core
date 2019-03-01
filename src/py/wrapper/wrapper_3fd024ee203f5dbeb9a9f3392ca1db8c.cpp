#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_4772ee92dc7958f9a8618ca288e32d18)()const= &::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_3fd024ee203f5dbeb9a9f3392ca1db8c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_3fd024ee203f5dbeb9a9f3392ca1db8c(module, "_LazyEstimation_3fd024ee203f5dbeb9a9f3392ca1db8c", "");
    class_3fd024ee203f5dbeb9a9f3392ca1db8c.def(pybind11::init<  >());
    class_3fd024ee203f5dbeb9a9f3392ca1db8c.def(pybind11::init< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const * >());
    class_3fd024ee203f5dbeb9a9f3392ca1db8c.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_3fd024ee203f5dbeb9a9f3392ca1db8c.def("copy", method_pointer_4772ee92dc7958f9a8618ca288e32d18, "");

}