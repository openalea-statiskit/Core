#include "_core.h"


void wrapper_2644644fcf2c54858f0565d665dcdbf4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_44e7c25b7bde5df2a9f031c534765f11 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_44e7c25b7bde5df2a9f031c534765f11");
    boost::python::object module_44e7c25b7bde5df2a9f031c534765f11(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_44e7c25b7bde5df2a9f031c534765f11.c_str()))));
    boost::python::scope().attr("__selection_44e7c25b7bde5df2a9f031c534765f11") = module_44e7c25b7bde5df2a9f031c534765f11;
    boost::python::scope scope_44e7c25b7bde5df2a9f031c534765f11 = module_44e7c25b7bde5df2a9f031c534765f11;
    std::string name_f4db63bd9e7254c18d0dca2fbb1da1ac = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_f4db63bd9e7254c18d0dca2fbb1da1ac(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f4db63bd9e7254c18d0dca2fbb1da1ac.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_f4db63bd9e7254c18d0dca2fbb1da1ac;
    boost::python::scope scope_f4db63bd9e7254c18d0dca2fbb1da1ac = module_f4db63bd9e7254c18d0dca2fbb1da1ac;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_2644644fcf2c54858f0565d665dcdbf4("criterion_type");

    enum_2644644fcf2c54858f0565d665dcdbf4.value("AIC", ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);

    enum_2644644fcf2c54858f0565d665dcdbf4.value("AI_CC", ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);

    enum_2644644fcf2c54858f0565d665dcdbf4.value("BIC", ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);

    enum_2644644fcf2c54858f0565d665dcdbf4.value("HQIC", ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);

}