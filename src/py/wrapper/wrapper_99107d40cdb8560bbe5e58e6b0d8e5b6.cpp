#include "_core.h"


void wrapper_99107d40cdb8560bbe5e58e6b0d8e5b6()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    class ::std::unique_ptr< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator > >  (*function_pointer_99107d40cdb8560bbe5e58e6b0d8e5b6)(struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator const &) = ::std::make_unique;
    boost::python::def("make_unique", function_pointer_99107d40cdb8560bbe5e58e6b0d8e5b6, "");
}