#include "_core.h"


void wrapper_9e8654bf6bc2546091b9481df4d2becc()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator > >  (*function_pointer_9e8654bf6bc2546091b9481df4d2becc)(class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::CriterionEstimator const &) = ::std::make_unique;
    boost::python::def("make_unique", function_pointer_9e8654bf6bc2546091b9481df4d2becc, "");
}