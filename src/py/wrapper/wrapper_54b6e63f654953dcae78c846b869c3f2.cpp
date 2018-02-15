#include "_core.h"


void wrapper_54b6e63f654953dcae78c846b869c3f2()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    class ::std::unique_ptr< class ::statiskit::CauchyDistribution, struct ::std::default_delete< class ::statiskit::CauchyDistribution > >  (*function_pointer_54b6e63f654953dcae78c846b869c3f2)(class ::statiskit::CauchyDistribution const &) = ::std::make_unique;
    boost::python::def("make_unique", function_pointer_54b6e63f654953dcae78c846b869c3f2, "");
}