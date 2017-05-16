#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > const volatile * get_pointer<class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > const volatile >(class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_09231b7789ec5a69ad76d8618a8abb42()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::UnivariateDistribution * (::statiskit::IndependentMultivariateDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_0bc7c80b6dd75d4b91a14c6f2d03eb23)(::statiskit::Index const &) const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >::get_marginal;
    void  (::statiskit::IndependentMultivariateDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_a83f7acc7f9651a49ee108595138cf88)(::statiskit::Index const &, struct ::statiskit::UnivariateDistribution const &) = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >::set_marginal;
    boost::python::class_< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > > > class_09231b7789ec5a69ad76d8618a8abb42("_IndependentMultivariateDistribution_09231b7789ec5a69ad76d8618a8abb42", "", boost::python::no_init);
    class_09231b7789ec5a69ad76d8618a8abb42.def(boost::python::init< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > const & >(""));
    class_09231b7789ec5a69ad76d8618a8abb42.def("get_marginal", method_pointer_0bc7c80b6dd75d4b91a14c6f2d03eb23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_09231b7789ec5a69ad76d8618a8abb42.def("set_marginal", method_pointer_a83f7acc7f9651a49ee108595138cf88, "");

    if(autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistribution > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > >::Type, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > > > >();
    }

}