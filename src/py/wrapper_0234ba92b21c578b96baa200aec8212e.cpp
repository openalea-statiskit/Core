#include "_core.h"



namespace autowig
{
    class Wrap_0234ba92b21c578b96baa200aec8212e : public ::statiskit::IndependentMultivariateDistribution< ::statiskit::DiscreteMultivariateDistribution >, public boost::python::wrapper< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_0234ba92b21c578b96baa200aec8212e const volatile * get_pointer<autowig::Wrap_0234ba92b21c578b96baa200aec8212e const volatile >(autowig::Wrap_0234ba92b21c578b96baa200aec8212e const volatile *c) { return c; }
    template <> class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const volatile * get_pointer<class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const volatile >(class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0234ba92b21c578b96baa200aec8212e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::IndependentMultivariateDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_c694468b3b40531782a32459e496f9d8)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::get_nb_components;
    unsigned int  (::statiskit::IndependentMultivariateDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_6e18f0200648560782ba84f407f8fcee)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::get_nb_parameters;
    double  (::statiskit::IndependentMultivariateDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_c00d45410e5e5a7d8208c0ab3d1015b6)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::probability;
    struct ::statiskit::DiscreteUnivariateDistribution * (::statiskit::IndependentMultivariateDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_bdcb5a9ad0465aa987be488c2b85a4cd)(::statiskit::Index const &) const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::get_marginal;
    void  (::statiskit::IndependentMultivariateDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_882a7f35ce0b5018a908fcc435001c71)(::statiskit::Index const &, struct ::statiskit::DiscreteUnivariateDistribution const &) = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::set_marginal;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::IndependentMultivariateDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_d76b22ea314256b5851ebf485514b774)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::simulate;
    boost::python::class_< autowig::Wrap_0234ba92b21c578b96baa200aec8212e, autowig::Held< autowig::Wrap_0234ba92b21c578b96baa200aec8212e >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistribution >, boost::noncopyable > class_0234ba92b21c578b96baa200aec8212e("_IndependentMultivariateDistribution_0234ba92b21c578b96baa200aec8212e", "", boost::python::no_init);
    class_0234ba92b21c578b96baa200aec8212e.def("get_nb_components", method_pointer_c694468b3b40531782a32459e496f9d8, "");
    class_0234ba92b21c578b96baa200aec8212e.def("get_nb_parameters", method_pointer_6e18f0200648560782ba84f407f8fcee, "");
    class_0234ba92b21c578b96baa200aec8212e.def("probability", method_pointer_c00d45410e5e5a7d8208c0ab3d1015b6, "");
    class_0234ba92b21c578b96baa200aec8212e.def("get_marginal", method_pointer_bdcb5a9ad0465aa987be488c2b85a4cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0234ba92b21c578b96baa200aec8212e.def("set_marginal", method_pointer_882a7f35ce0b5018a908fcc435001c71, "");
    class_0234ba92b21c578b96baa200aec8212e.def("simulate", method_pointer_d76b22ea314256b5851ebf485514b774, "");

    if(autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_0234ba92b21c578b96baa200aec8212e >::Type, autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistribution >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > > > >();
    }

}