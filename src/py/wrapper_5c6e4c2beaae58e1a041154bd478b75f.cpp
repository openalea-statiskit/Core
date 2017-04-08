#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const volatile * get_pointer<struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const volatile >(struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5c6e4c2beaae58e1a041154bd478b75f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    void  (::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_3ba1082aea2d56f099c9c4b49f240168)(::statiskit::Index const &, struct ::statiskit::MultivariateDistribution const &) = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >::set_observation;
    ::statiskit::Index  (::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_10833352c8ab5325bb6cec49e2068235)() const = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >::get_nb_components;
    double  (::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_2553fde367ff5786a75ad3a3996132ca)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >::probability;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateMixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_faa9cbb726995864a8ae309d6a42914d)() const = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >::simulate;
    boost::python::class_< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > > > > class_5c6e4c2beaae58e1a041154bd478b75f("_MultivariateMixtureDistribution_5c6e4c2beaae58e1a041154bd478b75f", "", boost::python::no_init);
    class_5c6e4c2beaae58e1a041154bd478b75f.def(boost::python::init< class ::std::vector< struct ::statiskit::MultivariateDistribution *, class ::std::allocator< struct ::statiskit::MultivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_5c6e4c2beaae58e1a041154bd478b75f.def(boost::python::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const & >(""));
    class_5c6e4c2beaae58e1a041154bd478b75f.def("set_observation", method_pointer_3ba1082aea2d56f099c9c4b49f240168, "");
    class_5c6e4c2beaae58e1a041154bd478b75f.def("get_nb_components", method_pointer_10833352c8ab5325bb6cec49e2068235, "");
    class_5c6e4c2beaae58e1a041154bd478b75f.def("probability", method_pointer_2553fde367ff5786a75ad3a3996132ca, "");
    class_5c6e4c2beaae58e1a041154bd478b75f.def("simulate", method_pointer_faa9cbb726995864a8ae309d6a42914d, "");

    if(autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > >::Type, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > > > >();
    }

}