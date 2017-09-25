#include "_core.h"


void wrapper_47713b069ca05573b21bd47acc8c8465()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_e28923ae1ac356e5845929232f8e09ac = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_e28923ae1ac356e5845929232f8e09ac");
    boost::python::object module_e28923ae1ac356e5845929232f8e09ac(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_e28923ae1ac356e5845929232f8e09ac.c_str()))));
    boost::python::scope().attr("__selection_e28923ae1ac356e5845929232f8e09ac") = module_e28923ae1ac356e5845929232f8e09ac;
    boost::python::scope scope_e28923ae1ac356e5845929232f8e09ac = module_e28923ae1ac356e5845929232f8e09ac;
    std::string name_ba10383a23ff54399f92db2e929ec564 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_ba10383a23ff54399f92db2e929ec564(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_ba10383a23ff54399f92db2e929ec564.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_ba10383a23ff54399f92db2e929ec564;
    boost::python::scope scope_ba10383a23ff54399f92db2e929ec564 = module_ba10383a23ff54399f92db2e929ec564;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_47713b069ca05573b21bd47acc8c8465("criterion_type");
    enum_47713b069ca05573b21bd47acc8c8465.value("AIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_47713b069ca05573b21bd47acc8c8465.value("AI_CC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_47713b069ca05573b21bd47acc8c8465.value("BIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_47713b069ca05573b21bd47acc8c8465.value("HQIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::HQIC);

}