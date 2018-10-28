#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::HierarchicalSampleSpace const volatile * get_pointer<class ::statiskit::HierarchicalSampleSpace const volatile >(class ::statiskit::HierarchicalSampleSpace const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3e9d65e7582c5349812d357cd482c2ca()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    void  (::statiskit::HierarchicalSampleSpace::*method_pointer_604058ca75845a609dc1643449e794c1)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, struct ::statiskit::CategoricalSampleSpace const &) = &::statiskit::HierarchicalSampleSpace::partition;
    class ::statiskit::UnivariateConditionalData  (::statiskit::HierarchicalSampleSpace::*method_pointer_95ba86567ddd5cdeaee3a8113e8a4924)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, class ::statiskit::UnivariateConditionalData const &) const = &::statiskit::HierarchicalSampleSpace::split;
    struct ::statiskit::CategoricalSampleSpace const * (::statiskit::HierarchicalSampleSpace::*method_pointer_ddd11f7e554050a9a8f5150229b8c16b)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) = &::statiskit::HierarchicalSampleSpace::get_sample_space;
    class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >  (::statiskit::HierarchicalSampleSpace::*method_pointer_4805cfaee6d85d90a38c5df5668f7bb1)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::HierarchicalSampleSpace::children;
    boost::python::class_< class ::statiskit::HierarchicalSampleSpace, autowig::Held< class ::statiskit::HierarchicalSampleSpace >::Type, boost::python::bases< struct ::statiskit::CategoricalSampleSpace > > class_3e9d65e7582c5349812d357cd482c2ca("HierarchicalSampleSpace", "", boost::python::no_init);
    class_3e9d65e7582c5349812d357cd482c2ca.def(boost::python::init< struct ::statiskit::CategoricalSampleSpace const & >(""));
    class_3e9d65e7582c5349812d357cd482c2ca.def(boost::python::init< class ::statiskit::HierarchicalSampleSpace const & >(""));
    class_3e9d65e7582c5349812d357cd482c2ca.def("partition", method_pointer_604058ca75845a609dc1643449e794c1, "");
    class_3e9d65e7582c5349812d357cd482c2ca.def("split", method_pointer_95ba86567ddd5cdeaee3a8113e8a4924, "");
    class_3e9d65e7582c5349812d357cd482c2ca.def("get_sample_space", method_pointer_ddd11f7e554050a9a8f5150229b8c16b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3e9d65e7582c5349812d357cd482c2ca.def("children", method_pointer_4805cfaee6d85d90a38c5df5668f7bb1, "");

    if(autowig::Held< class ::statiskit::HierarchicalSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::HierarchicalSampleSpace >::Type, autowig::Held< struct ::statiskit::CategoricalSampleSpace >::Type >();
    }

}