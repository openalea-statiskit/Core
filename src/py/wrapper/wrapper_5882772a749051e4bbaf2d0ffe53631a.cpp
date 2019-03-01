#include "_core.h"


void wrapper_5882772a749051e4bbaf2d0ffe53631a(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_5882772a749051e4bbaf2d0ffe53631a(module, "criterion_type");
    enum_5882772a749051e4bbaf2d0ffe53631a.value("AIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);
    enum_5882772a749051e4bbaf2d0ffe53631a.value("AI_CC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);
    enum_5882772a749051e4bbaf2d0ffe53631a.value("BIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);
    enum_5882772a749051e4bbaf2d0ffe53631a.value("HQIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);
    enum_5882772a749051e4bbaf2d0ffe53631a.export_values();

}