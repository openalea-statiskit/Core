#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const volatile * get_pointer<struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const volatile >(struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5750371755a95c10b9259748c7b5e21b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    void  (::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_56cf4fa2bb8a53e5b72cce1ebc8a3395)(::statiskit::Index const &, struct ::statiskit::DiscreteMultivariateDistribution const &) = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::set_observation;
    ::statiskit::Index  (::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_77321a1b7c955a75ad0fb046e560f8b1)() const = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::get_nb_components;
    double  (::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_8c5856b6d2c550f2b6a80ae60446f1b0)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::probability;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_af1a5f87127e5144b009135768f87918)() const = &::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >::simulate;
    boost::python::class_< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > > > > class_5750371755a95c10b9259748c7b5e21b("_MultivariateMixtureDistribution_5750371755a95c10b9259748c7b5e21b", "", boost::python::no_init);
    class_5750371755a95c10b9259748c7b5e21b.def(boost::python::init< class ::std::vector< struct ::statiskit::DiscreteMultivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteMultivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_5750371755a95c10b9259748c7b5e21b.def(boost::python::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const & >(""));
    class_5750371755a95c10b9259748c7b5e21b.def("set_observation", method_pointer_56cf4fa2bb8a53e5b72cce1ebc8a3395, "");
    class_5750371755a95c10b9259748c7b5e21b.def("get_nb_components", method_pointer_77321a1b7c955a75ad0fb046e560f8b1, "");
    class_5750371755a95c10b9259748c7b5e21b.def("probability", method_pointer_8c5856b6d2c550f2b6a80ae60446f1b0, "");
    class_5750371755a95c10b9259748c7b5e21b.def("simulate", method_pointer_af1a5f87127e5144b009135768f87918, "");

    if(autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > > >::Type >();
    }

}