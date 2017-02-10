#include "_core.h"


namespace autowig
{
    PyObject* error_e5c76380eae85d579238480527b2512c = NULL;

    void translate_e5c76380eae85d579238480527b2512c(struct ::statiskit::lower_bound_error const & error) { PyErr_SetString(error_e5c76380eae85d579238480527b2512c, error.what()); };
}



void wrapper_e5c76380eae85d579238480527b2512c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_e5c76380eae85d579238480527b2512c = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_e5c76380eae85d579238480527b2512c = name_e5c76380eae85d579238480527b2512c + "." + "LowerBoundError";
    autowig::error_e5c76380eae85d579238480527b2512c = PyErr_NewException(strdup(name_e5c76380eae85d579238480527b2512c.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("LowerBoundError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_e5c76380eae85d579238480527b2512c)));
    boost::python::register_exception_translator< struct ::statiskit::lower_bound_error >(&autowig::translate_e5c76380eae85d579238480527b2512c);

}