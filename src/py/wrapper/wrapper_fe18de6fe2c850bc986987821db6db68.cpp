#include "_core.h"


void wrapper_fe18de6fe2c850bc986987821db6db68()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::enum_< enum ::statiskit::ordering_type > enum_fe18de6fe2c850bc986987821db6db68("ordering_type");

    enum_fe18de6fe2c850bc986987821db6db68.value("NONE", ::statiskit::NONE);

    enum_fe18de6fe2c850bc986987821db6db68.value("TOTAL", ::statiskit::TOTAL);

    enum_fe18de6fe2c850bc986987821db6db68.value("PARTIAL", ::statiskit::PARTIAL);

}