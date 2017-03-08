#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile >(struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{

}


void wrapper_1cfe57e82ce352e4b80ae7c44a661b01()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_e9796ac42a435c168a533839e194b507)(double const &) const = &::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::cdf;
    double  (::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_162248b0562f5645bca481dc25b460de)(double const &) const = &::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::quantile;
    double  (::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_a341fbdacb555bacbd267e75729eaf5c)() const = &::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_mean;
    double  (::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_ac414d0cf7d8565bb702d9727ab5a5ff)() const = &::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_variance;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_d685074ea2d35cd49dbf18d4ee85a9eb)() const = &::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::copy;
    boost::python::class_< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, autowig::Held< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, boost::python::bases< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > class_1cfe57e82ce352e4b80ae7c44a661b01("_QuantitativeUnivariateFrequencyDistribution_1cfe57e82ce352e4b80ae7c44a661b01", "", boost::python::no_init);
    class_1cfe57e82ce352e4b80ae7c44a661b01.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & >(""));
    class_1cfe57e82ce352e4b80ae7c44a661b01.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_1cfe57e82ce352e4b80ae7c44a661b01.def("cdf", method_pointer_e9796ac42a435c168a533839e194b507, "");
    class_1cfe57e82ce352e4b80ae7c44a661b01.def("quantile", method_pointer_162248b0562f5645bca481dc25b460de, "");
    class_1cfe57e82ce352e4b80ae7c44a661b01.def("get_mean", method_pointer_a341fbdacb555bacbd267e75729eaf5c, "");
    class_1cfe57e82ce352e4b80ae7c44a661b01.def("get_variance", method_pointer_ac414d0cf7d8565bb702d9727ab5a5ff, "");
    class_1cfe57e82ce352e4b80ae7c44a661b01.def("copy", method_pointer_d685074ea2d35cd49dbf18d4ee85a9eb, "");

    if(autowig::Held< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}