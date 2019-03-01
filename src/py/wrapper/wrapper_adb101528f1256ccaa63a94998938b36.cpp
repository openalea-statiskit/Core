#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::SplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_2cb72dcc14ea5e9b99047f3a84c84889)()const= &::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_adb101528f1256ccaa63a94998938b36(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > class_adb101528f1256ccaa63a94998938b36(module, "_ActiveEstimation_adb101528f1256ccaa63a94998938b36", "");
    class_adb101528f1256ccaa63a94998938b36.def(pybind11::init<  >());
    class_adb101528f1256ccaa63a94998938b36.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_adb101528f1256ccaa63a94998938b36.def(pybind11::init< class ::statiskit::SplittingDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_adb101528f1256ccaa63a94998938b36.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >());
    class_adb101528f1256ccaa63a94998938b36.def("get_data", method_pointer_2cb72dcc14ea5e9b99047f3a84c84889, pybind11::return_value_policy::reference_internal, "");

}