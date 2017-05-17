#include "_core.h"


namespace autowig
{
    PyObject* error_943c8cc5188d5f9d9fba36372e10ed33 = NULL;

    void translate_943c8cc5188d5f9d9fba36372e10ed33(struct ::statiskit::overdispersion_error const & error) { PyErr_SetString(error_943c8cc5188d5f9d9fba36372e10ed33, error.what()); };
}



void wrapper_943c8cc5188d5f9d9fba36372e10ed33()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_943c8cc5188d5f9d9fba36372e10ed33 = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_943c8cc5188d5f9d9fba36372e10ed33 = name_943c8cc5188d5f9d9fba36372e10ed33 + "." + "OverdispersionError";
    autowig::error_943c8cc5188d5f9d9fba36372e10ed33 = PyErr_NewException(strdup(name_943c8cc5188d5f9d9fba36372e10ed33.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("OverdispersionError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_943c8cc5188d5f9d9fba36372e10ed33)));
    boost::python::register_exception_translator< struct ::statiskit::overdispersion_error >(&autowig::translate_943c8cc5188d5f9d9fba36372e10ed33);

}