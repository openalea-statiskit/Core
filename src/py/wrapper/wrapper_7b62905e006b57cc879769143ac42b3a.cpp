#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_6d4d6e71a2a550dca4aeab6f5cdc1faf)()const= &::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_7b62905e006b57cc879769143ac42b3a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_7b62905e006b57cc879769143ac42b3a(module, "_LazyEstimation_7b62905e006b57cc879769143ac42b3a", "");
    class_7b62905e006b57cc879769143ac42b3a.def(pybind11::init<  >());
    class_7b62905e006b57cc879769143ac42b3a.def(pybind11::init< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const * >());
    class_7b62905e006b57cc879769143ac42b3a.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_7b62905e006b57cc879769143ac42b3a.def("copy", method_pointer_6d4d6e71a2a550dca4aeab6f5cdc1faf, "");

}