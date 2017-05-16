#include "_core.h"


void wrapper_dacafb2abd3e5e87bcba015691229ac8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::statiskit::RealSampleSpace const & (*function_pointer_dacafb2abd3e5e87bcba015691229ac8)() = ::statiskit::get_RR;
    boost::python::def("get_rr", function_pointer_dacafb2abd3e5e87bcba015691229ac8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
}