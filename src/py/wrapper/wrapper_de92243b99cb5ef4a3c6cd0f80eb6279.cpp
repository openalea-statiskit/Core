#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_33f748901ada5ccebcb6d459699271f9)()const= &::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_de92243b99cb5ef4a3c6cd0f80eb6279(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > class_de92243b99cb5ef4a3c6cd0f80eb6279(module, "_ActiveEstimation_de92243b99cb5ef4a3c6cd0f80eb6279", "");
    class_de92243b99cb5ef4a3c6cd0f80eb6279.def(pybind11::init<  >());
    class_de92243b99cb5ef4a3c6cd0f80eb6279.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_de92243b99cb5ef4a3c6cd0f80eb6279.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >());
    class_de92243b99cb5ef4a3c6cd0f80eb6279.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >());
    class_de92243b99cb5ef4a3c6cd0f80eb6279.def("get_data", method_pointer_33f748901ada5ccebcb6d459699271f9, pybind11::return_value_policy::reference_internal, "");

}