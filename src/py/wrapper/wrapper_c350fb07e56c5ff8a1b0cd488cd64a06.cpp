#include "_core.h"


void wrapper_c350fb07e56c5ff8a1b0cd488cd64a06()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    class ::std::unique_ptr< class ::statiskit::WeightedUnivariateData, struct ::std::default_delete< class ::statiskit::WeightedUnivariateData > >  (*function_pointer_c350fb07e56c5ff8a1b0cd488cd64a06)(class ::statiskit::WeightedUnivariateData const &) = ::std::make_unique;
    boost::python::def("make_unique", function_pointer_c350fb07e56c5ff8a1b0cd488cd64a06, "");
}