#include "_core.h"

class ::statiskit::MultivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::*method_pointer_8191b5a54df25db7ba362c0921214ae0)()const= &::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_18bed25ce1eb5640880f010edb403ed3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > > class_18bed25ce1eb5640880f010edb403ed3(module, "_ActiveEstimation_18bed25ce1eb5640880f010edb403ed3", "");
    class_18bed25ce1eb5640880f010edb403ed3.def(pybind11::init<  >());
    class_18bed25ce1eb5640880f010edb403ed3.def(pybind11::init< class ::statiskit::MultivariateConditionalData const * >());
    class_18bed25ce1eb5640880f010edb403ed3.def(pybind11::init< struct ::statiskit::ContinuousMultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const * >());
    class_18bed25ce1eb5640880f010edb403ed3.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > const & >());
    class_18bed25ce1eb5640880f010edb403ed3.def("get_data", method_pointer_8191b5a54df25db7ba362c0921214ae0, pybind11::return_value_policy::reference_internal, "");

}