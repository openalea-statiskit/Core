#include "_core.h"


void wrapper_a93a2d91d2c15bfb9c6f0cbf59f14fd4()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    class ::std::unique_ptr< class ::statiskit::GeneralizedStudentDistribution, struct ::std::default_delete< class ::statiskit::GeneralizedStudentDistribution > >  (*function_pointer_a93a2d91d2c15bfb9c6f0cbf59f14fd4)(class ::statiskit::GeneralizedStudentDistribution const &) = ::std::make_unique;
    boost::python::def("make_unique", function_pointer_a93a2d91d2c15bfb9c6f0cbf59f14fd4, "");
}