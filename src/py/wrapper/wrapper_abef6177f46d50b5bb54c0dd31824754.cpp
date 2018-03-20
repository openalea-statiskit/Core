#include "_core.h"


void wrapper_abef6177f46d50b5bb54c0dd31824754()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_503849a008915707a02e604de7f58273 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_503849a008915707a02e604de7f58273");
    boost::python::object module_503849a008915707a02e604de7f58273(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_503849a008915707a02e604de7f58273.c_str()))));
    boost::python::scope().attr("__selection_503849a008915707a02e604de7f58273") = module_503849a008915707a02e604de7f58273;
    boost::python::scope scope_503849a008915707a02e604de7f58273 = module_503849a008915707a02e604de7f58273;
    std::string name_ed81e719ae18598db776779b62b54889 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._criterion_estimator");
    boost::python::object module_ed81e719ae18598db776779b62b54889(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_ed81e719ae18598db776779b62b54889.c_str()))));
    boost::python::scope().attr("_criterion_estimator") = module_ed81e719ae18598db776779b62b54889;
    boost::python::scope scope_ed81e719ae18598db776779b62b54889 = module_ed81e719ae18598db776779b62b54889;
    boost::python::enum_< enum ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::criterion_type > enum_abef6177f46d50b5bb54c0dd31824754("criterion_type");
    enum_abef6177f46d50b5bb54c0dd31824754.value("AIC", ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::AIC);
    enum_abef6177f46d50b5bb54c0dd31824754.value("AI_CC", ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::AICc);
    enum_abef6177f46d50b5bb54c0dd31824754.value("BIC", ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::BIC);
    enum_abef6177f46d50b5bb54c0dd31824754.value("HQIC", ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::HQIC);

}