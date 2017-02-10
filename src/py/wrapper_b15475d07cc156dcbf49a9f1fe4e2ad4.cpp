#include "_core.h"


void wrapper_b15475d07cc156dcbf49a9f1fe4e2ad4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::enum_< enum ::statiskit::event_type > enum_b15475d07cc156dcbf49a9f1fe4e2ad4("event_type");

    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.value("ELEMENTARY", ::statiskit::ELEMENTARY);

    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.value("SET", ::statiskit::SET);

    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.value("LEFT", ::statiskit::LEFT);

    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.value("RIGHT", ::statiskit::RIGHT);

    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.value("INTERVAL", ::statiskit::INTERVAL);

    enum_b15475d07cc156dcbf49a9f1fe4e2ad4.value("COMPOUND", ::statiskit::COMPOUND);

}