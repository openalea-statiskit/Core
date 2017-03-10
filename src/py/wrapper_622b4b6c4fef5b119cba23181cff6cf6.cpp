#include "_core.h"



namespace autowig
{
    class Wrap_622b4b6c4fef5b119cba23181cff6cf6 : public ::statiskit::ContinuousMultivariateDistribution, public boost::python::wrapper< struct ::statiskit::ContinuousMultivariateDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
                        
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > >  get_sample_space() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > ::element_type* result = this->get_override("get_sample_space")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_622b4b6c4fef5b119cba23181cff6cf6 const volatile * get_pointer<autowig::Wrap_622b4b6c4fef5b119cba23181cff6cf6 const volatile >(autowig::Wrap_622b4b6c4fef5b119cba23181cff6cf6 const volatile *c) { return c; }
    template <> struct ::statiskit::ContinuousMultivariateDistribution const volatile * get_pointer<struct ::statiskit::ContinuousMultivariateDistribution const volatile >(struct ::statiskit::ContinuousMultivariateDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_622b4b6c4fef5b119cba23181cff6cf6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_622b4b6c4fef5b119cba23181cff6cf6, autowig::Held< autowig::Wrap_622b4b6c4fef5b119cba23181cff6cf6 >::Type, boost::python::bases< struct ::statiskit::MultivariateDistribution >, boost::noncopyable > class_622b4b6c4fef5b119cba23181cff6cf6("ContinuousMultivariateDistribution", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_622b4b6c4fef5b119cba23181cff6cf6 >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::Type, autowig::Held< struct ::statiskit::MultivariateDistribution >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::ContinuousMultivariateDistribution, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::Type, struct ::statiskit::ContinuousMultivariateDistribution > > >();
    }

}