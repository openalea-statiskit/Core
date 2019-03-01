#include "_core.h"


namespace autowig {
}

void wrapper_2ee8bfaab59653a08d72e8d97ec7b5dd(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_2ee8bfaab59653a08d72e8d97ec7b5dd(module, "_LazyEstimation_2ee8bfaab59653a08d72e8d97ec7b5dd", "");
    class_2ee8bfaab59653a08d72e8d97ec7b5dd.def(pybind11::init<  >());
    class_2ee8bfaab59653a08d72e8d97ec7b5dd.def(pybind11::init< struct ::statiskit::DiscreteUnivariateDistribution const * >());
    class_2ee8bfaab59653a08d72e8d97ec7b5dd.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());

}