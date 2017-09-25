#include "_core.h"


void wrapper_4ccf3378b28a52cf822b51336a473a25()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_1c16077fc2b0519d806e8d900500edde = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_1c16077fc2b0519d806e8d900500edde");
    boost::python::object module_1c16077fc2b0519d806e8d900500edde(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_1c16077fc2b0519d806e8d900500edde.c_str()))));
    boost::python::scope().attr("__selection_1c16077fc2b0519d806e8d900500edde") = module_1c16077fc2b0519d806e8d900500edde;
    boost::python::scope scope_1c16077fc2b0519d806e8d900500edde = module_1c16077fc2b0519d806e8d900500edde;
    std::string name_5fe9bb1da30956d98b555d9379555582 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_5fe9bb1da30956d98b555d9379555582(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5fe9bb1da30956d98b555d9379555582.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_5fe9bb1da30956d98b555d9379555582;
    boost::python::scope scope_5fe9bb1da30956d98b555d9379555582 = module_5fe9bb1da30956d98b555d9379555582;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_4ccf3378b28a52cf822b51336a473a25("criterion_type");
    enum_4ccf3378b28a52cf822b51336a473a25.value("AIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_4ccf3378b28a52cf822b51336a473a25.value("AI_CC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_4ccf3378b28a52cf822b51336a473a25.value("BIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_4ccf3378b28a52cf822b51336a473a25.value("HQIC", ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::HQIC);

}