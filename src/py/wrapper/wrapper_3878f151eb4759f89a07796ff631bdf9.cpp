#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::HierarchicalDistribution const volatile * get_pointer<class ::statiskit::HierarchicalDistribution const volatile >(class ::statiskit::HierarchicalDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3878f151eb4759f89a07796ff631bdf9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::HierarchicalDistribution::*method_pointer_011b6a4c67bd51979faad3d70b2accb1)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::HierarchicalDistribution::internal_ldf;
    double  (::statiskit::HierarchicalDistribution::*method_pointer_bdb51633f466504bbda767676bc595b0)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::HierarchicalDistribution::internal_pdf;
    unsigned int  (::statiskit::HierarchicalDistribution::*method_pointer_516ce2ebf00e53a5b015217458043636)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::HierarchicalDistribution::index;
    struct ::statiskit::CategoricalUnivariateDistribution const * (::statiskit::HierarchicalDistribution::*method_pointer_0095a88066135c6c963b6a524c18cad4)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::HierarchicalDistribution::get_distribution;
    void  (::statiskit::HierarchicalDistribution::*method_pointer_82f72d1f9cd65a6881253ef5e6c217db)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, struct ::statiskit::CategoricalUnivariateDistribution const &) = &::statiskit::HierarchicalDistribution::set_distribution;
    class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const (::statiskit::HierarchicalDistribution::*method_pointer_a57d14e2013e52109b587e456949b355)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::HierarchicalDistribution::parent;
    boost::python::class_< class ::statiskit::HierarchicalDistribution, autowig::Held< class ::statiskit::HierarchicalDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::HierarchicalDistribution, struct ::statiskit::CategoricalUnivariateDistribution > > > class_3878f151eb4759f89a07796ff631bdf9("HierarchicalDistribution", "", boost::python::no_init);
    class_3878f151eb4759f89a07796ff631bdf9.def(boost::python::init<  >(""));
    class_3878f151eb4759f89a07796ff631bdf9.def(boost::python::init< class ::statiskit::HierarchicalSampleSpace const & >(""));
    class_3878f151eb4759f89a07796ff631bdf9.def(boost::python::init< class ::statiskit::HierarchicalDistribution const & >(""));
    class_3878f151eb4759f89a07796ff631bdf9.def("internal_ldf", method_pointer_011b6a4c67bd51979faad3d70b2accb1, "");
    class_3878f151eb4759f89a07796ff631bdf9.def("internal_pdf", method_pointer_bdb51633f466504bbda767676bc595b0, "");
    class_3878f151eb4759f89a07796ff631bdf9.def("index", method_pointer_516ce2ebf00e53a5b015217458043636, "");
    class_3878f151eb4759f89a07796ff631bdf9.def("get_distribution", method_pointer_0095a88066135c6c963b6a524c18cad4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3878f151eb4759f89a07796ff631bdf9.def("set_distribution", method_pointer_82f72d1f9cd65a6881253ef5e6c217db, "");
    class_3878f151eb4759f89a07796ff631bdf9.def("parent", method_pointer_a57d14e2013e52109b587e456949b355, "");

    if(autowig::Held< class ::statiskit::HierarchicalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::HierarchicalDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::HierarchicalDistribution, struct ::statiskit::CategoricalUnivariateDistribution > >::Type >();
    }

}