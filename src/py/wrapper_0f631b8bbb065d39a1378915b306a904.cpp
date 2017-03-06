#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::UnivariateSampleSpace const volatile * get_pointer<struct ::statiskit::UnivariateSampleSpace const volatile >(struct ::statiskit::UnivariateSampleSpace const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_0f631b8bbb065d39a1378915b306a904()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::outcome_type  (::statiskit::UnivariateSampleSpace::*method_pointer_2875d281654d56729645a2393c5d7ae3)() const = &::statiskit::UnivariateSampleSpace::get_outcome;
    enum ::statiskit::ordering_type  (::statiskit::UnivariateSampleSpace::*method_pointer_a5c2538f602650ca89c7d30ba94848b9)() const = &::statiskit::UnivariateSampleSpace::get_ordering;
    bool  (::statiskit::UnivariateSampleSpace::*method_pointer_aabfe8c337085d58a1ab73066415dd66)(struct ::statiskit::UnivariateEvent const *) const = &::statiskit::UnivariateSampleSpace::is_compatible;
    class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  (::statiskit::UnivariateSampleSpace::*method_pointer_a90fb1d3b5f75154bbd9fec1e0bee360)() const = &::statiskit::UnivariateSampleSpace::copy;
    boost::python::class_< struct ::statiskit::UnivariateSampleSpace, autowig::Held< struct ::statiskit::UnivariateSampleSpace >::Type, boost::noncopyable > class_0f631b8bbb065d39a1378915b306a904("UnivariateSampleSpace", "", boost::python::no_init);
    class_0f631b8bbb065d39a1378915b306a904.def("get_outcome", method_pointer_2875d281654d56729645a2393c5d7ae3, "");
    class_0f631b8bbb065d39a1378915b306a904.def("get_ordering", method_pointer_a5c2538f602650ca89c7d30ba94848b9, "");
    class_0f631b8bbb065d39a1378915b306a904.def("is_compatible", method_pointer_aabfe8c337085d58a1ab73066415dd66, "");
    class_0f631b8bbb065d39a1378915b306a904.def("copy", method_pointer_a90fb1d3b5f75154bbd9fec1e0bee360, "");

}