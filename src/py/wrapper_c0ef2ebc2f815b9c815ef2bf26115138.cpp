#include "_core.h"


void wrapper_c0ef2ebc2f815b9c815ef2bf26115138()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a6d706b03fc354a987c6f1afce1bf0d2 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_a6d706b03fc354a987c6f1afce1bf0d2");
    boost::python::object module_a6d706b03fc354a987c6f1afce1bf0d2(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a6d706b03fc354a987c6f1afce1bf0d2.c_str()))));
    boost::python::scope().attr("__list_selection_a6d706b03fc354a987c6f1afce1bf0d2") = module_a6d706b03fc354a987c6f1afce1bf0d2;
    boost::python::scope scope_a6d706b03fc354a987c6f1afce1bf0d2 = module_a6d706b03fc354a987c6f1afce1bf0d2;
    std::string name_9b7905a64abb5649841e0eaeff117af3 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_9b7905a64abb5649841e0eaeff117af3(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_9b7905a64abb5649841e0eaeff117af3.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_9b7905a64abb5649841e0eaeff117af3;
    boost::python::scope scope_9b7905a64abb5649841e0eaeff117af3 = module_9b7905a64abb5649841e0eaeff117af3;
    boost::python::enum_< enum ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_c0ef2ebc2f815b9c815ef2bf26115138("criterion_type");

    enum_c0ef2ebc2f815b9c815ef2bf26115138.value("AIC", ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::AIC);

    enum_c0ef2ebc2f815b9c815ef2bf26115138.value("AI_CC", ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::AICc);

    enum_c0ef2ebc2f815b9c815ef2bf26115138.value("BIC", ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::BIC);

    enum_c0ef2ebc2f815b9c815ef2bf26115138.value("HQIC", ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::HQIC);

}