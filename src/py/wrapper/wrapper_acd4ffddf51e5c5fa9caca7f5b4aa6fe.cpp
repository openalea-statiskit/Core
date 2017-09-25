#include "_core.h"


void wrapper_acd4ffddf51e5c5fa9caca7f5b4aa6fe()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_d9f7731b9dbc5740add8fc7749d9283d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_d9f7731b9dbc5740add8fc7749d9283d");
    boost::python::object module_d9f7731b9dbc5740add8fc7749d9283d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d9f7731b9dbc5740add8fc7749d9283d.c_str()))));
    boost::python::scope().attr("__selection_d9f7731b9dbc5740add8fc7749d9283d") = module_d9f7731b9dbc5740add8fc7749d9283d;
    boost::python::scope scope_d9f7731b9dbc5740add8fc7749d9283d = module_d9f7731b9dbc5740add8fc7749d9283d;
    std::string name_7eb3e765d79d55fd922f5b11acbb031e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_7eb3e765d79d55fd922f5b11acbb031e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7eb3e765d79d55fd922f5b11acbb031e.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_7eb3e765d79d55fd922f5b11acbb031e;
    boost::python::scope scope_7eb3e765d79d55fd922f5b11acbb031e = module_7eb3e765d79d55fd922f5b11acbb031e;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_acd4ffddf51e5c5fa9caca7f5b4aa6fe("criterion_type");
    enum_acd4ffddf51e5c5fa9caca7f5b4aa6fe.value("AIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_acd4ffddf51e5c5fa9caca7f5b4aa6fe.value("AI_CC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_acd4ffddf51e5c5fa9caca7f5b4aa6fe.value("BIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_acd4ffddf51e5c5fa9caca7f5b4aa6fe.value("HQIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::HQIC);

}