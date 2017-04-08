#include "_core.h"



namespace autowig
{
    class Wrap_77641aea88b25302b2b64811d8849865 : public ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > >
    {
        public:
            
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
    template <> autowig::Wrap_77641aea88b25302b2b64811d8849865 const volatile * get_pointer<autowig::Wrap_77641aea88b25302b2b64811d8849865 const volatile >(autowig::Wrap_77641aea88b25302b2b64811d8849865 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_77641aea88b25302b2b64811d8849865()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  (::statiskit::PolymorphicCopy< ::statiskit::MultivariateDistribution, ::statiskit::IndependentMultivariateDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistribution >::*method_pointer_ef31b656ae52593682e8f380b990ed70)() const = &::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution >::copy;
    boost::python::class_< autowig::Wrap_77641aea88b25302b2b64811d8849865, autowig::Held< autowig::Wrap_77641aea88b25302b2b64811d8849865 >::Type, boost::python::bases< struct ::statiskit::MultivariateDistribution >, boost::noncopyable > class_77641aea88b25302b2b64811d8849865("_PolymorphicCopy_77641aea88b25302b2b64811d8849865", "", boost::python::no_init);
    class_77641aea88b25302b2b64811d8849865.def("copy", method_pointer_ef31b656ae52593682e8f380b990ed70, "");

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_77641aea88b25302b2b64811d8849865 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::MultivariateDistribution >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > > > >();
    }

}