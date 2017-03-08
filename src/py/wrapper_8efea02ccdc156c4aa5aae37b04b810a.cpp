#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OrdinalDistribution const volatile * get_pointer<class ::statiskit::OrdinalDistribution const volatile >(class ::statiskit::OrdinalDistribution const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{

}


void wrapper_8efea02ccdc156c4aa5aae37b04b810a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  (::statiskit::OrdinalDistribution::*method_pointer_1e8a13f491f55a9ab5c735d5e2db82b2)() const = &::statiskit::OrdinalDistribution::get_sample_space;
    double  (::statiskit::OrdinalDistribution::*method_pointer_1febf156dc75517cbc2a17e81047eb74)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::OrdinalDistribution::pdf;
    double  (::statiskit::OrdinalDistribution::*method_pointer_0eee2c56f57953309cda5d579988216b)(int const &) const = &::statiskit::OrdinalDistribution::pdf;
    double  (::statiskit::OrdinalDistribution::*method_pointer_a54dd636c7c55391bfd812f5d7245a30)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::OrdinalDistribution::cdf;
    class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >  (::statiskit::OrdinalDistribution::*method_pointer_2f3c2f4a0585500185979243bdc61b07)(double const &) const = &::statiskit::OrdinalDistribution::quantile;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const & (::statiskit::OrdinalDistribution::*method_pointer_62cba730d5e3581397b8ef655cd24ed2)() const = &::statiskit::OrdinalDistribution::get_rank;
    void  (::statiskit::OrdinalDistribution::*method_pointer_db526d174fc9507eb1d122f82bc9993d)(class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const &) = &::statiskit::OrdinalDistribution::set_rank;
    class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  (::statiskit::OrdinalDistribution::*method_pointer_b8013b81a24259fea33820ec55ea508a)() const = &::statiskit::OrdinalDistribution::get_ordered;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::OrdinalDistribution::*method_pointer_aad89d42b36956988f8249423ec8cab1)() const = &::statiskit::OrdinalDistribution::copy;
    boost::python::class_< class ::statiskit::OrdinalDistribution, autowig::Held< class ::statiskit::OrdinalDistribution >::Type, boost::python::bases< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > > class_8efea02ccdc156c4aa5aae37b04b810a("OrdinalDistribution", "This class OrdinalDistribution represents the distribution of a random\nordinal variable $ S$. The support is a finite ordered set of categories\n(string) $ :raw-latex:`\\mathcal{S}`\n=:raw-latex:`\\left`:raw-latex:`\\lbrace `s\\_1, :raw-latex:`\\ldots`, s\\_J\n:raw-latex:`\\right`:raw-latex:`\\rbrace `$ and we have $\n:raw-latex:`\\sum`\\_{j=1}^J P(S=s\\_j) = 1 $.\n\n", boost::python::no_init);
    class_8efea02ccdc156c4aa5aae37b04b810a.def(boost::python::init< class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >(""));
    class_8efea02ccdc156c4aa5aae37b04b810a.def(boost::python::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const &, class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_8efea02ccdc156c4aa5aae37b04b810a.def(boost::python::init< class ::statiskit::OrdinalDistribution const & >(""));
    class_8efea02ccdc156c4aa5aae37b04b810a.def("get_sample_space", method_pointer_1e8a13f491f55a9ab5c735d5e2db82b2, "");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("pdf", method_pointer_1febf156dc75517cbc2a17e81047eb74, "");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("pdf", method_pointer_0eee2c56f57953309cda5d579988216b, "");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("cdf", method_pointer_a54dd636c7c55391bfd812f5d7245a30, "Compute the cumulative probability of a category\n\n-  :raw-latex:`\\details `Let $s\\_j\n   :raw-latex:`\\in `:raw-latex:`\\mathcal{S}` $ denote the category\n-  ::\n\n           $$\n\n-  ::\n\n               P\\left(S \\leq s_j\\right)  =   \\sum_{i \\leq j} P\\left(S = s_i\\right).\n\n-  ::\n\n           $$\n\n-  :raw-latex:`\\param `value The considered category.\n\n:Parameter:\n    `value` (:cpp:any:`::std::basic_string<` char, struct\n::std::char\\_traits< char >, class ::std::allocator< char > >) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("quantile", method_pointer_2f3c2f4a0585500185979243bdc61b07, "Compute the quantile of a probability $ p :raw-latex:`\\in `(0,1) $. This\nis the category $ s\\_j :raw-latex:`\\in `:raw-latex:`\\mathcal{S}` $ such\nthat $ P(S :raw-latex:`\\leq `s\\_j) :raw-latex:`\\leq `p < P(N\n:raw-latex:`\\leq `s\\_{j+1}) $. \\* :raw-latex:`\\param `p The considered\nprobability p.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`::std::basic_string<` char, struct\n    ::std::char\\_traits< char >, class ::std::allocator< char > >\n\n");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("get_rank", method_pointer_62cba730d5e3581397b8ef655cd24ed2, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the rank of each category in lexicographic order.\n\n:Return Type:\n    :cpp:any:`::std::vector<` unsigned long int, class\n    ::std::allocator< unsigned long int > >\n\n");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("set_rank", method_pointer_db526d174fc9507eb1d122f82bc9993d, "Set the rank of each category in lexicographic order.\n\n:Parameter:\n    `rank` (:cpp:any:`::std::vector<` unsigned long int, class\n::std::allocator< unsigned long int > >) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("get_ordered", method_pointer_b8013b81a24259fea33820ec55ea508a, "Get the vector of ordered categories.\n\n:Return Type:\n    :cpp:any:`::std::vector<` class ::std::basic\\_string<\n    char, struct ::std::char\\_traits< char >, class ::std::allocator< char >\n    >, class ::std::allocator< class ::std::basic\\_string< char, struct\n    ::std::char\\_traits< char >, class ::std::allocator< char > > > >\n\n");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("copy", method_pointer_aad89d42b36956988f8249423ec8cab1, "");

    if(autowig::Held< class ::statiskit::OrdinalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OrdinalDistribution >::Type, autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type >();
    }

}