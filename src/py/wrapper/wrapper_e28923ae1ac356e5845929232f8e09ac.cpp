#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_9ff75fcdfc4657a28e332df582b221a5)()const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::size;
struct ::statiskit::ContinuousMultivariateDistributionEstimation const * (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_96d3508693ab575ea7f7b9075c2f4386)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_df2000c2a926517eab937cc3caf989f8)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_e28923ae1ac356e5845929232f8e09ac(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > class_e28923ae1ac356e5845929232f8e09ac(module, "_Selection_e28923ae1ac356e5845929232f8e09ac", "");
    class_e28923ae1ac356e5845929232f8e09ac.def(pybind11::init<  >());
    class_e28923ae1ac356e5845929232f8e09ac.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_e28923ae1ac356e5845929232f8e09ac.def(pybind11::init< struct ::statiskit::ContinuousMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_e28923ae1ac356e5845929232f8e09ac.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >());
    class_e28923ae1ac356e5845929232f8e09ac.def("__len__", method_pointer_9ff75fcdfc4657a28e332df582b221a5, "");
    class_e28923ae1ac356e5845929232f8e09ac.def("get_estimation", method_pointer_96d3508693ab575ea7f7b9075c2f4386, pybind11::return_value_policy::reference_internal, "");
    class_e28923ae1ac356e5845929232f8e09ac.def("get_score", method_pointer_df2000c2a926517eab937cc3caf989f8, pybind11::return_value_policy::copy, "");

}