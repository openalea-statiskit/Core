#include "_core.h"


void wrapper_78fa594811935c2ea4b4905d733f141f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_ca4f80534b7b5884bffbbf5ba13d2f49 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._size_error");
    boost::python::object module_ca4f80534b7b5884bffbbf5ba13d2f49(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_ca4f80534b7b5884bffbbf5ba13d2f49.c_str()))));
    boost::python::scope().attr("_size_error") = module_ca4f80534b7b5884bffbbf5ba13d2f49;
    boost::python::scope scope_ca4f80534b7b5884bffbbf5ba13d2f49 = module_ca4f80534b7b5884bffbbf5ba13d2f49;
    boost::python::enum_< enum ::statiskit::size_error::size_type > enum_78fa594811935c2ea4b4905d733f141f("size_type");
    enum_78fa594811935c2ea4b4905d733f141f.value("INFERIOR", ::statiskit::size_error::inferior);
    enum_78fa594811935c2ea4b4905d733f141f.value("EQUAL", ::statiskit::size_error::equal);
    enum_78fa594811935c2ea4b4905d733f141f.value("SUPERIOR", ::statiskit::size_error::superior);

}