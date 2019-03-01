#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_be81edf2ea0653ba81c66712dbae1e0d)()const= &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::size;
struct ::statiskit::MultivariateDistributionEstimation const * (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_b262ffec9c70564ca63c82a3e958c283)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_ea83afb236a2520c96267044bb709ec3)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_2d551f106ba85f3cb3acfbda4c8e17c7(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > > class_2d551f106ba85f3cb3acfbda4c8e17c7(module, "_Selection_2d551f106ba85f3cb3acfbda4c8e17c7", "");
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def(pybind11::init<  >());
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def(pybind11::init< struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const & >());
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def("__len__", method_pointer_be81edf2ea0653ba81c66712dbae1e0d, "");
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def("get_estimation", method_pointer_b262ffec9c70564ca63c82a3e958c283, pybind11::return_value_policy::reference_internal, "");
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def("get_score", method_pointer_ea83afb236a2520c96267044bb709ec3, pybind11::return_value_policy::copy, "");

}