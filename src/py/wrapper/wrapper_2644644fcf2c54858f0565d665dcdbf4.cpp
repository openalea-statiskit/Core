#include "_core.h"


void wrapper_2644644fcf2c54858f0565d665dcdbf4(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_2644644fcf2c54858f0565d665dcdbf4(module, "criterion_type");
    enum_2644644fcf2c54858f0565d665dcdbf4.value("AIC", ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);
    enum_2644644fcf2c54858f0565d665dcdbf4.value("AI_CC", ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);
    enum_2644644fcf2c54858f0565d665dcdbf4.value("BIC", ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);
    enum_2644644fcf2c54858f0565d665dcdbf4.value("HQIC", ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);
    enum_2644644fcf2c54858f0565d665dcdbf4.export_values();

}