#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_67af720ef927599ab587b51719b91f20)()const= &::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_9dcc67ced1f05c0a9b634f6e7bdffe6c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_9dcc67ced1f05c0a9b634f6e7bdffe6c(module, "_LazyEstimation_9dcc67ced1f05c0a9b634f6e7bdffe6c", "");
    class_9dcc67ced1f05c0a9b634f6e7bdffe6c.def(pybind11::init<  >());
    class_9dcc67ced1f05c0a9b634f6e7bdffe6c.def(pybind11::init< struct ::statiskit::DiscreteUnivariateMixtureDistribution const * >());
    class_9dcc67ced1f05c0a9b634f6e7bdffe6c.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_9dcc67ced1f05c0a9b634f6e7bdffe6c.def("copy", method_pointer_67af720ef927599ab587b51719b91f20, "");

}