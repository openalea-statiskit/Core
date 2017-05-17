#include "_core.h"


namespace autowig
{
    PyObject* error_d7ec56dc53f25158bd8061ead52e9950 = NULL;

    void translate_d7ec56dc53f25158bd8061ead52e9950(struct ::statiskit::sample_space_error const & error) { PyErr_SetString(error_d7ec56dc53f25158bd8061ead52e9950, error.what()); };
}



void wrapper_d7ec56dc53f25158bd8061ead52e9950()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_d7ec56dc53f25158bd8061ead52e9950 = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_d7ec56dc53f25158bd8061ead52e9950 = name_d7ec56dc53f25158bd8061ead52e9950 + "." + "SampleSpaceError";
    autowig::error_d7ec56dc53f25158bd8061ead52e9950 = PyErr_NewException(strdup(name_d7ec56dc53f25158bd8061ead52e9950.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("SampleSpaceError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_d7ec56dc53f25158bd8061ead52e9950)));
    boost::python::register_exception_translator< struct ::statiskit::sample_space_error >(&autowig::translate_d7ec56dc53f25158bd8061ead52e9950);

}