#include "_core.h"


void wrapper_4ccf3378b28a52cf822b51336a473a25(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_4ccf3378b28a52cf822b51336a473a25(module, "criterion_type");
    enum_4ccf3378b28a52cf822b51336a473a25.value("AIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_4ccf3378b28a52cf822b51336a473a25.value("AI_CC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_4ccf3378b28a52cf822b51336a473a25.value("BIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_4ccf3378b28a52cf822b51336a473a25.value("HQIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_4ccf3378b28a52cf822b51336a473a25.export_values();

}