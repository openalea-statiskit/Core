#include "_core.h"


void wrapper_5e1ef51bf43d53e594b03929cc244a06()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 > & (*function_pointer_5e1ef51bf43d53e594b03929cc244a06)() = ::statiskit::get_random_generator;
    boost::python::def("get_random_generator", function_pointer_5e1ef51bf43d53e594b03929cc244a06, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :cpp:any:`::boost::random::mersenne_twister_engine<`\n    unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7,\n    2636928640, 15, 4022730752, 18, 1812433253 >\n\n");
}