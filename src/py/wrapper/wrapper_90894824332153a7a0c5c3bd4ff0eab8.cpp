#include "_core.h"


namespace autowig {
}

void wrapper_90894824332153a7a0c5c3bd4ff0eab8(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > class_90894824332153a7a0c5c3bd4ff0eab8(module, "_LazyEstimation_90894824332153a7a0c5c3bd4ff0eab8", "");
    class_90894824332153a7a0c5c3bd4ff0eab8.def(pybind11::init<  >());
    class_90894824332153a7a0c5c3bd4ff0eab8.def(pybind11::init< struct ::statiskit::ContinuousMultivariateConditionalDistribution const * >());
    class_90894824332153a7a0c5c3bd4ff0eab8.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > const & >());

}