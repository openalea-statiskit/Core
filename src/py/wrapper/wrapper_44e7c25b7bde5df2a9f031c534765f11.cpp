#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::*method_pointer_775dd261bf615d2cad5ecd7fbe14fa6a)()const= &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::size;
struct ::statiskit::MultivariateConditionalDistributionEstimation const * (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::*method_pointer_dd8df2374690581e8cae9c4f08ba33fa)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::*method_pointer_b15de295874259b3bc4cf1c602f3ad1f)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_44e7c25b7bde5df2a9f031c534765f11(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > > class_44e7c25b7bde5df2a9f031c534765f11(module, "_Selection_44e7c25b7bde5df2a9f031c534765f11", "");
    class_44e7c25b7bde5df2a9f031c534765f11.def(pybind11::init<  >());
    class_44e7c25b7bde5df2a9f031c534765f11.def(pybind11::init< class ::statiskit::MultivariateConditionalData const * >());
    class_44e7c25b7bde5df2a9f031c534765f11.def(pybind11::init< struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const * >());
    class_44e7c25b7bde5df2a9f031c534765f11.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > const & >());
    class_44e7c25b7bde5df2a9f031c534765f11.def("__len__", method_pointer_775dd261bf615d2cad5ecd7fbe14fa6a, "");
    class_44e7c25b7bde5df2a9f031c534765f11.def("get_estimation", method_pointer_dd8df2374690581e8cae9c4f08ba33fa, pybind11::return_value_policy::reference_internal, "");
    class_44e7c25b7bde5df2a9f031c534765f11.def("get_score", method_pointer_b15de295874259b3bc4cf1c602f3ad1f, pybind11::return_value_policy::copy, "");

}