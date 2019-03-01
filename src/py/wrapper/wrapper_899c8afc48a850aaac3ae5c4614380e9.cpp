#include "_core.h"


namespace autowig {
}

void wrapper_899c8afc48a850aaac3ae5c4614380e9(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, struct ::statiskit::CategoricalMultivariateDistributionEstimation > class_899c8afc48a850aaac3ae5c4614380e9(module, "_LazyEstimation_899c8afc48a850aaac3ae5c4614380e9", "");
    class_899c8afc48a850aaac3ae5c4614380e9.def(pybind11::init<  >());
    class_899c8afc48a850aaac3ae5c4614380e9.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const * >());
    class_899c8afc48a850aaac3ae5c4614380e9.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >());

}