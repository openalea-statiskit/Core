#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::VectorSampleSpace const volatile * get_pointer<class ::statiskit::VectorSampleSpace const volatile >(class ::statiskit::VectorSampleSpace const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{

}


void wrapper_98dec83d5b055bb7bd34151081ce3693()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::std::size_t  (::statiskit::VectorSampleSpace::*method_pointer_3775ac9498ea5aa4b1bb16b61d0dcc68)() const = &::statiskit::VectorSampleSpace::size;
    struct ::statiskit::UnivariateSampleSpace const * (::statiskit::VectorSampleSpace::*method_pointer_8cd6d78c3c9a5e42b35f5085d003fad6)(::std::size_t const &) const = &::statiskit::VectorSampleSpace::get;
    void  (::statiskit::VectorSampleSpace::*method_pointer_06b47ef228045a14a15a6565b1762490)(::std::size_t const &, struct ::statiskit::UnivariateSampleSpace const &) = &::statiskit::VectorSampleSpace::set;
    class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > >  (::statiskit::VectorSampleSpace::*method_pointer_bb72364217e75fedb22e558ab4729c74)() const = &::statiskit::VectorSampleSpace::copy;
    boost::python::class_< class ::statiskit::VectorSampleSpace, autowig::Held< class ::statiskit::VectorSampleSpace >::Type, boost::python::bases< struct ::statiskit::MultivariateSampleSpace > > class_98dec83d5b055bb7bd34151081ce3693("VectorSampleSpace", "", boost::python::no_init);
    class_98dec83d5b055bb7bd34151081ce3693.def(boost::python::init< class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > const & >(""));
    class_98dec83d5b055bb7bd34151081ce3693.def(boost::python::init< class ::statiskit::VectorSampleSpace const & >(""));
    class_98dec83d5b055bb7bd34151081ce3693.def("__len__", method_pointer_3775ac9498ea5aa4b1bb16b61d0dcc68, "");
    class_98dec83d5b055bb7bd34151081ce3693.def("get", method_pointer_8cd6d78c3c9a5e42b35f5085d003fad6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_98dec83d5b055bb7bd34151081ce3693.def("set", method_pointer_06b47ef228045a14a15a6565b1762490, "");
    class_98dec83d5b055bb7bd34151081ce3693.def("copy", method_pointer_bb72364217e75fedb22e558ab4729c74, "");

    if(autowig::Held< class ::statiskit::VectorSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::VectorSampleSpace >::Type, autowig::Held< struct ::statiskit::MultivariateSampleSpace >::Type >();
    }

}