#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_f2a312cb4a5d590dbb1e9ae1362ac61d)()const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::size;
struct ::statiskit::DiscreteUnivariateDistributionEstimation const * (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_9bd22ea1899950c2aa9321d50d5ba15d)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_98b607b3c29258bba448e60c8bb7dc5f)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_8f3919223a1f55afb240c3500b95c95b(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_8f3919223a1f55afb240c3500b95c95b(module, "_Selection_8f3919223a1f55afb240c3500b95c95b", "");
    class_8f3919223a1f55afb240c3500b95c95b.def(pybind11::init<  >());
    class_8f3919223a1f55afb240c3500b95c95b.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_8f3919223a1f55afb240c3500b95c95b.def(pybind11::init< struct ::statiskit::DiscreteUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_8f3919223a1f55afb240c3500b95c95b.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_8f3919223a1f55afb240c3500b95c95b.def("__len__", method_pointer_f2a312cb4a5d590dbb1e9ae1362ac61d, "");
    class_8f3919223a1f55afb240c3500b95c95b.def("get_estimation", method_pointer_9bd22ea1899950c2aa9321d50d5ba15d, pybind11::return_value_policy::reference_internal, "");
    class_8f3919223a1f55afb240c3500b95c95b.def("get_score", method_pointer_98b607b3c29258bba448e60c8bb7dc5f, pybind11::return_value_policy::copy, "");

}