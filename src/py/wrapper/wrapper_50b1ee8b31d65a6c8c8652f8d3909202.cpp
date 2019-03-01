#include "_core.h"


void wrapper_50b1ee8b31d65a6c8c8652f8d3909202(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_50b1ee8b31d65a6c8c8652f8d3909202(module, "criterion_type");
    enum_50b1ee8b31d65a6c8c8652f8d3909202.value("AIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);
    enum_50b1ee8b31d65a6c8c8652f8d3909202.value("AI_CC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);
    enum_50b1ee8b31d65a6c8c8652f8d3909202.value("BIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);
    enum_50b1ee8b31d65a6c8c8652f8d3909202.value("HQIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);
    enum_50b1ee8b31d65a6c8c8652f8d3909202.export_values();

}