#include "_core.h"



namespace autowig
{
    class Wrap_cf0415be3d965595a8486e9a8659c1a9 : public ::statiskit::CategoricalUnivariateDistribution, public boost::python::wrapper< struct ::statiskit::CategoricalUnivariateDistribution >
    {
        public:
            
            virtual class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & get_values() const
            {
                 ::std::set< class ::std::basic_string< char, ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >* result = this->get_override("get_values")();
                 return *result;
            }                        
            virtual double  pdf(int const & param_0) const
            { return this->get_override("pdf")(param_0); }
            virtual double  pdf(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_0) const
            { return this->get_override("pdf")(param_0); }
            virtual double  ldf(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_0) const
            { return this->get_override("ldf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  get_sample_space() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("get_sample_space")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_cf0415be3d965595a8486e9a8659c1a9 const volatile * get_pointer<autowig::Wrap_cf0415be3d965595a8486e9a8659c1a9 const volatile >(autowig::Wrap_cf0415be3d965595a8486e9a8659c1a9 const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cf0415be3d965595a8486e9a8659c1a9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::CategoricalUnivariateDistribution::*method_pointer_7126fc85886253648b85734c2202d73e)(struct ::statiskit::UnivariateEvent const *, bool const &) const = &::statiskit::CategoricalUnivariateDistribution::probability;
    double  (::statiskit::CategoricalUnivariateDistribution::*method_pointer_bf87506bdef85834a040bd514141c40f)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::CategoricalUnivariateDistribution::ldf;
    double  (::statiskit::CategoricalUnivariateDistribution::*method_pointer_d5f6ca2affb75fd78b00fcc370d678ff)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::CategoricalUnivariateDistribution::pdf;
    double  (::statiskit::CategoricalUnivariateDistribution::*method_pointer_ffbd4b9cbee7579795e0ce6676ff252f)(int const &) const = &::statiskit::CategoricalUnivariateDistribution::pdf;
    class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & (::statiskit::CategoricalUnivariateDistribution::*method_pointer_792a96c4bc565f2aa41ebb4e2c268a40)() const = &::statiskit::CategoricalUnivariateDistribution::get_values;
    boost::python::class_< autowig::Wrap_cf0415be3d965595a8486e9a8659c1a9, autowig::Held< autowig::Wrap_cf0415be3d965595a8486e9a8659c1a9 >::Type, boost::python::bases< struct ::statiskit::UnivariateDistribution >, boost::noncopyable > class_cf0415be3d965595a8486e9a8659c1a9("CategoricalUnivariateDistribution", "This virtual class CategoricalUnivariateDistribution represents the\ndistribution of a random categorical variable $ X $. The support is a\nfinite set of categories (string) $ :raw-latex:`\\mathcal{X}` $ and we\nhave $ :raw-latex:`\\sum`\\_{s:raw-latex:`\\in `:raw-latex:`\\mathcal{S}`}\nP(S=s) = 1$.\n\n", boost::python::no_init);
    class_cf0415be3d965595a8486e9a8659c1a9.def("probability", method_pointer_7126fc85886253648b85734c2202d73e, "Compute the probability of a set of values.\n\nLet $A :raw-latex:`\\in `:raw-latex:`\\mathcal{S}` $ denote the set of\nvalues. The probability function get $ P:raw-latex:`\\left`(S\n:raw-latex:`\\in `A:raw-latex:`\\right`) $ or $\n:raw-latex:`\\ln `P:raw-latex:`\\left`(S\n:raw-latex:`\\in `A:raw-latex:`\\right`) $ according to the boolean\nparameter logarithm.\n\n:Parameters:\n  - `` (:py:class:`.statiskit.UnivariateEvent`) - Undocumented\n  - `logarithm` (:cpp:any:`bool`) - The boolean.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_cf0415be3d965595a8486e9a8659c1a9.def("ldf", boost::python::pure_virtual(method_pointer_bf87506bdef85834a040bd514141c40f), "Compute the log-probability of a value.\n\nLet $c :raw-latex:`\\in `:raw-latex:`\\mathcal{S}` $ denote the value, $\n:raw-latex:`\\ln `P:raw-latex:`\\left`(S = s:raw-latex:`\\right`) $.\n\n:Parameter:\n    `value` (:cpp:any:`::std::basic_string<` char, struct\n::std::char\\_traits< char >, class ::std::allocator< char > >) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_cf0415be3d965595a8486e9a8659c1a9.def("pdf", boost::python::pure_virtual(method_pointer_d5f6ca2affb75fd78b00fcc370d678ff), "Compute the probability of a value\n\nLet $c :raw-latex:`\\in `:raw-latex:`\\mathcal{S}` $ denote the value, $\nP:raw-latex:`\\left`(S = s:raw-latex:`\\right`) $.\n\n:Parameter:\n    `value` (:cpp:any:`::std::basic_string<` char, struct\n::std::char\\_traits< char >, class ::std::allocator< char > >) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_cf0415be3d965595a8486e9a8659c1a9.def("pdf", boost::python::pure_virtual(method_pointer_ffbd4b9cbee7579795e0ce6676ff252f), "Compute the probability of a value\n\nLet $c :raw-latex:`\\in `:raw-latex:`\\mathcal{S}` $ denote the value, $\nP:raw-latex:`\\left`(S = s:raw-latex:`\\right`) $.\n\n:Parameter:\n    `position` (:cpp:any:`int`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_cf0415be3d965595a8486e9a8659c1a9.def("get_values", boost::python::pure_virtual(method_pointer_792a96c4bc565f2aa41ebb4e2c268a40), boost::python::return_value_policy< boost::python::return_by_value >(), "Get the set of categories (string) $ :raw-latex:`\\mathcal{S}` $.\n\n:Return Type:\n    :cpp:any:`::std::set<` class ::std::basic\\_string< char,\n    struct ::std::char\\_traits< char >, class ::std::allocator< char > >,\n    struct ::std::less< class ::std::basic\\_string< char, struct\n    ::std::char\\_traits< char >, class ::std::allocator< char > > >, class\n    ::std::allocator< class ::std::basic\\_string< char, struct\n    ::std::char\\_traits< char >, class ::std::allocator< char > > > >\n\n");

    if(autowig::Held< struct ::statiskit::CategoricalUnivariateDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalUnivariateDistribution >::Type, autowig::Held< struct ::statiskit::UnivariateDistribution >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::CategoricalUnivariateDistribution >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::CategoricalUnivariateDistribution, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::CategoricalUnivariateDistribution >::Type, struct ::statiskit::CategoricalUnivariateDistribution > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_cf0415be3d965595a8486e9a8659c1a9 >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateDistribution >::Type >();
    }

}