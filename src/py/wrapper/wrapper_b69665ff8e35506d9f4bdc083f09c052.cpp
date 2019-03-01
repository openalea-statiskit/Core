#include "_core.h"


void wrapper_b69665ff8e35506d9f4bdc083f09c052(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_b69665ff8e35506d9f4bdc083f09c052(module, "criterion_type");
    enum_b69665ff8e35506d9f4bdc083f09c052.value("AIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_b69665ff8e35506d9f4bdc083f09c052.value("AI_CC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_b69665ff8e35506d9f4bdc083f09c052.value("BIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_b69665ff8e35506d9f4bdc083f09c052.value("HQIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_b69665ff8e35506d9f4bdc083f09c052.export_values();

}