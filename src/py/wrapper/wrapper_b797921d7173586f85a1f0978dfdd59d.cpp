#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::*method_pointer_7178024026e15f21ad82ab4e25b888e0)()const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::size;
struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation const * (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::*method_pointer_62b7f13af323559e9d98e54be5bce62a)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::*method_pointer_56456e13f5865c1eb6e3989fc64a0b1c)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_b797921d7173586f85a1f0978dfdd59d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > > class_b797921d7173586f85a1f0978dfdd59d(module, "_Selection_b797921d7173586f85a1f0978dfdd59d", "");
    class_b797921d7173586f85a1f0978dfdd59d.def(pybind11::init<  >());
    class_b797921d7173586f85a1f0978dfdd59d.def(pybind11::init< class ::statiskit::MultivariateConditionalData const * >());
    class_b797921d7173586f85a1f0978dfdd59d.def(pybind11::init< struct ::statiskit::ContinuousMultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const * >());
    class_b797921d7173586f85a1f0978dfdd59d.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > const & >());
    class_b797921d7173586f85a1f0978dfdd59d.def("__len__", method_pointer_7178024026e15f21ad82ab4e25b888e0, "");
    class_b797921d7173586f85a1f0978dfdd59d.def("get_estimation", method_pointer_62b7f13af323559e9d98e54be5bce62a, pybind11::return_value_policy::reference_internal, "");
    class_b797921d7173586f85a1f0978dfdd59d.def("get_score", method_pointer_56456e13f5865c1eb6e3989fc64a0b1c, pybind11::return_value_policy::copy, "");

}