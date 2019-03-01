#include "_core.h"

class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & (::statiskit::NamedData::*method_pointer_e3cfb1a3d9495367a23d2829c40016d3)()const= &::statiskit::NamedData::get_name;
void  (::statiskit::NamedData::*method_pointer_46f197031b545060a129ed44d41f810d)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)= &::statiskit::NamedData::set_name;

namespace autowig {
}

void wrapper_5060bd7989345eaab2a7cccb560a27f2(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::NamedData, autowig::HolderType< class ::statiskit::NamedData >::Type > class_5060bd7989345eaab2a7cccb560a27f2(module, "NamedData", "");
    class_5060bd7989345eaab2a7cccb560a27f2.def(pybind11::init<  >());
    class_5060bd7989345eaab2a7cccb560a27f2.def(pybind11::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & >());
    class_5060bd7989345eaab2a7cccb560a27f2.def(pybind11::init< class ::statiskit::NamedData const & >());
    class_5060bd7989345eaab2a7cccb560a27f2.def("get_name", method_pointer_e3cfb1a3d9495367a23d2829c40016d3, pybind11::return_value_policy::copy, "");
    class_5060bd7989345eaab2a7cccb560a27f2.def("set_name", method_pointer_46f197031b545060a129ed44d41f810d, "");

}