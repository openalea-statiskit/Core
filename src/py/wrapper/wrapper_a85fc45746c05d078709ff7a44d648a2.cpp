#include "_core.h"


namespace autowig
{
    PyObject* error_a85fc45746c05d078709ff7a44d648a2 = NULL;

    void translate_a85fc45746c05d078709ff7a44d648a2(struct ::statiskit::interval_error const & error) { PyErr_SetString(error_a85fc45746c05d078709ff7a44d648a2, error.what()); };
}



void wrapper_a85fc45746c05d078709ff7a44d648a2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a85fc45746c05d078709ff7a44d648a2 = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_a85fc45746c05d078709ff7a44d648a2 = name_a85fc45746c05d078709ff7a44d648a2 + "." + "IntervalError";
    autowig::error_a85fc45746c05d078709ff7a44d648a2 = PyErr_NewException(strdup(name_a85fc45746c05d078709ff7a44d648a2.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("IntervalError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_a85fc45746c05d078709ff7a44d648a2)));
    boost::python::register_exception_translator< struct ::statiskit::interval_error >(&autowig::translate_a85fc45746c05d078709ff7a44d648a2);

}