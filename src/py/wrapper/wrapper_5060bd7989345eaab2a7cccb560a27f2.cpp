#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NamedData const volatile * get_pointer<class ::statiskit::NamedData const volatile >(class ::statiskit::NamedData const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5060bd7989345eaab2a7cccb560a27f2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & (::statiskit::NamedData::*method_pointer_e7398f559ed25c70a96cdbbb2b1ee7e0)() const = &::statiskit::NamedData::get_name;
    void  (::statiskit::NamedData::*method_pointer_46f197031b545060a129ed44d41f810d)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) = &::statiskit::NamedData::set_name;
    boost::python::class_< class ::statiskit::NamedData, autowig::Held< class ::statiskit::NamedData >::Type > class_5060bd7989345eaab2a7cccb560a27f2("NamedData", "", boost::python::no_init);
    class_5060bd7989345eaab2a7cccb560a27f2.def(boost::python::init<  >(""));
    class_5060bd7989345eaab2a7cccb560a27f2.def(boost::python::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & >(""));
    class_5060bd7989345eaab2a7cccb560a27f2.def(boost::python::init< class ::statiskit::NamedData const & >(""));
    class_5060bd7989345eaab2a7cccb560a27f2.def("get_name", method_pointer_e7398f559ed25c70a96cdbbb2b1ee7e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5060bd7989345eaab2a7cccb560a27f2.def("set_name", method_pointer_46f197031b545060a129ed44d41f810d, "");

}