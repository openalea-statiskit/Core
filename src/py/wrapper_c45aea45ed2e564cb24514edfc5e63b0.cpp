#include "_core.h"



namespace autowig
{
    class Wrap_c45aea45ed2e564cb24514edfc5e63b0 : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >
    {
        public:
            
            virtual int  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_c45aea45ed2e564cb24514edfc5e63b0 const volatile * get_pointer<autowig::Wrap_c45aea45ed2e564cb24514edfc5e63b0 const volatile >(autowig::Wrap_c45aea45ed2e564cb24514edfc5e63b0 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c45aea45ed2e564cb24514edfc5e63b0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::PolymorphicCopy< ::statiskit::UnivariateDistribution, ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::QuantitativeUnivariateMixtureDistribution< ::statiskit::DiscreteUnivariateDistribution > >::*method_pointer_0f3edda777a95b70aa669fd92c52dbad)() const = &::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::copy;
    boost::python::class_< autowig::Wrap_c45aea45ed2e564cb24514edfc5e63b0, autowig::Held< autowig::Wrap_c45aea45ed2e564cb24514edfc5e63b0 >::Type, boost::python::bases< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >, boost::noncopyable > class_c45aea45ed2e564cb24514edfc5e63b0("_PolymorphicCopy_c45aea45ed2e564cb24514edfc5e63b0", "", boost::python::no_init);
    class_c45aea45ed2e564cb24514edfc5e63b0.def("copy", method_pointer_0f3edda777a95b70aa669fd92c52dbad, "");

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c45aea45ed2e564cb24514edfc5e63b0 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::Type, autowig::Held< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > > >();
    }

}