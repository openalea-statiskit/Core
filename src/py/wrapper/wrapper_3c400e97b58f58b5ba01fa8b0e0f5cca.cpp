#include "_core.h"


void wrapper_3c400e97b58f58b5ba01fa8b0e0f5cca()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::statiskit::RealSampleSpace const & (*function_pointer_3c400e97b58f58b5ba01fa8b0e0f5cca)() = ::statiskit::get_NR;
    boost::python::def("get_nr", function_pointer_3c400e97b58f58b5ba01fa8b0e0f5cca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
}