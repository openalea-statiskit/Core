#include "_core.h"


namespace autowig
{
    PyObject* error_33e65ba70bc55b7a87a025eaa60e5665 = NULL;

    void translate_33e65ba70bc55b7a87a025eaa60e5665(struct ::statiskit::nullptr_error const & error) { PyErr_SetString(error_33e65ba70bc55b7a87a025eaa60e5665, error.what()); };
}



void wrapper_33e65ba70bc55b7a87a025eaa60e5665()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_33e65ba70bc55b7a87a025eaa60e5665 = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_33e65ba70bc55b7a87a025eaa60e5665 = name_33e65ba70bc55b7a87a025eaa60e5665 + "." + "NullptrError";
    autowig::error_33e65ba70bc55b7a87a025eaa60e5665 = PyErr_NewException(strdup(name_33e65ba70bc55b7a87a025eaa60e5665.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("NullptrError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_33e65ba70bc55b7a87a025eaa60e5665)));
    boost::python::register_exception_translator< struct ::statiskit::nullptr_error >(&autowig::translate_33e65ba70bc55b7a87a025eaa60e5665);

}