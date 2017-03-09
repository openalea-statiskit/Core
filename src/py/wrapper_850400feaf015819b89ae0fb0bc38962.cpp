#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OrdinalSampleSpace const volatile * get_pointer<class ::statiskit::OrdinalSampleSpace const volatile >(class ::statiskit::OrdinalSampleSpace const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_850400feaf015819b89ae0fb0bc38962()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::ordering_type  (::statiskit::OrdinalSampleSpace::*method_pointer_c0e30b65e8c8583ab96a5d2acf726922)() const = &::statiskit::OrdinalSampleSpace::get_ordering;
    class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  (::statiskit::OrdinalSampleSpace::*method_pointer_e93a7b2e9c2d5ef99aeae284663b002a)() const = &::statiskit::OrdinalSampleSpace::get_ordered;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const & (::statiskit::OrdinalSampleSpace::*method_pointer_bbbcd1f7befd501da33c8bc0a6ca7d94)() const = &::statiskit::OrdinalSampleSpace::get_rank;
    void  (::statiskit::OrdinalSampleSpace::*method_pointer_106705a757c553aa881c46d55a55ded5)(class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const &) = &::statiskit::OrdinalSampleSpace::set_rank;
    void  (::statiskit::OrdinalSampleSpace::*method_pointer_343159b54c8a5f0da44d25b4d4786073)() = &::statiskit::OrdinalSampleSpace::randomize;
    void  (::statiskit::OrdinalSampleSpace::*method_pointer_edfa0e4b94e45976a29c7feb6e6ce2cd)(enum ::statiskit::encoding_type const &) = &::statiskit::OrdinalSampleSpace::set_encoding;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  (::statiskit::OrdinalSampleSpace::*method_pointer_a6fc254f01485d0193e2feb2d6f16f53)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::OrdinalSampleSpace::encode;
    class ::std::unique_ptr< class ::statiskit::NominalSampleSpace, struct ::std::default_delete< class ::statiskit::NominalSampleSpace > >  (::statiskit::OrdinalSampleSpace::*method_pointer_57b6fbac4790575084fe42696914a551)() const = &::statiskit::OrdinalSampleSpace::as_nominal;
    class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  (::statiskit::OrdinalSampleSpace::*method_pointer_2465210770605984a9d843f444adfc47)() const = &::statiskit::OrdinalSampleSpace::copy;
    boost::python::class_< class ::statiskit::OrdinalSampleSpace, autowig::Held< class ::statiskit::OrdinalSampleSpace >::Type, boost::python::bases< struct ::statiskit::CategoricalSampleSpace > > class_850400feaf015819b89ae0fb0bc38962("OrdinalSampleSpace", "", boost::python::no_init);
    class_850400feaf015819b89ae0fb0bc38962.def(boost::python::init< class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >(""));
    class_850400feaf015819b89ae0fb0bc38962.def(boost::python::init< class ::statiskit::OrdinalSampleSpace const & >(""));
    class_850400feaf015819b89ae0fb0bc38962.def("get_ordering", method_pointer_c0e30b65e8c8583ab96a5d2acf726922, "");
    class_850400feaf015819b89ae0fb0bc38962.def("get_ordered", method_pointer_e93a7b2e9c2d5ef99aeae284663b002a, "");
    class_850400feaf015819b89ae0fb0bc38962.def("get_rank", method_pointer_bbbcd1f7befd501da33c8bc0a6ca7d94, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_850400feaf015819b89ae0fb0bc38962.def("set_rank", method_pointer_106705a757c553aa881c46d55a55ded5, "");
    class_850400feaf015819b89ae0fb0bc38962.def("randomize", method_pointer_343159b54c8a5f0da44d25b4d4786073, "");
    class_850400feaf015819b89ae0fb0bc38962.def("set_encoding", method_pointer_edfa0e4b94e45976a29c7feb6e6ce2cd, "");
    class_850400feaf015819b89ae0fb0bc38962.def("encode", method_pointer_a6fc254f01485d0193e2feb2d6f16f53, "");
    class_850400feaf015819b89ae0fb0bc38962.def("as_nominal", method_pointer_57b6fbac4790575084fe42696914a551, "");
    class_850400feaf015819b89ae0fb0bc38962.def("copy", method_pointer_2465210770605984a9d843f444adfc47, "");

    if(autowig::Held< class ::statiskit::OrdinalSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OrdinalSampleSpace >::Type, autowig::Held< struct ::statiskit::CategoricalSampleSpace >::Type >();
    }

}