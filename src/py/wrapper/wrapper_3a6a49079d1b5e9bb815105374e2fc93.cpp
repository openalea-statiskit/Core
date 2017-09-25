#include "_core.h"


void wrapper_3a6a49079d1b5e9bb815105374e2fc93()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::enum_< enum ::statiskit::encoding_type > enum_3a6a49079d1b5e9bb815105374e2fc93("encoding_type");
    enum_3a6a49079d1b5e9bb815105374e2fc93.value("TREATMENT", ::statiskit::TREATMENT);
    enum_3a6a49079d1b5e9bb815105374e2fc93.value("DEVIATION", ::statiskit::DEVIATION);
    enum_3a6a49079d1b5e9bb815105374e2fc93.value("CUMULATIVE", ::statiskit::CUMULATIVE);

}