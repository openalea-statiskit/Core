#include "_core.h"


void wrapper_7e1cec4e31015327b818f37cfea0452d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_2d551f106ba85f3cb3acfbda4c8e17c7 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_2d551f106ba85f3cb3acfbda4c8e17c7");
    boost::python::object module_2d551f106ba85f3cb3acfbda4c8e17c7(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_2d551f106ba85f3cb3acfbda4c8e17c7.c_str()))));
    boost::python::scope().attr("__selection_2d551f106ba85f3cb3acfbda4c8e17c7") = module_2d551f106ba85f3cb3acfbda4c8e17c7;
    boost::python::scope scope_2d551f106ba85f3cb3acfbda4c8e17c7 = module_2d551f106ba85f3cb3acfbda4c8e17c7;
    std::string name_7622b202aa8c5c10af59ca8b1ec3c7e0 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_7622b202aa8c5c10af59ca8b1ec3c7e0(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7622b202aa8c5c10af59ca8b1ec3c7e0.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_7622b202aa8c5c10af59ca8b1ec3c7e0;
    boost::python::scope scope_7622b202aa8c5c10af59ca8b1ec3c7e0 = module_7622b202aa8c5c10af59ca8b1ec3c7e0;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_7e1cec4e31015327b818f37cfea0452d("criterion_type");
    enum_7e1cec4e31015327b818f37cfea0452d.value("AIC", ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_7e1cec4e31015327b818f37cfea0452d.value("AI_CC", ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_7e1cec4e31015327b818f37cfea0452d.value("BIC", ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_7e1cec4e31015327b818f37cfea0452d.value("HQIC", ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::HQIC);

}