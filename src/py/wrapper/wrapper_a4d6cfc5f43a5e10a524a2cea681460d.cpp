#include "_core.h"



namespace autowig
{
    class Wrap_a4d6cfc5f43a5e10a524a2cea681460d : public ::statiskit::CategoricalMultivariateConditionalDistribution, public boost::python::wrapper< struct ::statiskit::CategoricalMultivariateConditionalDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > (result);
            }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
            virtual struct ::statiskit::MultivariateSampleSpace const * get_explanatory_space() const
            { return this->get_override("get_explanatory_space")(); }
                        
            virtual struct ::statiskit::MultivariateDistribution const * operator()(struct ::statiskit::MultivariateEvent const & param_0) const
            { return this->get_override("operator()")(param_0); }
                        
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_a4d6cfc5f43a5e10a524a2cea681460d const volatile * get_pointer<autowig::Wrap_a4d6cfc5f43a5e10a524a2cea681460d const volatile >(autowig::Wrap_a4d6cfc5f43a5e10a524a2cea681460d const volatile *c) { return c; }
    template <> struct ::statiskit::CategoricalMultivariateConditionalDistribution const volatile * get_pointer<struct ::statiskit::CategoricalMultivariateConditionalDistribution const volatile >(struct ::statiskit::CategoricalMultivariateConditionalDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a4d6cfc5f43a5e10a524a2cea681460d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_a4d6cfc5f43a5e10a524a2cea681460d, autowig::Held< autowig::Wrap_a4d6cfc5f43a5e10a524a2cea681460d >::Type, boost::python::bases< struct ::statiskit::MultivariateConditionalDistribution >, boost::noncopyable > class_a4d6cfc5f43a5e10a524a2cea681460d("CategoricalMultivariateConditionalDistribution", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_a4d6cfc5f43a5e10a524a2cea681460d >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistribution >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistribution >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistribution >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistribution >::Type >();
    }

}