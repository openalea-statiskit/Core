#include "_core.h"


void wrapper_2a19bfa43dbe5ad6860c7cf6672b6b69()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (*function_pointer_2a19bfa43dbe5ad6860c7cf6672b6b69)() = ::statiskit::get_mindiff;
    boost::python::def("get_mindiff", function_pointer_2a19bfa43dbe5ad6860c7cf6672b6b69, "");
}