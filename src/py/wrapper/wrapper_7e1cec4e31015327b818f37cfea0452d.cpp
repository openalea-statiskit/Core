#include "_core.h"


void wrapper_7e1cec4e31015327b818f37cfea0452d(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_7e1cec4e31015327b818f37cfea0452d(module, "criterion_type");
    enum_7e1cec4e31015327b818f37cfea0452d.value("AIC", ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_7e1cec4e31015327b818f37cfea0452d.value("AI_CC", ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_7e1cec4e31015327b818f37cfea0452d.value("BIC", ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_7e1cec4e31015327b818f37cfea0452d.value("HQIC", ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_7e1cec4e31015327b818f37cfea0452d.export_values();

}