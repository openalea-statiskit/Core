#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_64d5959ec9305a2baaca8982871e9ef1)()const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::size;
struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation const * (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_e320030bb8c35ae2a22268ed378e2cab)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_7486e3344330587fbba215be328317cd)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_f29b9e4bae2254ec8b6d9cf0133bf530(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_f29b9e4bae2254ec8b6d9cf0133bf530(module, "_Selection_f29b9e4bae2254ec8b6d9cf0133bf530", "");
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def(pybind11::init<  >());
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def(pybind11::init< struct ::statiskit::DiscreteUnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const * >());
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def("__len__", method_pointer_64d5959ec9305a2baaca8982871e9ef1, "");
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def("get_estimation", method_pointer_e320030bb8c35ae2a22268ed378e2cab, pybind11::return_value_policy::reference_internal, "");
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def("get_score", method_pointer_7486e3344330587fbba215be328317cd, pybind11::return_value_policy::copy, "");

}