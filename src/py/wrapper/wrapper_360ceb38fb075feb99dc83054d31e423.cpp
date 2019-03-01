#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_b7d0903b6b7a512089a91025ed70395d)()const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_d5ebb7c8e0875452be7cb0439b63a712)(enum ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_360ceb38fb075feb99dc83054d31e423(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > > class_360ceb38fb075feb99dc83054d31e423(module, "CriterionEstimator", "");
    class_360ceb38fb075feb99dc83054d31e423.def(pybind11::init<  >());
    class_360ceb38fb075feb99dc83054d31e423.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator const & >());
    class_360ceb38fb075feb99dc83054d31e423.def("get_criterion", method_pointer_b7d0903b6b7a512089a91025ed70395d, pybind11::return_value_policy::copy, "");
    class_360ceb38fb075feb99dc83054d31e423.def("set_criterion", method_pointer_d5ebb7c8e0875452be7cb0439b63a712, "");

}