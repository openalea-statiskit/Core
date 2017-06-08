#include "_core.h"


namespace autowig
{
    PyObject* error_704ee68add3e546ca4a169ccfcb00d07 = NULL;

    void translate_704ee68add3e546ca4a169ccfcb00d07(struct ::statiskit::qualitative_sample_space_error const & error) { PyErr_SetString(error_704ee68add3e546ca4a169ccfcb00d07, error.what()); };
}



void wrapper_704ee68add3e546ca4a169ccfcb00d07()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_704ee68add3e546ca4a169ccfcb00d07 = boost::python::extract< std::string >(boost::python::scope().attr("__name__"));
    name_704ee68add3e546ca4a169ccfcb00d07 = name_704ee68add3e546ca4a169ccfcb00d07 + "." + "QualitativeSampleSpaceError";
    autowig::error_704ee68add3e546ca4a169ccfcb00d07 = PyErr_NewException(strdup(name_704ee68add3e546ca4a169ccfcb00d07.c_str()), PyExc_RuntimeError, NULL);
    boost::python::scope().attr("QualitativeSampleSpaceError") = boost::python::object(boost::python::handle<>(boost::python::borrowed(autowig::error_704ee68add3e546ca4a169ccfcb00d07)));
    boost::python::register_exception_translator< struct ::statiskit::qualitative_sample_space_error >(&autowig::translate_704ee68add3e546ca4a169ccfcb00d07);

}