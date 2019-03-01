#include "_core.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_1a5795bf54c059c7ab9e5eebeeda6833)()const= &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::size;

namespace autowig {
}

void wrapper_b11157049fc45e7181cc22c9c3670513(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > > class_b11157049fc45e7181cc22c9c3670513(module, "_OptimizationEstimationImpl_b11157049fc45e7181cc22c9c3670513", "");
    class_b11157049fc45e7181cc22c9c3670513.def(pybind11::init<  >());
    class_b11157049fc45e7181cc22c9c3670513.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >());
    class_b11157049fc45e7181cc22c9c3670513.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const & >());
    class_b11157049fc45e7181cc22c9c3670513.def("__len__", method_pointer_1a5795bf54c059c7ab9e5eebeeda6833, "");

}