#include "_core.h"


void wrapper_d7f10816ae3755518cc8f9508c8f2b84(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_d7f10816ae3755518cc8f9508c8f2b84(module, "criterion_type");
    enum_d7f10816ae3755518cc8f9508c8f2b84.value("AIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);
    enum_d7f10816ae3755518cc8f9508c8f2b84.value("AI_CC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);
    enum_d7f10816ae3755518cc8f9508c8f2b84.value("BIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);
    enum_d7f10816ae3755518cc8f9508c8f2b84.value("HQIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);
    enum_d7f10816ae3755518cc8f9508c8f2b84.export_values();

}