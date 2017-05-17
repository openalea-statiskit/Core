#include "_core.h"


namespace autowig
{
    PyObject* error_4377e68c4caf5dae89a051f45d03b8c3 = NULL;

    void translate_4377e68c4caf5dae89a051f45d03b8c3(struct ::statiskit::member_error const & error) { PyErr_SetString(error_4377e68c4caf5dae89a051f45d03b8c3, error.what()); };
}



void wrapper_4377e68c4caf5dae89a051f45d03b8c3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_4377e68c4caf5dae89a051f45d03b8c3 = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_4377e68c4caf5dae89a051f45d03b8c3 = name_4377e68c4caf5dae89a051f45d03b8c3 + "." + "MemberError";
    autowig::error_4377e68c4caf5dae89a051f45d03b8c3 = PyErr_NewException(strdup(name_4377e68c4caf5dae89a051f45d03b8c3.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("MemberError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_4377e68c4caf5dae89a051f45d03b8c3)));
    boost::python::register_exception_translator< struct ::statiskit::member_error >(&autowig::translate_4377e68c4caf5dae89a051f45d03b8c3);

}