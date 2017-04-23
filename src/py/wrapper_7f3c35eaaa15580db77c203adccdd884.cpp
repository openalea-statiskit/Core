#include "_core.h"


void wrapper_7f3c35eaaa15580db77c203adccdd884()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_5a00146a763d5fe88b5b9cb9bbcb74b7 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_5a00146a763d5fe88b5b9cb9bbcb74b7");
    boost::python::object module_5a00146a763d5fe88b5b9cb9bbcb74b7(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5a00146a763d5fe88b5b9cb9bbcb74b7.c_str()))));
    boost::python::scope().attr("__list_selection_5a00146a763d5fe88b5b9cb9bbcb74b7") = module_5a00146a763d5fe88b5b9cb9bbcb74b7;
    boost::python::scope scope_5a00146a763d5fe88b5b9cb9bbcb74b7 = module_5a00146a763d5fe88b5b9cb9bbcb74b7;
    std::string name_b0dd5ad4f0bf5f71b1119495b2f1abde = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_b0dd5ad4f0bf5f71b1119495b2f1abde(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b0dd5ad4f0bf5f71b1119495b2f1abde.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_b0dd5ad4f0bf5f71b1119495b2f1abde;
    boost::python::scope scope_b0dd5ad4f0bf5f71b1119495b2f1abde = module_b0dd5ad4f0bf5f71b1119495b2f1abde;
    boost::python::enum_< enum ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_7f3c35eaaa15580db77c203adccdd884("criterion_type");

    enum_7f3c35eaaa15580db77c203adccdd884.value("AIC", ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::AIC);

    enum_7f3c35eaaa15580db77c203adccdd884.value("AI_CC", ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::AICc);

    enum_7f3c35eaaa15580db77c203adccdd884.value("BIC", ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::BIC);

    enum_7f3c35eaaa15580db77c203adccdd884.value("HQIC", ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::HQIC);

}