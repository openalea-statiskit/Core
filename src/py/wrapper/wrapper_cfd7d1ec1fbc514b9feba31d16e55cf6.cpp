#include "_core.h"


void wrapper_cfd7d1ec1fbc514b9feba31d16e55cf6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::statiskit::IntegerSampleSpace const & (*function_pointer_cfd7d1ec1fbc514b9feba31d16e55cf6)() = ::statiskit::get_NN;
    boost::python::def("get_nn", function_pointer_cfd7d1ec1fbc514b9feba31d16e55cf6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
}