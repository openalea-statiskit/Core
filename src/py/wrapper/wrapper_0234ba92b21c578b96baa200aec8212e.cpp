#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
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
    struct ::statiskit::DiscreteUnivariateDistribution * (::statiskit::IndependentMultivariateDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_bdcb5a9ad0465aa987be488c2b85a4cd)(::statiskit::Index const &) const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::get_marginal;
    void  (::statiskit::IndependentMultivariateDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_882a7f35ce0b5018a908fcc435001c71)(::statiskit::Index const &, struct ::statiskit::DiscreteUnivariateDistribution const &) = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::set_marginal;
    boost::python::class_< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistribution > > > class_0234ba92b21c578b96baa200aec8212e("_IndependentMultivariateDistribution_0234ba92b21c578b96baa200aec8212e", "", boost::python::no_init);
    class_0234ba92b21c578b96baa200aec8212e.def(boost::python::init< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const & >(""));
    class_0234ba92b21c578b96baa200aec8212e.def("get_marginal", method_pointer_bdcb5a9ad0465aa987be488c2b85a4cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0234ba92b21c578b96baa200aec8212e.def("set_marginal", method_pointer_882a7f35ce0b5018a908fcc435001c71, "");

    if(autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistribution > >::Type >();
    }

}