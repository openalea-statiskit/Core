#include "_core.h"


namespace autowig {
}

void wrapper_9d7f0f97517952029268e1fd35ac8843(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > class_9d7f0f97517952029268e1fd35ac8843(module, "_LazyEstimation_9d7f0f97517952029268e1fd35ac8843", "");
    class_9d7f0f97517952029268e1fd35ac8843.def(pybind11::init<  >());
    class_9d7f0f97517952029268e1fd35ac8843.def(pybind11::init< struct ::statiskit::CategoricalUnivariateConditionalDistribution const * >());
    class_9d7f0f97517952029268e1fd35ac8843.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());

}