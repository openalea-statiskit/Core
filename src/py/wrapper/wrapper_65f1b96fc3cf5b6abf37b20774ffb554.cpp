#include "_core.h"


void wrapper_65f1b96fc3cf5b6abf37b20774ffb554(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_65f1b96fc3cf5b6abf37b20774ffb554(module, "criterion_type");
    enum_65f1b96fc3cf5b6abf37b20774ffb554.value("AIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);
    enum_65f1b96fc3cf5b6abf37b20774ffb554.value("AI_CC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);
    enum_65f1b96fc3cf5b6abf37b20774ffb554.value("BIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);
    enum_65f1b96fc3cf5b6abf37b20774ffb554.value("HQIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);
    enum_65f1b96fc3cf5b6abf37b20774ffb554.export_values();

}