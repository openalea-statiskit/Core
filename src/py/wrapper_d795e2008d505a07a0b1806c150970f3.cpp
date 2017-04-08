#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const volatile * get_pointer<class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const volatile >(class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d795e2008d505a07a0b1806c150970f3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_17bd1ccca4da505f86afc3b9f24311f5)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_nb_components;
    unsigned int  (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_1cbdec6cbdcd5370816774be4afe1acd)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_nb_parameters;
    double  (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_1e83894dd86f5229aa0e332a3aa0086b)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::probability;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_f87e0a8b468559d3bb9054c375e1416c)(::statiskit::Index const &) const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_marginal;
    void  (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_8eb661b3b4e258598c4fcc057f5d9802)(::statiskit::Index const &, struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::set_marginal;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_14a2b9f4f53f557d9b88b7797d598c16)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::simulate;
    boost::python::class_< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > > > class_d795e2008d505a07a0b1806c150970f3("_IndependentMultivariateDistribution_d795e2008d505a07a0b1806c150970f3", "", boost::python::no_init);
    class_d795e2008d505a07a0b1806c150970f3.def(boost::python::init< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const & >(""));
    class_d795e2008d505a07a0b1806c150970f3.def("get_nb_components", method_pointer_17bd1ccca4da505f86afc3b9f24311f5, "");
    class_d795e2008d505a07a0b1806c150970f3.def("get_nb_parameters", method_pointer_1cbdec6cbdcd5370816774be4afe1acd, "");
    class_d795e2008d505a07a0b1806c150970f3.def("probability", method_pointer_1e83894dd86f5229aa0e332a3aa0086b, "");
    class_d795e2008d505a07a0b1806c150970f3.def("get_marginal", method_pointer_f87e0a8b468559d3bb9054c375e1416c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_d795e2008d505a07a0b1806c150970f3.def("set_marginal", method_pointer_8eb661b3b4e258598c4fcc057f5d9802, "");
    class_d795e2008d505a07a0b1806c150970f3.def("simulate", method_pointer_14a2b9f4f53f557d9b88b7797d598c16, "");

    if(autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > > > >();
    }

}