#include "_core.h"


namespace autowig
{
}


void wrapper_05e2d77c88915ca0869be62dd906514e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    bool  (::statiskit::Optimization::*method_pointer_3583b89fa66f5ae5b9804913010d8f0b)(unsigned int const &, double const &, double const &) const = &::statiskit::Optimization::run;
    double const & (::statiskit::Optimization::*method_pointer_1772daf5793257ad8ea1bb82f0ecbe3d)() const = &::statiskit::Optimization::get_mindiff;
    void  (::statiskit::Optimization::*method_pointer_02301f49d93f5c07b115b192efca690d)(double const &) = &::statiskit::Optimization::set_mindiff;
    unsigned int  (::statiskit::Optimization::*method_pointer_5cd47567f4d75d629c75f5513216c0a9)() const = &::statiskit::Optimization::get_minits;
    void  (::statiskit::Optimization::*method_pointer_336ced94176452ea8e48240b8008e37f)(unsigned int const &) = &::statiskit::Optimization::set_minits;
    unsigned int  (::statiskit::Optimization::*method_pointer_4188aca47da654a5ba2f771da3497613)() const = &::statiskit::Optimization::get_maxits;
    void  (::statiskit::Optimization::*method_pointer_892ba771ed965bfcab408ece3805bd89)(unsigned int const &) = &::statiskit::Optimization::set_maxits;
    boost::python::class_< class ::statiskit::Optimization, autowig::Held< class ::statiskit::Optimization >::Type > class_05e2d77c88915ca0869be62dd906514e("Optimization", "", boost::python::no_init);
    class_05e2d77c88915ca0869be62dd906514e.def(boost::python::init<  >(""));
    class_05e2d77c88915ca0869be62dd906514e.def(boost::python::init< class ::statiskit::Optimization const & >(""));
    class_05e2d77c88915ca0869be62dd906514e.def("run", method_pointer_3583b89fa66f5ae5b9804913010d8f0b, "");
    class_05e2d77c88915ca0869be62dd906514e.def("get_mindiff", method_pointer_1772daf5793257ad8ea1bb82f0ecbe3d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_05e2d77c88915ca0869be62dd906514e.def("set_mindiff", method_pointer_02301f49d93f5c07b115b192efca690d, "");
    class_05e2d77c88915ca0869be62dd906514e.def("get_minits", method_pointer_5cd47567f4d75d629c75f5513216c0a9, "");
    class_05e2d77c88915ca0869be62dd906514e.def("set_minits", method_pointer_336ced94176452ea8e48240b8008e37f, "");
    class_05e2d77c88915ca0869be62dd906514e.def("get_maxits", method_pointer_4188aca47da654a5ba2f771da3497613, "");
    class_05e2d77c88915ca0869be62dd906514e.def("set_maxits", method_pointer_892ba771ed965bfcab408ece3805bd89, "");

}