#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_7b6c875b27755990a8b651c150543f8d)()const= &::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_8946cbc54c235b72b2e100c2785ce4c3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_8946cbc54c235b72b2e100c2785ce4c3(module, "_LazyEstimation_8946cbc54c235b72b2e100c2785ce4c3", "");
    class_8946cbc54c235b72b2e100c2785ce4c3.def(pybind11::init<  >());
    class_8946cbc54c235b72b2e100c2785ce4c3.def(pybind11::init< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const * >());
    class_8946cbc54c235b72b2e100c2785ce4c3.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_8946cbc54c235b72b2e100c2785ce4c3.def("copy", method_pointer_7b6c875b27755990a8b651c150543f8d, "");

}