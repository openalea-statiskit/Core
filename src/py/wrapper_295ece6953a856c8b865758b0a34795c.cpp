#include "_core.h"



namespace autowig
{
    class Wrap_295ece6953a856c8b865758b0a34795c : public ::statiskit::CategoricalUnivariateConditionalDistribution, public boost::python::wrapper< struct ::statiskit::CategoricalUnivariateConditionalDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > (result);
            }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
            virtual struct ::statiskit::MultivariateSampleSpace const * get_explanatory_space() const
            { return this->get_override("get_explanatory_space")(); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  get_response_space() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("get_response_space")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
                        
            virtual struct ::statiskit::UnivariateDistribution const * operator()(struct ::statiskit::MultivariateEvent const & param_0) 
            { return this->get_override("operator()")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_295ece6953a856c8b865758b0a34795c const volatile * get_pointer<autowig::Wrap_295ece6953a856c8b865758b0a34795c const volatile >(autowig::Wrap_295ece6953a856c8b865758b0a34795c const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_295ece6953a856c8b865758b0a34795c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_295ece6953a856c8b865758b0a34795c, autowig::Held< autowig::Wrap_295ece6953a856c8b865758b0a34795c >::Type, boost::python::bases< struct ::statiskit::UnivariateConditionalDistribution >, boost::noncopyable > class_295ece6953a856c8b865758b0a34795c("CategoricalUnivariateConditionalDistribution", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistribution >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::CategoricalUnivariateConditionalDistribution, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistribution > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_295ece6953a856c8b865758b0a34795c >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type >();
    }

}