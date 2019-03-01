#include "_core.h"

struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const * (::statiskit::OptimizationEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_dbfa599ece535c44809a089106985d63)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_1d32c3b4d5615a2883aebf6ef53e85e8(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > > class_1d32c3b4d5615a2883aebf6ef53e85e8(module, "_OptimizationEstimation_1d32c3b4d5615a2883aebf6ef53e85e8", "");
    class_1d32c3b4d5615a2883aebf6ef53e85e8.def(pybind11::init<  >());
    class_1d32c3b4d5615a2883aebf6ef53e85e8.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >());
    class_1d32c3b4d5615a2883aebf6ef53e85e8.def(pybind11::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const & >());
    class_1d32c3b4d5615a2883aebf6ef53e85e8.def("get_iteration", method_pointer_dbfa599ece535c44809a089106985d63, pybind11::return_value_policy::reference_internal, "");

}