#include "_core.h"


void wrapper_4eead2f6f5ce50588b930a018e6d3114()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    class ::std::unique_ptr< class ::statiskit::BetaBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaBinomialDistribution > >  (*function_pointer_4eead2f6f5ce50588b930a018e6d3114)(class ::statiskit::BetaBinomialDistribution const &) = ::std::make_unique;
    boost::python::def("make_unique", function_pointer_4eead2f6f5ce50588b930a018e6d3114, "");
}