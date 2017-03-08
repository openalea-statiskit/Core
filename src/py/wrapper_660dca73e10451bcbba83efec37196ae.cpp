#include "_core.h"


namespace autowig
{
    PyObject* error_660dca73e10451bcbba83efec37196ae = NULL;

    void translate_660dca73e10451bcbba83efec37196ae(struct ::statiskit::upper_bound_error const & error) { PyErr_SetString(error_660dca73e10451bcbba83efec37196ae, error.what()); };
}



void wrapper_660dca73e10451bcbba83efec37196ae()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_660dca73e10451bcbba83efec37196ae = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_660dca73e10451bcbba83efec37196ae = name_660dca73e10451bcbba83efec37196ae + "." + "UpperBoundError";
    autowig::error_660dca73e10451bcbba83efec37196ae = PyErr_NewException(strdup(name_660dca73e10451bcbba83efec37196ae.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("UpperBoundError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_660dca73e10451bcbba83efec37196ae)));
    boost::python::register_exception_translator< struct ::statiskit::upper_bound_error >(&autowig::translate_660dca73e10451bcbba83efec37196ae);

}