#include "_core.h"


namespace autowig
{
    PyObject* error_d335c4296ec45f9a80fc78493af8917e = NULL;

    void translate_d335c4296ec45f9a80fc78493af8917e(struct ::statiskit::sample_size_error const & error) { PyErr_SetString(error_d335c4296ec45f9a80fc78493af8917e, error.what()); };
}



void wrapper_d335c4296ec45f9a80fc78493af8917e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_d335c4296ec45f9a80fc78493af8917e = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_d335c4296ec45f9a80fc78493af8917e = name_d335c4296ec45f9a80fc78493af8917e + "." + "SampleSizeError";
    autowig::error_d335c4296ec45f9a80fc78493af8917e = PyErr_NewException(strdup(name_d335c4296ec45f9a80fc78493af8917e.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("SampleSizeError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_d335c4296ec45f9a80fc78493af8917e)));
    boost::python::register_exception_translator< struct ::statiskit::sample_size_error >(&autowig::translate_d335c4296ec45f9a80fc78493af8917e);

}