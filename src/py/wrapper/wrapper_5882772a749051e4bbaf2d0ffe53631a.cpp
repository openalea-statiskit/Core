#include "_core.h"


void wrapper_5882772a749051e4bbaf2d0ffe53631a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_98899d54414f570aa57f6357fdc66074 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_98899d54414f570aa57f6357fdc66074");
    boost::python::object module_98899d54414f570aa57f6357fdc66074(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_98899d54414f570aa57f6357fdc66074.c_str()))));
    boost::python::scope().attr("__selection_98899d54414f570aa57f6357fdc66074") = module_98899d54414f570aa57f6357fdc66074;
    boost::python::scope scope_98899d54414f570aa57f6357fdc66074 = module_98899d54414f570aa57f6357fdc66074;
    std::string name_0f6bb80b715057a7964abf2a553f0818 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_0f6bb80b715057a7964abf2a553f0818(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_0f6bb80b715057a7964abf2a553f0818.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_0f6bb80b715057a7964abf2a553f0818;
    boost::python::scope scope_0f6bb80b715057a7964abf2a553f0818 = module_0f6bb80b715057a7964abf2a553f0818;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_5882772a749051e4bbaf2d0ffe53631a("criterion_type");
    enum_5882772a749051e4bbaf2d0ffe53631a.value("AIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);
    enum_5882772a749051e4bbaf2d0ffe53631a.value("AI_CC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);
    enum_5882772a749051e4bbaf2d0ffe53631a.value("BIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);
    enum_5882772a749051e4bbaf2d0ffe53631a.value("HQIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);

}