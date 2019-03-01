#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_ca50d32849c05b08b108168dc484e54b)()const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::size;
struct ::statiskit::ContinuousUnivariateDistributionEstimation const * (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_4217ce489695580083c6b58b2a679a5d)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_763f5cac1f805c31b0899051a8d2c42e)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_6d92f9f1e7ca5180bf403b23e9073d86(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_6d92f9f1e7ca5180bf403b23e9073d86(module, "_Selection_6d92f9f1e7ca5180bf403b23e9073d86", "");
    class_6d92f9f1e7ca5180bf403b23e9073d86.def(pybind11::init<  >());
    class_6d92f9f1e7ca5180bf403b23e9073d86.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_6d92f9f1e7ca5180bf403b23e9073d86.def(pybind11::init< struct ::statiskit::ContinuousUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_6d92f9f1e7ca5180bf403b23e9073d86.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_6d92f9f1e7ca5180bf403b23e9073d86.def("__len__", method_pointer_ca50d32849c05b08b108168dc484e54b, "");
    class_6d92f9f1e7ca5180bf403b23e9073d86.def("get_estimation", method_pointer_4217ce489695580083c6b58b2a679a5d, pybind11::return_value_policy::reference_internal, "");
    class_6d92f9f1e7ca5180bf403b23e9073d86.def("get_score", method_pointer_763f5cac1f805c31b0899051a8d2c42e, pybind11::return_value_policy::copy, "");

}