#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_d6209a392daf52c787c283337e60992a)()const= &::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_40c631b5a67d5748bbfdeaa0beedb4e0(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_40c631b5a67d5748bbfdeaa0beedb4e0(module, "_LazyEstimation_40c631b5a67d5748bbfdeaa0beedb4e0", "");
    class_40c631b5a67d5748bbfdeaa0beedb4e0.def(pybind11::init<  >());
    class_40c631b5a67d5748bbfdeaa0beedb4e0.def(pybind11::init< class ::statiskit::BinomialDistribution const * >());
    class_40c631b5a67d5748bbfdeaa0beedb4e0.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_40c631b5a67d5748bbfdeaa0beedb4e0.def("copy", method_pointer_d6209a392daf52c787c283337e60992a, "");

}