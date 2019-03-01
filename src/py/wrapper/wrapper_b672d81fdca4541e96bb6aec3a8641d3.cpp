#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_d79e7171293b5ca5b580fc477eb01a63)()const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_765d1a8c9c995fa5bdc79216611870bd)(enum ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_b672d81fdca4541e96bb6aec3a8641d3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Estimator > > class_b672d81fdca4541e96bb6aec3a8641d3(module, "CriterionEstimator", "");
    class_b672d81fdca4541e96bb6aec3a8641d3.def(pybind11::init<  >());
    class_b672d81fdca4541e96bb6aec3a8641d3.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator const & >());
    class_b672d81fdca4541e96bb6aec3a8641d3.def("get_criterion", method_pointer_d79e7171293b5ca5b580fc477eb01a63, pybind11::return_value_policy::copy, "");
    class_b672d81fdca4541e96bb6aec3a8641d3.def("set_criterion", method_pointer_765d1a8c9c995fa5bdc79216611870bd, "");

}