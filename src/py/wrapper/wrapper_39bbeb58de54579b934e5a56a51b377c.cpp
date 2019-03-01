#include "_core.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_b64d763a388257dc9ef0a9df46b66761)()const= &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::size;

namespace autowig {
}

void wrapper_39bbeb58de54579b934e5a56a51b377c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > class_39bbeb58de54579b934e5a56a51b377c(module, "_OptimizationEstimationImpl_39bbeb58de54579b934e5a56a51b377c", "");
    class_39bbeb58de54579b934e5a56a51b377c.def(pybind11::init<  >());
    class_39bbeb58de54579b934e5a56a51b377c.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >());
    class_39bbeb58de54579b934e5a56a51b377c.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >());
    class_39bbeb58de54579b934e5a56a51b377c.def("__len__", method_pointer_b64d763a388257dc9ef0a9df46b66761, "");

}