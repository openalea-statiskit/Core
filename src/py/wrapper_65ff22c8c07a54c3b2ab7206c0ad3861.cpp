#include "_core.h"


void wrapper_65ff22c8c07a54c3b2ab7206c0ad3861()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c4ab8acadc5d58e687f03729ce178865 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_c4ab8acadc5d58e687f03729ce178865");
    boost::python::object module_c4ab8acadc5d58e687f03729ce178865(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c4ab8acadc5d58e687f03729ce178865.c_str()))));
    boost::python::scope().attr("__list_selection_c4ab8acadc5d58e687f03729ce178865") = module_c4ab8acadc5d58e687f03729ce178865;
    boost::python::scope scope_c4ab8acadc5d58e687f03729ce178865 = module_c4ab8acadc5d58e687f03729ce178865;
    std::string name_4d0273ab3b7959879ed7145c5855cd71 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_4d0273ab3b7959879ed7145c5855cd71(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4d0273ab3b7959879ed7145c5855cd71.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_4d0273ab3b7959879ed7145c5855cd71;
    boost::python::scope scope_4d0273ab3b7959879ed7145c5855cd71 = module_4d0273ab3b7959879ed7145c5855cd71;
    boost::python::enum_< enum ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_65ff22c8c07a54c3b2ab7206c0ad3861("criterion_type");

    enum_65ff22c8c07a54c3b2ab7206c0ad3861.value("AIC", ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::AIC);

    enum_65ff22c8c07a54c3b2ab7206c0ad3861.value("AI_CC", ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::AICc);

    enum_65ff22c8c07a54c3b2ab7206c0ad3861.value("BIC", ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::BIC);

    enum_65ff22c8c07a54c3b2ab7206c0ad3861.value("HQIC", ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::HQIC);

}