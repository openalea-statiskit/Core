#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_947c0fd69797587d837bbff6708446d6)()const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_07716d2b02925b9ea110b412b9df7028)(enum ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_0f6bb80b715057a7964abf2a553f0818(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > > class_0f6bb80b715057a7964abf2a553f0818(module, "CriterionEstimator", "");
    class_0f6bb80b715057a7964abf2a553f0818.def(pybind11::init<  >());
    class_0f6bb80b715057a7964abf2a553f0818.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator const & >());
    class_0f6bb80b715057a7964abf2a553f0818.def("get_criterion", method_pointer_947c0fd69797587d837bbff6708446d6, pybind11::return_value_policy::copy, "");
    class_0f6bb80b715057a7964abf2a553f0818.def("set_criterion", method_pointer_07716d2b02925b9ea110b412b9df7028, "");

}