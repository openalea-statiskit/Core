#include "_core.h"


namespace autowig
{
    PyObject* error_2b3c507b8c725207815095175a281285 = NULL;

    void translate_2b3c507b8c725207815095175a281285(struct ::statiskit::in_set_error const & error) { PyErr_SetString(error_2b3c507b8c725207815095175a281285, error.what()); };
}



void wrapper_2b3c507b8c725207815095175a281285()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_2b3c507b8c725207815095175a281285 = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_2b3c507b8c725207815095175a281285 = name_2b3c507b8c725207815095175a281285 + "." + "InSetError";
    autowig::error_2b3c507b8c725207815095175a281285 = PyErr_NewException(strdup(name_2b3c507b8c725207815095175a281285.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("InSetError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_2b3c507b8c725207815095175a281285)));
    boost::python::register_exception_translator< struct ::statiskit::in_set_error >(&autowig::translate_2b3c507b8c725207815095175a281285);

}