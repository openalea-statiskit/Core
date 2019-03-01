#include "_core.h"


namespace autowig {
}

void wrapper_5d63830a58ae5ad1aaf2cb88275ddd22(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteMultivariateDistributionEstimation > class_5d63830a58ae5ad1aaf2cb88275ddd22(module, "_LazyEstimation_5d63830a58ae5ad1aaf2cb88275ddd22", "");
    class_5d63830a58ae5ad1aaf2cb88275ddd22.def(pybind11::init<  >());
    class_5d63830a58ae5ad1aaf2cb88275ddd22.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const * >());
    class_5d63830a58ae5ad1aaf2cb88275ddd22.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >());

}