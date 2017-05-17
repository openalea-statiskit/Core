#include "_core.h"


void wrapper_f547adcf134f504ea7a1c24a48441dfa()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::statiskit::RealSampleSpace const & (*function_pointer_f547adcf134f504ea7a1c24a48441dfa)() = ::statiskit::get_PR;
    boost::python::def("get_pr", function_pointer_f547adcf134f504ea7a1c24a48441dfa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
}