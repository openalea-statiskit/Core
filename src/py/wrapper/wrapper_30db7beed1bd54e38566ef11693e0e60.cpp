#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_e776412d512c5ddb85f7bf44bae4f2c9)()const= &::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_30db7beed1bd54e38566ef11693e0e60(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_30db7beed1bd54e38566ef11693e0e60(module, "_ActiveEstimation_30db7beed1bd54e38566ef11693e0e60", "");
    class_30db7beed1bd54e38566ef11693e0e60.def(pybind11::init<  >());
    class_30db7beed1bd54e38566ef11693e0e60.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_30db7beed1bd54e38566ef11693e0e60.def(pybind11::init< struct ::statiskit::ContinuousUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_30db7beed1bd54e38566ef11693e0e60.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_30db7beed1bd54e38566ef11693e0e60.def("get_data", method_pointer_e776412d512c5ddb85f7bf44bae4f2c9, pybind11::return_value_policy::reference_internal, "");

}