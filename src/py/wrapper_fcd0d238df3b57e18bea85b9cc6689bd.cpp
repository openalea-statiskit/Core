#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const volatile * get_pointer<class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const volatile >(class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fcd0d238df3b57e18bea85b9cc6689bd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::IndependentMultivariateDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_b2836a34e74652b482eb08632a16a095)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::get_nb_components;
    unsigned int  (::statiskit::IndependentMultivariateDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_841524f77088536bb8c745d114026401)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::get_nb_parameters;
    double  (::statiskit::IndependentMultivariateDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_2d888499a06b5978bd78815239bd67ea)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::probability;
    struct ::statiskit::CategoricalUnivariateDistribution * (::statiskit::IndependentMultivariateDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_818ca7d1d08e500f9fdad5a4ce19bd32)(::statiskit::Index const &) const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::get_marginal;
    void  (::statiskit::IndependentMultivariateDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_d4c0923a09515e3895dd52996a8d0331)(::statiskit::Index const &, struct ::statiskit::CategoricalUnivariateDistribution const &) = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::set_marginal;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::IndependentMultivariateDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_0f52f774d40458bbaf46eea3436f4137)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::simulate;
    boost::python::class_< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistribution > > > class_fcd0d238df3b57e18bea85b9cc6689bd("_IndependentMultivariateDistribution_fcd0d238df3b57e18bea85b9cc6689bd", "", boost::python::no_init);
    class_fcd0d238df3b57e18bea85b9cc6689bd.def(boost::python::init< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const & >(""));
    class_fcd0d238df3b57e18bea85b9cc6689bd.def("get_nb_components", method_pointer_b2836a34e74652b482eb08632a16a095, "");
    class_fcd0d238df3b57e18bea85b9cc6689bd.def("get_nb_parameters", method_pointer_841524f77088536bb8c745d114026401, "");
    class_fcd0d238df3b57e18bea85b9cc6689bd.def("probability", method_pointer_2d888499a06b5978bd78815239bd67ea, "");
    class_fcd0d238df3b57e18bea85b9cc6689bd.def("get_marginal", method_pointer_818ca7d1d08e500f9fdad5a4ce19bd32, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcd0d238df3b57e18bea85b9cc6689bd.def("set_marginal", method_pointer_d4c0923a09515e3895dd52996a8d0331, "");
    class_fcd0d238df3b57e18bea85b9cc6689bd.def("simulate", method_pointer_0f52f774d40458bbaf46eea3436f4137, "");

    if(autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistribution > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > > >();
    }

}