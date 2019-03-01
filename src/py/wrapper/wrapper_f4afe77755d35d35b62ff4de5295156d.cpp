#include "_core.h"


void wrapper_f4afe77755d35d35b62ff4de5295156d(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_f4afe77755d35d35b62ff4de5295156d(module, "criterion_type");
    enum_f4afe77755d35d35b62ff4de5295156d.value("AIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);
    enum_f4afe77755d35d35b62ff4de5295156d.value("AI_CC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);
    enum_f4afe77755d35d35b62ff4de5295156d.value("BIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);
    enum_f4afe77755d35d35b62ff4de5295156d.value("HQIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);
    enum_f4afe77755d35d35b62ff4de5295156d.export_values();

}