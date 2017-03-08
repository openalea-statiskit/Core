#include "_core.h"


namespace autowig
{
    PyObject* error_6703ab3001965416a3da60ad8639a800 = NULL;

    void translate_6703ab3001965416a3da60ad8639a800(struct ::statiskit::parameter_error const & error) { PyErr_SetString(error_6703ab3001965416a3da60ad8639a800, error.what()); };
}



void wrapper_6703ab3001965416a3da60ad8639a800()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_6703ab3001965416a3da60ad8639a800 = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_6703ab3001965416a3da60ad8639a800 = name_6703ab3001965416a3da60ad8639a800 + "." + "ParameterError";
    autowig::error_6703ab3001965416a3da60ad8639a800 = PyErr_NewException(strdup(name_6703ab3001965416a3da60ad8639a800.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("ParameterError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_6703ab3001965416a3da60ad8639a800)));
    boost::python::register_exception_translator< struct ::statiskit::parameter_error >(&autowig::translate_6703ab3001965416a3da60ad8639a800);

}