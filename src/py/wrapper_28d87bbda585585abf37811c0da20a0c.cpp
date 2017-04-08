#include "_core.h"



namespace autowig
{
    class Wrap_28d87bbda585585abf37811c0da20a0c : public ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > >
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
    template <> autowig::Wrap_28d87bbda585585abf37811c0da20a0c const volatile * get_pointer<autowig::Wrap_28d87bbda585585abf37811c0da20a0c const volatile >(autowig::Wrap_28d87bbda585585abf37811c0da20a0c const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_28d87bbda585585abf37811c0da20a0c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  (::statiskit::PolymorphicCopy< ::statiskit::MultivariateDistribution, ::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_5012284625c15e348d439ceea36f251d)() const = &::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution >::copy;
    boost::python::class_< autowig::Wrap_28d87bbda585585abf37811c0da20a0c, autowig::Held< autowig::Wrap_28d87bbda585585abf37811c0da20a0c >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateDistribution >, boost::noncopyable > class_28d87bbda585585abf37811c0da20a0c("_PolymorphicCopy_28d87bbda585585abf37811c0da20a0c", "", boost::python::no_init);
    class_28d87bbda585585abf37811c0da20a0c.def("copy", method_pointer_5012284625c15e348d439ceea36f251d, "");

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_28d87bbda585585abf37811c0da20a0c >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > > > >();
    }

}