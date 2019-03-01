#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::UnivariateHistogramDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_7f553b151400504591c3f5ee1cf1e65e)()const= &::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_281a291cf9465a1e9af25cbee1cf5bad(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_281a291cf9465a1e9af25cbee1cf5bad(module, "_LazyEstimation_281a291cf9465a1e9af25cbee1cf5bad", "");
    class_281a291cf9465a1e9af25cbee1cf5bad.def(pybind11::init<  >());
    class_281a291cf9465a1e9af25cbee1cf5bad.def(pybind11::init< class ::statiskit::UnivariateHistogramDistribution const * >());
    class_281a291cf9465a1e9af25cbee1cf5bad.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_281a291cf9465a1e9af25cbee1cf5bad.def("copy", method_pointer_7f553b151400504591c3f5ee1cf1e65e, "");

}