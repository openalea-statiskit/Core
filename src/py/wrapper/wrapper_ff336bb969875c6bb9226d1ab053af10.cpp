#include "_core.h"


void wrapper_ff336bb969875c6bb9226d1ab053af10(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_ff336bb969875c6bb9226d1ab053af10(module, "criterion_type");
    enum_ff336bb969875c6bb9226d1ab053af10.value("AIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_ff336bb969875c6bb9226d1ab053af10.value("AI_CC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_ff336bb969875c6bb9226d1ab053af10.value("BIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_ff336bb969875c6bb9226d1ab053af10.value("HQIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::HQIC);
    enum_ff336bb969875c6bb9226d1ab053af10.export_values();

}