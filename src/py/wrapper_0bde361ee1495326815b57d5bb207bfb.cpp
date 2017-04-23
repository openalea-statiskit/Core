#include "_core.h"


void wrapper_0bde361ee1495326815b57d5bb207bfb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_d9bf9f15e3585b63b3798522663f828c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_d9bf9f15e3585b63b3798522663f828c");
    boost::python::object module_d9bf9f15e3585b63b3798522663f828c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d9bf9f15e3585b63b3798522663f828c.c_str()))));
    boost::python::scope().attr("__list_selection_d9bf9f15e3585b63b3798522663f828c") = module_d9bf9f15e3585b63b3798522663f828c;
    boost::python::scope scope_d9bf9f15e3585b63b3798522663f828c = module_d9bf9f15e3585b63b3798522663f828c;
    std::string name_c726edac3bfa5e0f93f2d3d2ff55ceaa = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_c726edac3bfa5e0f93f2d3d2ff55ceaa(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c726edac3bfa5e0f93f2d3d2ff55ceaa.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_c726edac3bfa5e0f93f2d3d2ff55ceaa;
    boost::python::scope scope_c726edac3bfa5e0f93f2d3d2ff55ceaa = module_c726edac3bfa5e0f93f2d3d2ff55ceaa;
    boost::python::enum_< enum ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_0bde361ee1495326815b57d5bb207bfb("criterion_type");

    enum_0bde361ee1495326815b57d5bb207bfb.value("AIC", ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::AIC);

    enum_0bde361ee1495326815b57d5bb207bfb.value("AI_CC", ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::AICc);

    enum_0bde361ee1495326815b57d5bb207bfb.value("BIC", ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::BIC);

    enum_0bde361ee1495326815b57d5bb207bfb.value("HQIC", ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::HQIC);

}