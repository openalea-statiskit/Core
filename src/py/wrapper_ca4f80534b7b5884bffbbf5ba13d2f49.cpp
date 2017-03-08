#include "_core.h"


namespace autowig
{
    PyObject* error_ca4f80534b7b5884bffbbf5ba13d2f49 = NULL;

    void translate_ca4f80534b7b5884bffbbf5ba13d2f49(struct ::statiskit::size_error const & error) { PyErr_SetString(error_ca4f80534b7b5884bffbbf5ba13d2f49, error.what()); };
}



void wrapper_ca4f80534b7b5884bffbbf5ba13d2f49()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_ca4f80534b7b5884bffbbf5ba13d2f49 = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_ca4f80534b7b5884bffbbf5ba13d2f49 = name_ca4f80534b7b5884bffbbf5ba13d2f49 + "." + "SizeError";
    autowig::error_ca4f80534b7b5884bffbbf5ba13d2f49 = PyErr_NewException(strdup(name_ca4f80534b7b5884bffbbf5ba13d2f49.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("SizeError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_ca4f80534b7b5884bffbbf5ba13d2f49)));
    boost::python::register_exception_translator< struct ::statiskit::size_error >(&autowig::translate_ca4f80534b7b5884bffbbf5ba13d2f49);

}