#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile >(struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_839b61ecb09d54819eb38cf69dde50bb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_7adc3267060c507b931a1af0a119cb38)(int const &) const = &::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::cdf;
    int  (::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_1093518802d85deabdf4939910bf59ae)(double const &) const = &::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::quantile;
    double  (::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_7e114cb52dbb5514bd53aa272f0e2cfc)() const = &::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_mean;
    double  (::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_f12310c417c35307933a8573ffe734fa)() const = &::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_variance;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_8a0bf6680d8b5659a07ad7277b4203c7)() const = &::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::copy;
    boost::python::class_< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, autowig::Held< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, boost::python::bases< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > class_839b61ecb09d54819eb38cf69dde50bb("_QuantitativeUnivariateFrequencyDistribution_839b61ecb09d54819eb38cf69dde50bb", "", boost::python::no_init);
    class_839b61ecb09d54819eb38cf69dde50bb.def(boost::python::init< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const & >(""));
    class_839b61ecb09d54819eb38cf69dde50bb.def(boost::python::init< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_839b61ecb09d54819eb38cf69dde50bb.def("cdf", method_pointer_7adc3267060c507b931a1af0a119cb38, "");
    class_839b61ecb09d54819eb38cf69dde50bb.def("quantile", method_pointer_1093518802d85deabdf4939910bf59ae, "");
    class_839b61ecb09d54819eb38cf69dde50bb.def("get_mean", method_pointer_7e114cb52dbb5514bd53aa272f0e2cfc, "");
    class_839b61ecb09d54819eb38cf69dde50bb.def("get_variance", method_pointer_f12310c417c35307933a8573ffe734fa, "");
    class_839b61ecb09d54819eb38cf69dde50bb.def("copy", method_pointer_8a0bf6680d8b5659a07ad7277b4203c7, "");

    if(autowig::Held< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
    }

}