#include "_core.h"


void wrapper_8e92507e5f595339b8e2826b584e0a7b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_8f3919223a1f55afb240c3500b95c95b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_8f3919223a1f55afb240c3500b95c95b");
    boost::python::object module_8f3919223a1f55afb240c3500b95c95b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_8f3919223a1f55afb240c3500b95c95b.c_str()))));
    boost::python::scope().attr("__selection_8f3919223a1f55afb240c3500b95c95b") = module_8f3919223a1f55afb240c3500b95c95b;
    boost::python::scope scope_8f3919223a1f55afb240c3500b95c95b = module_8f3919223a1f55afb240c3500b95c95b;
    std::string name_08e79862ae80532bb837c70a9c93652b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_08e79862ae80532bb837c70a9c93652b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_08e79862ae80532bb837c70a9c93652b.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_08e79862ae80532bb837c70a9c93652b;
    boost::python::scope scope_08e79862ae80532bb837c70a9c93652b = module_08e79862ae80532bb837c70a9c93652b;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_8e92507e5f595339b8e2826b584e0a7b("criterion_type");

    enum_8e92507e5f595339b8e2826b584e0a7b.value("AIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::AIC);

    enum_8e92507e5f595339b8e2826b584e0a7b.value("AI_CC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::AICc);

    enum_8e92507e5f595339b8e2826b584e0a7b.value("BIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::BIC);

    enum_8e92507e5f595339b8e2826b584e0a7b.value("HQIC", ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::HQIC);

}