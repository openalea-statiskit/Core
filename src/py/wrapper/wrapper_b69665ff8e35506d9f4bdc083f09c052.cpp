#include "_core.h"


void wrapper_b69665ff8e35506d9f4bdc083f09c052()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_6d92f9f1e7ca5180bf403b23e9073d86 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_6d92f9f1e7ca5180bf403b23e9073d86");
    boost::python::object module_6d92f9f1e7ca5180bf403b23e9073d86(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_6d92f9f1e7ca5180bf403b23e9073d86.c_str()))));
    boost::python::scope().attr("__selection_6d92f9f1e7ca5180bf403b23e9073d86") = module_6d92f9f1e7ca5180bf403b23e9073d86;
    boost::python::scope scope_6d92f9f1e7ca5180bf403b23e9073d86 = module_6d92f9f1e7ca5180bf403b23e9073d86;
    std::string name_6d14c3d1f43b5dc99e4f553fff425665 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_6d14c3d1f43b5dc99e4f553fff425665(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_6d14c3d1f43b5dc99e4f553fff425665.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_6d14c3d1f43b5dc99e4f553fff425665;
    boost::python::scope scope_6d14c3d1f43b5dc99e4f553fff425665 = module_6d14c3d1f43b5dc99e4f553fff425665;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::criterion_type > enum_b69665ff8e35506d9f4bdc083f09c052("criterion_type");

    enum_b69665ff8e35506d9f4bdc083f09c052.value("AIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::AIC);

    enum_b69665ff8e35506d9f4bdc083f09c052.value("AI_CC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::AICc);

    enum_b69665ff8e35506d9f4bdc083f09c052.value("BIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::BIC);

    enum_b69665ff8e35506d9f4bdc083f09c052.value("HQIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::HQIC);

}