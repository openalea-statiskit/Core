#include "_core.h"


void wrapper_abef6177f46d50b5bb54c0dd31824754(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::criterion_type > enum_abef6177f46d50b5bb54c0dd31824754(module, "criterion_type");
    enum_abef6177f46d50b5bb54c0dd31824754.value("AIC", ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::AIC);
    enum_abef6177f46d50b5bb54c0dd31824754.value("AI_CC", ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::AICc);
    enum_abef6177f46d50b5bb54c0dd31824754.value("BIC", ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::BIC);
    enum_abef6177f46d50b5bb54c0dd31824754.value("HQIC", ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::HQIC);
    enum_abef6177f46d50b5bb54c0dd31824754.export_values();

}