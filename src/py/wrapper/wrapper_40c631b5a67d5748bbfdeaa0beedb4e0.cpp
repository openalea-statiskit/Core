#include "_core.h"


namespace autowig {
}

void wrapper_40c631b5a67d5748bbfdeaa0beedb4e0(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_40c631b5a67d5748bbfdeaa0beedb4e0(module, "_LazyEstimation_40c631b5a67d5748bbfdeaa0beedb4e0", "");
    class_40c631b5a67d5748bbfdeaa0beedb4e0.def(pybind11::init<  >());
    class_40c631b5a67d5748bbfdeaa0beedb4e0.def(pybind11::init< class ::statiskit::BinomialDistribution const * >());
    class_40c631b5a67d5748bbfdeaa0beedb4e0.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());

}