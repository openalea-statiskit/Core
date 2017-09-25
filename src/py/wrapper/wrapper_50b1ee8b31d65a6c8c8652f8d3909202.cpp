#include "_core.h"


void wrapper_50b1ee8b31d65a6c8c8652f8d3909202()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_b797921d7173586f85a1f0978dfdd59d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_b797921d7173586f85a1f0978dfdd59d");
    boost::python::object module_b797921d7173586f85a1f0978dfdd59d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b797921d7173586f85a1f0978dfdd59d.c_str()))));
    boost::python::scope().attr("__selection_b797921d7173586f85a1f0978dfdd59d") = module_b797921d7173586f85a1f0978dfdd59d;
    boost::python::scope scope_b797921d7173586f85a1f0978dfdd59d = module_b797921d7173586f85a1f0978dfdd59d;
    std::string name_6e8787baa0dc5b76b8b3076c994506dc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_6e8787baa0dc5b76b8b3076c994506dc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_6e8787baa0dc5b76b8b3076c994506dc.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_6e8787baa0dc5b76b8b3076c994506dc;
    boost::python::scope scope_6e8787baa0dc5b76b8b3076c994506dc = module_6e8787baa0dc5b76b8b3076c994506dc;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_50b1ee8b31d65a6c8c8652f8d3909202("criterion_type");
    enum_50b1ee8b31d65a6c8c8652f8d3909202.value("AIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);
    enum_50b1ee8b31d65a6c8c8652f8d3909202.value("AI_CC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);
    enum_50b1ee8b31d65a6c8c8652f8d3909202.value("BIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);
    enum_50b1ee8b31d65a6c8c8652f8d3909202.value("HQIC", ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);

}