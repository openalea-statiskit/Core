#include "_core.h"


namespace autowig {
}

void wrapper_db3e81250c765e35b6b7ab7b9d17c8ea(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::MultivariateConditionalDistributionEstimation > class_db3e81250c765e35b6b7ab7b9d17c8ea(module, "_LazyEstimation_db3e81250c765e35b6b7ab7b9d17c8ea", "");
    class_db3e81250c765e35b6b7ab7b9d17c8ea.def(pybind11::init<  >());
    class_db3e81250c765e35b6b7ab7b9d17c8ea.def(pybind11::init< struct ::statiskit::MultivariateConditionalDistribution const * >());
    class_db3e81250c765e35b6b7ab7b9d17c8ea.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > const & >());

}