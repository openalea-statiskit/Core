#include "_core.h"


namespace autowig
{
    PyObject* error_f722c8cfa79750d98e46db79b3b1130d = NULL;

    void translate_f722c8cfa79750d98e46db79b3b1130d(struct ::statiskit::not_implemented_error const & error) { PyErr_SetString(error_f722c8cfa79750d98e46db79b3b1130d, error.what()); };
}



void wrapper_f722c8cfa79750d98e46db79b3b1130d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f722c8cfa79750d98e46db79b3b1130d = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_f722c8cfa79750d98e46db79b3b1130d = name_f722c8cfa79750d98e46db79b3b1130d + "." + "NotImplementedError";
    autowig::error_f722c8cfa79750d98e46db79b3b1130d = PyErr_NewException(strdup(name_f722c8cfa79750d98e46db79b3b1130d.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("NotImplementedError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_f722c8cfa79750d98e46db79b3b1130d)));
    boost::python::register_exception_translator< struct ::statiskit::not_implemented_error >(&autowig::translate_f722c8cfa79750d98e46db79b3b1130d);

}