#include "_core.h"


void wrapper_ff336bb969875c6bb9226d1ab053af10()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_5b1444f7a44054459e5adff18c81bbfb = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_5b1444f7a44054459e5adff18c81bbfb");
    boost::python::object module_5b1444f7a44054459e5adff18c81bbfb(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5b1444f7a44054459e5adff18c81bbfb.c_str()))));
    boost::python::scope().attr("__selection_5b1444f7a44054459e5adff18c81bbfb") = module_5b1444f7a44054459e5adff18c81bbfb;
    boost::python::scope scope_5b1444f7a44054459e5adff18c81bbfb = module_5b1444f7a44054459e5adff18c81bbfb;
    std::string name_a268e28862575ead97b631ce4a762208 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_a268e28862575ead97b631ce4a762208(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a268e28862575ead97b631ce4a762208.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_a268e28862575ead97b631ce4a762208;
    boost::python::scope scope_a268e28862575ead97b631ce4a762208 = module_a268e28862575ead97b631ce4a762208;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_ff336bb969875c6bb9226d1ab053af10("criterion_type");
    enum_ff336bb969875c6bb9226d1ab053af10.value("AIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::AIC);
    enum_ff336bb969875c6bb9226d1ab053af10.value("AI_CC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::AICc);
    enum_ff336bb969875c6bb9226d1ab053af10.value("BIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::BIC);
    enum_ff336bb969875c6bb9226d1ab053af10.value("HQIC", ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::HQIC);

}