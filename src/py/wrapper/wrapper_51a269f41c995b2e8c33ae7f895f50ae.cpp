#include "_core.h"


namespace autowig {
}

void wrapper_51a269f41c995b2e8c33ae7f895f50ae(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::Type, struct ::statiskit::MultivariateDistributionEstimation > class_51a269f41c995b2e8c33ae7f895f50ae(module, "_LazyEstimation_51a269f41c995b2e8c33ae7f895f50ae", "");
    class_51a269f41c995b2e8c33ae7f895f50ae.def(pybind11::init<  >());
    class_51a269f41c995b2e8c33ae7f895f50ae.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const * >());
    class_51a269f41c995b2e8c33ae7f895f50ae.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const & >());

}