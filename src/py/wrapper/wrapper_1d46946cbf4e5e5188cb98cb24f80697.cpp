#include "_core.h"


void wrapper_1d46946cbf4e5e5188cb98cb24f80697(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_1d46946cbf4e5e5188cb98cb24f80697(module, "criterion_type");
    enum_1d46946cbf4e5e5188cb98cb24f80697.value("AIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);
    enum_1d46946cbf4e5e5188cb98cb24f80697.value("AI_CC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);
    enum_1d46946cbf4e5e5188cb98cb24f80697.value("BIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);
    enum_1d46946cbf4e5e5188cb98cb24f80697.value("HQIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);
    enum_1d46946cbf4e5e5188cb98cb24f80697.export_values();

}