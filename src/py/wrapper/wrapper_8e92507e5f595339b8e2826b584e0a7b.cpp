#include "_core.h"


void wrapper_8e92507e5f595339b8e2826b584e0a7b(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_8e92507e5f595339b8e2826b584e0a7b(module, "criterion_type");
    enum_8e92507e5f595339b8e2826b584e0a7b.value("AIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_8e92507e5f595339b8e2826b584e0a7b.value("AI_CC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_8e92507e5f595339b8e2826b584e0a7b.value("BIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_8e92507e5f595339b8e2826b584e0a7b.value("HQIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_8e92507e5f595339b8e2826b584e0a7b.export_values();

}