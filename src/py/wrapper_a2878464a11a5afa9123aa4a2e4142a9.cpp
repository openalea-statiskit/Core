#include "_core.h"


void wrapper_a2878464a11a5afa9123aa4a2e4142a9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f125e57d2d0850ed89ebb0819839744b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_f125e57d2d0850ed89ebb0819839744b");
    boost::python::object module_f125e57d2d0850ed89ebb0819839744b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f125e57d2d0850ed89ebb0819839744b.c_str()))));
    boost::python::scope().attr("__list_selection_f125e57d2d0850ed89ebb0819839744b") = module_f125e57d2d0850ed89ebb0819839744b;
    boost::python::scope scope_f125e57d2d0850ed89ebb0819839744b = module_f125e57d2d0850ed89ebb0819839744b;
    std::string name_d172eb08b5f6514d9459ff91ea8a2ac3 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_d172eb08b5f6514d9459ff91ea8a2ac3(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d172eb08b5f6514d9459ff91ea8a2ac3.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_d172eb08b5f6514d9459ff91ea8a2ac3;
    boost::python::scope scope_d172eb08b5f6514d9459ff91ea8a2ac3 = module_d172eb08b5f6514d9459ff91ea8a2ac3;
    boost::python::enum_< enum ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_a2878464a11a5afa9123aa4a2e4142a9("criterion_type");

    enum_a2878464a11a5afa9123aa4a2e4142a9.value("AIC", ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::AIC);

    enum_a2878464a11a5afa9123aa4a2e4142a9.value("AI_CC", ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::AICc);

    enum_a2878464a11a5afa9123aa4a2e4142a9.value("BIC", ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::BIC);

    enum_a2878464a11a5afa9123aa4a2e4142a9.value("HQIC", ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::HQIC);

}