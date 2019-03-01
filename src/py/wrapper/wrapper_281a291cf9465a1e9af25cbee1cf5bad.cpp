#include "_core.h"


namespace autowig {
}

void wrapper_281a291cf9465a1e9af25cbee1cf5bad(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_281a291cf9465a1e9af25cbee1cf5bad(module, "_LazyEstimation_281a291cf9465a1e9af25cbee1cf5bad", "");
    class_281a291cf9465a1e9af25cbee1cf5bad.def(pybind11::init<  >());
    class_281a291cf9465a1e9af25cbee1cf5bad.def(pybind11::init< class ::statiskit::UnivariateHistogramDistribution const * >());
    class_281a291cf9465a1e9af25cbee1cf5bad.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());

}