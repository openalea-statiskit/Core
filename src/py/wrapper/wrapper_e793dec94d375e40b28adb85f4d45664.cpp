#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_f9ad21aada5d5f7292d2d492d44ad398)()const= &::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_e793dec94d375e40b28adb85f4d45664(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > > class_e793dec94d375e40b28adb85f4d45664(module, "_ActiveEstimation_e793dec94d375e40b28adb85f4d45664", "");
    class_e793dec94d375e40b28adb85f4d45664.def(pybind11::init<  >());
    class_e793dec94d375e40b28adb85f4d45664.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_e793dec94d375e40b28adb85f4d45664.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >());
    class_e793dec94d375e40b28adb85f4d45664.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const & >());
    class_e793dec94d375e40b28adb85f4d45664.def("get_data", method_pointer_f9ad21aada5d5f7292d2d492d44ad398, pybind11::return_value_policy::reference_internal, "");

}