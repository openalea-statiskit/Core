#include "_core.h"


void wrapper_cc00dae7ca6d56c79922ef32ecf17f07()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::statiskit::IntegerSampleSpace const & (*function_pointer_cc00dae7ca6d56c79922ef32ecf17f07)() = ::statiskit::get_ZZ;
    boost::python::def("get_zz", function_pointer_cc00dae7ca6d56c79922ef32ecf17f07, boost::python::return_value_policy< boost::python::return_by_value >(), "");
}