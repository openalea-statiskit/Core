#include "_core.h"



namespace autowig
{
    class Wrap_31aa0a631312549a9cf4cb8740b55a7f : public ::statiskit::DiscreteMultivariateDistribution, public boost::python::wrapper< struct ::statiskit::DiscreteMultivariateDistribution >
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
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_31aa0a631312549a9cf4cb8740b55a7f const volatile * get_pointer<autowig::Wrap_31aa0a631312549a9cf4cb8740b55a7f const volatile >(autowig::Wrap_31aa0a631312549a9cf4cb8740b55a7f const volatile *c) { return c; }
    template <> struct ::statiskit::DiscreteMultivariateDistribution const volatile * get_pointer<struct ::statiskit::DiscreteMultivariateDistribution const volatile >(struct ::statiskit::DiscreteMultivariateDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_31aa0a631312549a9cf4cb8740b55a7f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_31aa0a631312549a9cf4cb8740b55a7f, autowig::Held< autowig::Wrap_31aa0a631312549a9cf4cb8740b55a7f >::Type, boost::python::bases< struct ::statiskit::MultivariateDistribution >, boost::noncopyable > class_31aa0a631312549a9cf4cb8740b55a7f("DiscreteMultivariateDistribution", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteMultivariateDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_31aa0a631312549a9cf4cb8740b55a7f >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistribution >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::DiscreteMultivariateDistribution >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteMultivariateDistribution >::Type, autowig::Held< struct ::statiskit::MultivariateDistribution >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::DiscreteMultivariateDistribution >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::DiscreteMultivariateDistribution, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::DiscreteMultivariateDistribution >::Type, struct ::statiskit::DiscreteMultivariateDistribution > > >();
    }

}