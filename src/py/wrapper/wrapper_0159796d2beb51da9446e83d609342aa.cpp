#include "_core.h"


namespace autowig {
}

void wrapper_0159796d2beb51da9446e83d609342aa(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateHistogramDistributionEstimation, autowig::HolderType< struct ::statiskit::UnivariateHistogramDistributionEstimation >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_0159796d2beb51da9446e83d609342aa(module, "UnivariateHistogramDistributionEstimation", "");
    class_0159796d2beb51da9446e83d609342aa.def(pybind11::init<  >());
    class_0159796d2beb51da9446e83d609342aa.def(pybind11::init< class ::statiskit::UnivariateHistogramDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_0159796d2beb51da9446e83d609342aa.def(pybind11::init< struct ::statiskit::UnivariateHistogramDistributionEstimation const & >());

}