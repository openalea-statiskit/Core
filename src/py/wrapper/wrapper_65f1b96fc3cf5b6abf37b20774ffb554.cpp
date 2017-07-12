#include "_core.h"


void wrapper_65f1b96fc3cf5b6abf37b20774ffb554()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_6040d8f35856585fa65c9beece0f520f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_6040d8f35856585fa65c9beece0f520f");
    boost::python::object module_6040d8f35856585fa65c9beece0f520f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_6040d8f35856585fa65c9beece0f520f.c_str()))));
    boost::python::scope().attr("__selection_6040d8f35856585fa65c9beece0f520f") = module_6040d8f35856585fa65c9beece0f520f;
    boost::python::scope scope_6040d8f35856585fa65c9beece0f520f = module_6040d8f35856585fa65c9beece0f520f;
    std::string name_b672d81fdca4541e96bb6aec3a8641d3 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_b672d81fdca4541e96bb6aec3a8641d3(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b672d81fdca4541e96bb6aec3a8641d3.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_b672d81fdca4541e96bb6aec3a8641d3;
    boost::python::scope scope_b672d81fdca4541e96bb6aec3a8641d3 = module_b672d81fdca4541e96bb6aec3a8641d3;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_65f1b96fc3cf5b6abf37b20774ffb554("criterion_type");

    enum_65f1b96fc3cf5b6abf37b20774ffb554.value("AIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);

    enum_65f1b96fc3cf5b6abf37b20774ffb554.value("AI_CC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);

    enum_65f1b96fc3cf5b6abf37b20774ffb554.value("BIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);

    enum_65f1b96fc3cf5b6abf37b20774ffb554.value("HQIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);

}