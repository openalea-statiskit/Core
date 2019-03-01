#include "_core.h"

struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const * (::statiskit::OptimizationEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_3eb09313b1025e9c8b28d8cde54591bc)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_90a595db73ec5964850871a0849d9df6(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > class_90a595db73ec5964850871a0849d9df6(module, "_OptimizationEstimation_90a595db73ec5964850871a0849d9df6", "");
    class_90a595db73ec5964850871a0849d9df6.def(pybind11::init<  >());
    class_90a595db73ec5964850871a0849d9df6.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >());
    class_90a595db73ec5964850871a0849d9df6.def(pybind11::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >());
    class_90a595db73ec5964850871a0849d9df6.def("get_iteration", method_pointer_3eb09313b1025e9c8b28d8cde54591bc, pybind11::return_value_policy::reference_internal, "");

}