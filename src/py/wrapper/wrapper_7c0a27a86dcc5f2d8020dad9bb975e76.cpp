#include "_core.h"


namespace autowig
{
    PyObject* error_7c0a27a86dcc5f2d8020dad9bb975e76 = NULL;

    void translate_7c0a27a86dcc5f2d8020dad9bb975e76(struct ::statiskit::duplicated_value_error const & error) { PyErr_SetString(error_7c0a27a86dcc5f2d8020dad9bb975e76, error.what()); };
}



void wrapper_7c0a27a86dcc5f2d8020dad9bb975e76()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_7c0a27a86dcc5f2d8020dad9bb975e76 = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_7c0a27a86dcc5f2d8020dad9bb975e76 = name_7c0a27a86dcc5f2d8020dad9bb975e76 + "." + "DuplicatedValueError";
    autowig::error_7c0a27a86dcc5f2d8020dad9bb975e76 = PyErr_NewException(strdup(name_7c0a27a86dcc5f2d8020dad9bb975e76.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("DuplicatedValueError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_7c0a27a86dcc5f2d8020dad9bb975e76)));
    boost::python::register_exception_translator< struct ::statiskit::duplicated_value_error >(&autowig::translate_7c0a27a86dcc5f2d8020dad9bb975e76);

}