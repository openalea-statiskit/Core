#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NamedData const volatile * get_pointer<class ::statiskit::NamedData const volatile >(class ::statiskit::NamedData const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_5060bd7989345eaab2a7cccb560a27f2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & (::statiskit::NamedData::*method_pointer_46e0ad16f823566a88041784eb8b25a6)() const = &::statiskit::NamedData::get_identifier;
    void  (::statiskit::NamedData::*method_pointer_03fac3296de65509b60e65218693840c)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) = &::statiskit::NamedData::set_identifier;
    class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & (::statiskit::NamedData::*method_pointer_3b632f093a135e5696e3f9ddb48f412b)() const = &::statiskit::NamedData::get_ascii;
    void  (::statiskit::NamedData::*method_pointer_1fda9157ac555511a30da7587da5f4a3)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) = &::statiskit::NamedData::set_ascii;
    class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & (::statiskit::NamedData::*method_pointer_2fe09cabf880522e8835af2e56647ea7)() const = &::statiskit::NamedData::get_latex;
    void  (::statiskit::NamedData::*method_pointer_a63f92ce052b590a84a31294a4a67747)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) = &::statiskit::NamedData::set_latex;
    boost::python::class_< class ::statiskit::NamedData, autowig::Held< class ::statiskit::NamedData >::Type > class_5060bd7989345eaab2a7cccb560a27f2("NamedData", "", boost::python::no_init);
    class_5060bd7989345eaab2a7cccb560a27f2.def(boost::python::init<  >(""));
    class_5060bd7989345eaab2a7cccb560a27f2.def(boost::python::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & >(""));
    class_5060bd7989345eaab2a7cccb560a27f2.def(boost::python::init< class ::statiskit::NamedData const & >(""));
    class_5060bd7989345eaab2a7cccb560a27f2.def("get_identifier", method_pointer_46e0ad16f823566a88041784eb8b25a6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5060bd7989345eaab2a7cccb560a27f2.def("set_identifier", method_pointer_03fac3296de65509b60e65218693840c, "");
    class_5060bd7989345eaab2a7cccb560a27f2.def("get_ascii", method_pointer_3b632f093a135e5696e3f9ddb48f412b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5060bd7989345eaab2a7cccb560a27f2.def("set_ascii", method_pointer_1fda9157ac555511a30da7587da5f4a3, "");
    class_5060bd7989345eaab2a7cccb560a27f2.def("get_latex", method_pointer_2fe09cabf880522e8835af2e56647ea7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5060bd7989345eaab2a7cccb560a27f2.def("set_latex", method_pointer_a63f92ce052b590a84a31294a4a67747, "");

}