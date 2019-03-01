#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_c8e162a845ba53d89f443b3db0e9eb98)()const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_673a927b437255f3bd07a73341be8290)(enum ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_6e8787baa0dc5b76b8b3076c994506dc(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Estimator > > class_6e8787baa0dc5b76b8b3076c994506dc(module, "CriterionEstimator", "");
    class_6e8787baa0dc5b76b8b3076c994506dc.def(pybind11::init<  >());
    class_6e8787baa0dc5b76b8b3076c994506dc.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator const & >());
    class_6e8787baa0dc5b76b8b3076c994506dc.def("get_criterion", method_pointer_c8e162a845ba53d89f443b3db0e9eb98, pybind11::return_value_policy::copy, "");
    class_6e8787baa0dc5b76b8b3076c994506dc.def("set_criterion", method_pointer_673a927b437255f3bd07a73341be8290, "");

}