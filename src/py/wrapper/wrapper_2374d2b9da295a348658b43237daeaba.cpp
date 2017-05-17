#include "_core.h"


namespace autowig
{
    PyObject* error_2374d2b9da295a348658b43237daeaba = NULL;

    void translate_2374d2b9da295a348658b43237daeaba(struct ::statiskit::underdispersion_error const & error) { PyErr_SetString(error_2374d2b9da295a348658b43237daeaba, error.what()); };
}



void wrapper_2374d2b9da295a348658b43237daeaba()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_2374d2b9da295a348658b43237daeaba = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_2374d2b9da295a348658b43237daeaba = name_2374d2b9da295a348658b43237daeaba + "." + "UnderdispersionError";
    autowig::error_2374d2b9da295a348658b43237daeaba = PyErr_NewException(strdup(name_2374d2b9da295a348658b43237daeaba.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("UnderdispersionError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_2374d2b9da295a348658b43237daeaba)));
    boost::python::register_exception_translator< struct ::statiskit::underdispersion_error >(&autowig::translate_2374d2b9da295a348658b43237daeaba);

}