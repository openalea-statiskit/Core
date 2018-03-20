#include "_core.h"


void wrapper_b104fe544f015a2e89f37e2b3058b3dc()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > >  (*function_pointer_b104fe544f015a2e89f37e2b3058b3dc)(class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const &) = ::std::make_unique;
    boost::python::def("make_unique", function_pointer_b104fe544f015a2e89f37e2b3058b3dc, "");
}