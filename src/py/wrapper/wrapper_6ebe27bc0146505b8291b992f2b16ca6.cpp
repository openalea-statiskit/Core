#include "_core.h"


namespace autowig
{
    PyObject* error_6ebe27bc0146505b8291b992f2b16ca6 = NULL;

    void translate_6ebe27bc0146505b8291b992f2b16ca6(struct ::statiskit::proxy_connection_error const & error) { PyErr_SetString(error_6ebe27bc0146505b8291b992f2b16ca6, error.what()); };
}



void wrapper_6ebe27bc0146505b8291b992f2b16ca6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_6ebe27bc0146505b8291b992f2b16ca6 = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_6ebe27bc0146505b8291b992f2b16ca6 = name_6ebe27bc0146505b8291b992f2b16ca6 + "." + "ProxyConnectionError";
    autowig::error_6ebe27bc0146505b8291b992f2b16ca6 = PyErr_NewException(strdup(name_6ebe27bc0146505b8291b992f2b16ca6.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("ProxyConnectionError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_6ebe27bc0146505b8291b992f2b16ca6)));
    boost::python::register_exception_translator< struct ::statiskit::proxy_connection_error >(&autowig::translate_6ebe27bc0146505b8291b992f2b16ca6);

}