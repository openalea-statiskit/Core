#include "_core.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_398f1ff9c1de5e8d8c059d441d374a24)()const= &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::size;

namespace autowig {
}

void wrapper_84eec6a551bf57658127a555bf79a38f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > class_84eec6a551bf57658127a555bf79a38f(module, "_OptimizationEstimationImpl_84eec6a551bf57658127a555bf79a38f", "");
    class_84eec6a551bf57658127a555bf79a38f.def(pybind11::init<  >());
    class_84eec6a551bf57658127a555bf79a38f.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >());
    class_84eec6a551bf57658127a555bf79a38f.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >());
    class_84eec6a551bf57658127a555bf79a38f.def("__len__", method_pointer_398f1ff9c1de5e8d8c059d441d374a24, "");

}