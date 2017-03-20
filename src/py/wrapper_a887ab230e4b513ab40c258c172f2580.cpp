#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const volatile * get_pointer<struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const volatile >(struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a887ab230e4b513ab40c258c172f2580()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    void  (::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_64a8c142bab859be8e749acac3bc931e)(::statiskit::Index const &, struct ::statiskit::CategoricalMultivariateDistribution const &) = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::set_observation;
    ::statiskit::Index  (::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_8cb3e73324c05646b1017533cfca8ee2)() const = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::get_nb_components;
    double  (::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_2e591826cf475a9fb12167d502c50aae)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::probability;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_34bb76f0bd975854852bfeecdd54d220)() const = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::simulate;
    class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  (::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >::*method_pointer_caf32c20d8ef5debae0c84d7f1d471a0)() const = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >::copy;
    boost::python::class_< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, boost::python::bases< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > > class_a887ab230e4b513ab40c258c172f2580("_MultivariateMixtureDistribution_a887ab230e4b513ab40c258c172f2580", "", boost::python::no_init);
    class_a887ab230e4b513ab40c258c172f2580.def(boost::python::init< class ::std::vector< struct ::statiskit::CategoricalMultivariateDistribution *, class ::std::allocator< struct ::statiskit::CategoricalMultivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_a887ab230e4b513ab40c258c172f2580.def(boost::python::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const & >(""));
    class_a887ab230e4b513ab40c258c172f2580.def("set_observation", method_pointer_64a8c142bab859be8e749acac3bc931e, "");
    class_a887ab230e4b513ab40c258c172f2580.def("get_nb_components", method_pointer_8cb3e73324c05646b1017533cfca8ee2, "");
    class_a887ab230e4b513ab40c258c172f2580.def("probability", method_pointer_2e591826cf475a9fb12167d502c50aae, "");
    class_a887ab230e4b513ab40c258c172f2580.def("simulate", method_pointer_34bb76f0bd975854852bfeecdd54d220, "");
    class_a887ab230e4b513ab40c258c172f2580.def("copy", method_pointer_caf32c20d8ef5debae0c84d7f1d471a0, "");

    if(autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > > >();
    }

}