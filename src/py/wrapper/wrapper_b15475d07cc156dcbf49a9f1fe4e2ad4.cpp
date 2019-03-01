#include "_core.h"


void wrapper_b15475d07cc156dcbf49a9f1fe4e2ad4(pybind11::module& module)
{

    pybind11::enum_< enum ::statiskit::event_type > enum_b15475d07cc156dcbf49a9f1fe4e2ad4(module, "event_type");
    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.value("ELEMENTARY", ::statiskit::ELEMENTARY);
    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.value("CENSORED", ::statiskit::CENSORED);
    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.value("LEFT", ::statiskit::LEFT);
    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.value("RIGHT", ::statiskit::RIGHT);
    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.value("INTERVAL", ::statiskit::INTERVAL);
    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.value("COMPOUND", ::statiskit::COMPOUND);
    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.export_values();

}