#include "_core.h"


void wrapper_4091fe7ebaea5a58bb732192d7661dce()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::enum_< enum ::statiskit::outcome_type > enum_4091fe7ebaea5a58bb732192d7661dce("outcome_type");

    enum_4091fe7ebaea5a58bb732192d7661dce.value("CATEGORICAL", ::statiskit::CATEGORICAL);

    enum_4091fe7ebaea5a58bb732192d7661dce.value("DISCRETE", ::statiskit::DISCRETE);

    enum_4091fe7ebaea5a58bb732192d7661dce.value("CONTINUOUS", ::statiskit::CONTINUOUS);

    enum_4091fe7ebaea5a58bb732192d7661dce.value("MIXED", ::statiskit::MIXED);

}