#include "_core.h"


void wrapper_8918995a409e5ff4a14287107ceeaf66()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_3fcc3ee4798357898d2a495bb06ac033 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_estimation_3fcc3ee4798357898d2a495bb06ac033");
    boost::python::object module_3fcc3ee4798357898d2a495bb06ac033(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_3fcc3ee4798357898d2a495bb06ac033.c_str()))));
    boost::python::scope().attr("__list_estimation_3fcc3ee4798357898d2a495bb06ac033") = module_3fcc3ee4798357898d2a495bb06ac033;
    boost::python::scope scope_3fcc3ee4798357898d2a495bb06ac033 = module_3fcc3ee4798357898d2a495bb06ac033;
    std::string name_fd972a10c86a58beaa770541f6e5204f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._classical_criterion_estimator");
    boost::python::object module_fd972a10c86a58beaa770541f6e5204f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fd972a10c86a58beaa770541f6e5204f.c_str()))));
    boost::python::scope().attr("_classical_criterion_estimator") = module_fd972a10c86a58beaa770541f6e5204f;
    boost::python::scope scope_fd972a10c86a58beaa770541f6e5204f = module_fd972a10c86a58beaa770541f6e5204f;
    boost::python::enum_< enum ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator::criterion_type > enum_8918995a409e5ff4a14287107ceeaf66("criterion_type");

    enum_8918995a409e5ff4a14287107ceeaf66.value("AIC", ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator::AIC);

    enum_8918995a409e5ff4a14287107ceeaf66.value("AI_CC", ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator::AICc);

    enum_8918995a409e5ff4a14287107ceeaf66.value("BIC", ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator::BIC);

    enum_8918995a409e5ff4a14287107ceeaf66.value("HQIC", ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator::HQIC);

}