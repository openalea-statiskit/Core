#include "_core.h"


void wrapper_82a955f35a495763994ad28bdaa88d42()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_bfd0af0710215b30a7afa5127166b334 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_bfd0af0710215b30a7afa5127166b334");
    boost::python::object module_bfd0af0710215b30a7afa5127166b334(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_bfd0af0710215b30a7afa5127166b334.c_str()))));
    boost::python::scope().attr("__selection_bfd0af0710215b30a7afa5127166b334") = module_bfd0af0710215b30a7afa5127166b334;
    boost::python::scope scope_bfd0af0710215b30a7afa5127166b334 = module_bfd0af0710215b30a7afa5127166b334;
    std::string name_df2e34853f5b5b539c2743d1b5630a5c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_df2e34853f5b5b539c2743d1b5630a5c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_df2e34853f5b5b539c2743d1b5630a5c.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_df2e34853f5b5b539c2743d1b5630a5c;
    boost::python::scope scope_df2e34853f5b5b539c2743d1b5630a5c = module_df2e34853f5b5b539c2743d1b5630a5c;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator::criterion_type > enum_82a955f35a495763994ad28bdaa88d42("criterion_type");
    enum_82a955f35a495763994ad28bdaa88d42.value("AIC", ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator::AIC);
    enum_82a955f35a495763994ad28bdaa88d42.value("AI_CC", ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator::AICc);
    enum_82a955f35a495763994ad28bdaa88d42.value("BIC", ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator::BIC);
    enum_82a955f35a495763994ad28bdaa88d42.value("HQIC", ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator::HQIC);

}