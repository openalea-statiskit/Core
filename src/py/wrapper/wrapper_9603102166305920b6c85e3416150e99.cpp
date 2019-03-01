#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_7769483fa115513b967c23c4a5b5d3bd)()const= &::statiskit::ActiveEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_9603102166305920b6c85e3416150e99(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_9603102166305920b6c85e3416150e99(module, "_ActiveEstimation_9603102166305920b6c85e3416150e99", "");
    class_9603102166305920b6c85e3416150e99.def(pybind11::init<  >());
    class_9603102166305920b6c85e3416150e99.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_9603102166305920b6c85e3416150e99.def(pybind11::init< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const *, struct ::statiskit::UnivariateData const * >());
    class_9603102166305920b6c85e3416150e99.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_9603102166305920b6c85e3416150e99.def("get_data", method_pointer_7769483fa115513b967c23c4a5b5d3bd, pybind11::return_value_policy::reference_internal, "");

}