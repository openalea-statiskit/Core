#include "_core.h"


void wrapper_f4afe77755d35d35b62ff4de5295156d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_cd94566e790a5588be95cba4cfaaec57 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_cd94566e790a5588be95cba4cfaaec57");
    boost::python::object module_cd94566e790a5588be95cba4cfaaec57(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_cd94566e790a5588be95cba4cfaaec57.c_str()))));
    boost::python::scope().attr("__selection_cd94566e790a5588be95cba4cfaaec57") = module_cd94566e790a5588be95cba4cfaaec57;
    boost::python::scope scope_cd94566e790a5588be95cba4cfaaec57 = module_cd94566e790a5588be95cba4cfaaec57;
    std::string name_c57cf5e1268c5299a5895ad1b219623f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_c57cf5e1268c5299a5895ad1b219623f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c57cf5e1268c5299a5895ad1b219623f.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_c57cf5e1268c5299a5895ad1b219623f;
    boost::python::scope scope_c57cf5e1268c5299a5895ad1b219623f = module_c57cf5e1268c5299a5895ad1b219623f;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type > enum_f4afe77755d35d35b62ff4de5295156d("criterion_type");

    enum_f4afe77755d35d35b62ff4de5295156d.value("AIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::AIC);

    enum_f4afe77755d35d35b62ff4de5295156d.value("AI_CC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::AICc);

    enum_f4afe77755d35d35b62ff4de5295156d.value("BIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::BIC);

    enum_f4afe77755d35d35b62ff4de5295156d.value("HQIC", ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::HQIC);

}