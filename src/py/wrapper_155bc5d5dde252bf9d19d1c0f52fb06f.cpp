#include "_core.h"


void wrapper_155bc5d5dde252bf9d19d1c0f52fb06f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c2c7e656acce553d835b8be4510a40dd = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_c2c7e656acce553d835b8be4510a40dd");
    boost::python::object module_c2c7e656acce553d835b8be4510a40dd(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c2c7e656acce553d835b8be4510a40dd.c_str()))));
    boost::python::scope().attr("__list_selection_c2c7e656acce553d835b8be4510a40dd") = module_c2c7e656acce553d835b8be4510a40dd;
    boost::python::scope scope_c2c7e656acce553d835b8be4510a40dd = module_c2c7e656acce553d835b8be4510a40dd;
    std::string name_c3fbd4e7f04157dc936a07233a0c3afa = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_c3fbd4e7f04157dc936a07233a0c3afa(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c3fbd4e7f04157dc936a07233a0c3afa.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_c3fbd4e7f04157dc936a07233a0c3afa;
    boost::python::scope scope_c3fbd4e7f04157dc936a07233a0c3afa = module_c3fbd4e7f04157dc936a07233a0c3afa;
    boost::python::enum_< enum ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_155bc5d5dde252bf9d19d1c0f52fb06f("criterion_type");

    enum_155bc5d5dde252bf9d19d1c0f52fb06f.value("AIC", ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::AIC);

    enum_155bc5d5dde252bf9d19d1c0f52fb06f.value("AI_CC", ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::AICc);

    enum_155bc5d5dde252bf9d19d1c0f52fb06f.value("BIC", ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::BIC);

    enum_155bc5d5dde252bf9d19d1c0f52fb06f.value("HQIC", ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::HQIC);

}