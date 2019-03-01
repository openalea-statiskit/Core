#include "_core.h"


void wrapper_acd4ffddf51e5c5fa9caca7f5b4aa6fe(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_acd4ffddf51e5c5fa9caca7f5b4aa6fe(module, "criterion_type");
    enum_acd4ffddf51e5c5fa9caca7f5b4aa6fe.value("AIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_acd4ffddf51e5c5fa9caca7f5b4aa6fe.value("AI_CC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_acd4ffddf51e5c5fa9caca7f5b4aa6fe.value("BIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_acd4ffddf51e5c5fa9caca7f5b4aa6fe.value("HQIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_acd4ffddf51e5c5fa9caca7f5b4aa6fe.export_values();

}