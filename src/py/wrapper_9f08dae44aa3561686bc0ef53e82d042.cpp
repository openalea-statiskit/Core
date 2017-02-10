#include "_core.h"


namespace autowig
{
}


void wrapper_9f08dae44aa3561686bc0ef53e82d042()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  (::statiskit::NominalDistribution::*method_pointer_5be4761828f35d50868209871c1fe4df)() const = &::statiskit::NominalDistribution::get_sample_space;
    double  (::statiskit::NominalDistribution::*method_pointer_7b2d7a5a7a795777927d135672a19501)(int const &) const = &::statiskit::NominalDistribution::pdf;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::NominalDistribution::*method_pointer_cc2776ff09f35d7e89210ec51fc9be6d)() const = &::statiskit::NominalDistribution::copy;
    boost::python::class_< struct ::statiskit::NominalDistribution, autowig::Held< struct ::statiskit::NominalDistribution >::Type, boost::python::bases< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > > class_9f08dae44aa3561686bc0ef53e82d042("NominalDistribution", "This class NominalDistribution represents the distribution of a random\nnominal variable $ S$. The support is a finite non-ordered set of\ncategories (string) $ :raw-latex:`\\mathcal{S}` $ and we have $\n:raw-latex:`\\sum`\\_{s:raw-latex:`\\in `:raw-latex:`\\mathcal{S}`} P(S=s) =\n1$.\n\n", boost::python::no_init);
    class_9f08dae44aa3561686bc0ef53e82d042.def(boost::python::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >(""));
    class_9f08dae44aa3561686bc0ef53e82d042.def(boost::python::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_9f08dae44aa3561686bc0ef53e82d042.def("get_sample_space", method_pointer_5be4761828f35d50868209871c1fe4df, "");
    class_9f08dae44aa3561686bc0ef53e82d042.def("pdf", method_pointer_7b2d7a5a7a795777927d135672a19501, "");
    class_9f08dae44aa3561686bc0ef53e82d042.def("copy", method_pointer_cc2776ff09f35d7e89210ec51fc9be6d, "");

    if(autowig::Held< struct ::statiskit::NominalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NominalDistribution >::Type, autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type >();
    }

}