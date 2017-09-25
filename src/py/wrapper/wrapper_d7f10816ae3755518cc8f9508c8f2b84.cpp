#include "_core.h"


void wrapper_d7f10816ae3755518cc8f9508c8f2b84()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f29b9e4bae2254ec8b6d9cf0133bf530 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_f29b9e4bae2254ec8b6d9cf0133bf530");
    boost::python::object module_f29b9e4bae2254ec8b6d9cf0133bf530(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f29b9e4bae2254ec8b6d9cf0133bf530.c_str()))));
    boost::python::scope().attr("__selection_f29b9e4bae2254ec8b6d9cf0133bf530") = module_f29b9e4bae2254ec8b6d9cf0133bf530;
    boost::python::scope scope_f29b9e4bae2254ec8b6d9cf0133bf530 = module_f29b9e4bae2254ec8b6d9cf0133bf530;
    std::string name_db69feb5c0dc5537adb3ca6589dd9d60 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_db69feb5c0dc5537adb3ca6589dd9d60(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_db69feb5c0dc5537adb3ca6589dd9d60.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_db69feb5c0dc5537adb3ca6589dd9d60;
    boost::python::scope scope_db69feb5c0dc5537adb3ca6589dd9d60 = module_db69feb5c0dc5537adb3ca6589dd9d60;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_d7f10816ae3755518cc8f9508c8f2b84("criterion_type");
    enum_d7f10816ae3755518cc8f9508c8f2b84.value("AIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);
    enum_d7f10816ae3755518cc8f9508c8f2b84.value("AI_CC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);
    enum_d7f10816ae3755518cc8f9508c8f2b84.value("BIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);
    enum_d7f10816ae3755518cc8f9508c8f2b84.value("HQIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);

}