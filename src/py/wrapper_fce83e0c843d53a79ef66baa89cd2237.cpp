#include "_core.h"


void wrapper_fce83e0c843d53a79ef66baa89cd2237()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a2b6e7d6cd9f5e07a05b02debc08e97a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_a2b6e7d6cd9f5e07a05b02debc08e97a");
    boost::python::object module_a2b6e7d6cd9f5e07a05b02debc08e97a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a2b6e7d6cd9f5e07a05b02debc08e97a.c_str()))));
    boost::python::scope().attr("__list_selection_a2b6e7d6cd9f5e07a05b02debc08e97a") = module_a2b6e7d6cd9f5e07a05b02debc08e97a;
    boost::python::scope scope_a2b6e7d6cd9f5e07a05b02debc08e97a = module_a2b6e7d6cd9f5e07a05b02debc08e97a;
    std::string name_57b2f8f0b6e15ffdb4c692854d460ea8 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_57b2f8f0b6e15ffdb4c692854d460ea8(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_57b2f8f0b6e15ffdb4c692854d460ea8.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_57b2f8f0b6e15ffdb4c692854d460ea8;
    boost::python::scope scope_57b2f8f0b6e15ffdb4c692854d460ea8 = module_57b2f8f0b6e15ffdb4c692854d460ea8;
    boost::python::enum_< enum ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_fce83e0c843d53a79ef66baa89cd2237("criterion_type");

    enum_fce83e0c843d53a79ef66baa89cd2237.value("AIC", ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::AIC);

    enum_fce83e0c843d53a79ef66baa89cd2237.value("AI_CC", ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::AICc);

    enum_fce83e0c843d53a79ef66baa89cd2237.value("BIC", ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::BIC);

    enum_fce83e0c843d53a79ef66baa89cd2237.value("HQIC", ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::HQIC);

}