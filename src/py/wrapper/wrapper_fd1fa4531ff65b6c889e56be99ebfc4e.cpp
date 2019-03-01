#include "_core.h"


namespace autowig {
}

void wrapper_fd1fa4531ff65b6c889e56be99ebfc4e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, autowig::HolderType< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > class_fd1fa4531ff65b6c889e56be99ebfc4e(module, "Estimator", "");
    class_fd1fa4531ff65b6c889e56be99ebfc4e.def(pybind11::init<  >());
    class_fd1fa4531ff65b6c889e56be99ebfc4e.def(pybind11::init< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const & >());

}