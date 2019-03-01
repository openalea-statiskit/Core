#include "_core.h"


void wrapper_47713b069ca05573b21bd47acc8c8465(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_47713b069ca05573b21bd47acc8c8465(module, "criterion_type");
    enum_47713b069ca05573b21bd47acc8c8465.value("AIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_47713b069ca05573b21bd47acc8c8465.value("AI_CC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_47713b069ca05573b21bd47acc8c8465.value("BIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_47713b069ca05573b21bd47acc8c8465.value("HQIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_47713b069ca05573b21bd47acc8c8465.export_values();

}