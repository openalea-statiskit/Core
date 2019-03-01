#include "_core.h"


void wrapper_4091fe7ebaea5a58bb732192d7661dce(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::outcome_type > enum_4091fe7ebaea5a58bb732192d7661dce(module, "outcome_type");
    enum_4091fe7ebaea5a58bb732192d7661dce.value("CATEGORICAL", ::statiskit::CATEGORICAL);
    enum_4091fe7ebaea5a58bb732192d7661dce.value("DISCRETE", ::statiskit::DISCRETE);
    enum_4091fe7ebaea5a58bb732192d7661dce.value("CONTINUOUS", ::statiskit::CONTINUOUS);
    enum_4091fe7ebaea5a58bb732192d7661dce.value("MIXED", ::statiskit::MIXED);
    enum_4091fe7ebaea5a58bb732192d7661dce.export_values();

}