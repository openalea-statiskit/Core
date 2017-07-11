#include "_core.h"



namespace autowig
{
    class Wrap_098b1688f9d6517bac4fe76bfdbe24bd : public ::statiskit::ContinuousMultivariateConditionalDistribution, public boost::python::wrapper< struct ::statiskit::ContinuousMultivariateConditionalDistribution >
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
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_098b1688f9d6517bac4fe76bfdbe24bd const volatile * get_pointer<autowig::Wrap_098b1688f9d6517bac4fe76bfdbe24bd const volatile >(autowig::Wrap_098b1688f9d6517bac4fe76bfdbe24bd const volatile *c) { return c; }
    template <> struct ::statiskit::ContinuousMultivariateConditionalDistribution const volatile * get_pointer<struct ::statiskit::ContinuousMultivariateConditionalDistribution const volatile >(struct ::statiskit::ContinuousMultivariateConditionalDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_098b1688f9d6517bac4fe76bfdbe24bd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_098b1688f9d6517bac4fe76bfdbe24bd, autowig::Held< autowig::Wrap_098b1688f9d6517bac4fe76bfdbe24bd >::Type, boost::python::bases< struct ::statiskit::MultivariateConditionalDistribution >, boost::noncopyable > class_098b1688f9d6517bac4fe76bfdbe24bd("ContinuousMultivariateConditionalDistribution", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_098b1688f9d6517bac4fe76bfdbe24bd >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistribution >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistribution >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistribution >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistribution >::Type >();
    }

}