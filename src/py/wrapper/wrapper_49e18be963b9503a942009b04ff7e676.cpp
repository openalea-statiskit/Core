#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::PoissonDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_46bfaaee922a5586aadf5200139bca9c)()const= &::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_49e18be963b9503a942009b04ff7e676(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_49e18be963b9503a942009b04ff7e676(module, "_LazyEstimation_49e18be963b9503a942009b04ff7e676", "");
    class_49e18be963b9503a942009b04ff7e676.def(pybind11::init<  >());
    class_49e18be963b9503a942009b04ff7e676.def(pybind11::init< class ::statiskit::PoissonDistribution const * >());
    class_49e18be963b9503a942009b04ff7e676.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_49e18be963b9503a942009b04ff7e676.def("copy", method_pointer_46bfaaee922a5586aadf5200139bca9c, "");

}