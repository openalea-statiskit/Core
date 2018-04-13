#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::CategoricalUnivariateMixtureDistribution const volatile * get_pointer<struct ::statiskit::CategoricalUnivariateMixtureDistribution const volatile >(struct ::statiskit::CategoricalUnivariateMixtureDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cd2f32a2cb285d6c9d814fca476c78af()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::CategoricalUnivariateMixtureDistribution::*method_pointer_98fd70ce8a1a598598b6b8f283f85578)(int const &) const = &::statiskit::CategoricalUnivariateMixtureDistribution::pdf;
    class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  (::statiskit::CategoricalUnivariateMixtureDistribution::*method_pointer_f6dca0da2b5a5c8ead8b44405e9b116c)() const = &::statiskit::CategoricalUnivariateMixtureDistribution::get_values;
    boost::python::class_< struct ::statiskit::CategoricalUnivariateMixtureDistribution, autowig::Held< struct ::statiskit::CategoricalUnivariateMixtureDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > > > class_cd2f32a2cb285d6c9d814fca476c78af("CategoricalUnivariateMixtureDistribution", "", boost::python::no_init);
    class_cd2f32a2cb285d6c9d814fca476c78af.def(boost::python::init< class ::std::vector< struct ::statiskit::CategoricalUnivariateDistribution *, class ::std::allocator< struct ::statiskit::CategoricalUnivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_cd2f32a2cb285d6c9d814fca476c78af.def(boost::python::init< struct ::statiskit::CategoricalUnivariateMixtureDistribution const & >(""));
    class_cd2f32a2cb285d6c9d814fca476c78af.def("pdf", method_pointer_98fd70ce8a1a598598b6b8f283f85578, "");
    class_cd2f32a2cb285d6c9d814fca476c78af.def("get_values", method_pointer_f6dca0da2b5a5c8ead8b44405e9b116c, "");

    if(autowig::Held< struct ::statiskit::CategoricalUnivariateMixtureDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalUnivariateMixtureDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > >::Type >();
    }

}