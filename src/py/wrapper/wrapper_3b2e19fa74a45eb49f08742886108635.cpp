#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::GeometricDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_987331533ec95ef299bec4217d054eae)()const= &::statiskit::LazyEstimation< class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_3b2e19fa74a45eb49f08742886108635(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_3b2e19fa74a45eb49f08742886108635(module, "_LazyEstimation_3b2e19fa74a45eb49f08742886108635", "");
    class_3b2e19fa74a45eb49f08742886108635.def(pybind11::init<  >());
    class_3b2e19fa74a45eb49f08742886108635.def(pybind11::init< class ::statiskit::GeometricDistribution const * >());
    class_3b2e19fa74a45eb49f08742886108635.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_3b2e19fa74a45eb49f08742886108635.def("copy", method_pointer_987331533ec95ef299bec4217d054eae, "");

}