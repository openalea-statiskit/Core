#include "_core.h"


void wrapper_1d46946cbf4e5e5188cb98cb24f80697()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_e1e7647ed4235775b6d085dd28a83675 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_e1e7647ed4235775b6d085dd28a83675");
    boost::python::object module_e1e7647ed4235775b6d085dd28a83675(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_e1e7647ed4235775b6d085dd28a83675.c_str()))));
    boost::python::scope().attr("__selection_e1e7647ed4235775b6d085dd28a83675") = module_e1e7647ed4235775b6d085dd28a83675;
    boost::python::scope scope_e1e7647ed4235775b6d085dd28a83675 = module_e1e7647ed4235775b6d085dd28a83675;
    std::string name_360ceb38fb075feb99dc83054d31e423 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_360ceb38fb075feb99dc83054d31e423(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_360ceb38fb075feb99dc83054d31e423.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_360ceb38fb075feb99dc83054d31e423;
    boost::python::scope scope_360ceb38fb075feb99dc83054d31e423 = module_360ceb38fb075feb99dc83054d31e423;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_1d46946cbf4e5e5188cb98cb24f80697("criterion_type");
    enum_1d46946cbf4e5e5188cb98cb24f80697.value("AIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);
    enum_1d46946cbf4e5e5188cb98cb24f80697.value("AI_CC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);
    enum_1d46946cbf4e5e5188cb98cb24f80697.value("BIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);
    enum_1d46946cbf4e5e5188cb98cb24f80697.value("HQIC", ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);

}