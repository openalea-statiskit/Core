#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::UnivariateHistogramDistribution const volatile * get_pointer<class ::statiskit::UnivariateHistogramDistribution const volatile >(class ::statiskit::UnivariateHistogramDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9ca9917e667b52ea9eb2ec4f17e230b5()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::UnivariateHistogramDistribution::*method_pointer_98a0b080781959fd8c256381b272d32a)() const = &::statiskit::UnivariateHistogramDistribution::get_nb_parameters;
    class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & (::statiskit::UnivariateHistogramDistribution::*method_pointer_0adabf56e3155b9b81c68457b36cddd8)() const = &::statiskit::UnivariateHistogramDistribution::get_bins;
    class ::std::vector< double, class ::std::allocator< double > > const & (::statiskit::UnivariateHistogramDistribution::*method_pointer_0b6a988d603c5ef98804c95ebb1d6552)() const = &::statiskit::UnivariateHistogramDistribution::get_densities;
    double  (::statiskit::UnivariateHistogramDistribution::*method_pointer_dd380c8e123c55228e42dfc4a5473fc7)(double const &) const = &::statiskit::UnivariateHistogramDistribution::ldf;
    double  (::statiskit::UnivariateHistogramDistribution::*method_pointer_a519793e9c8052259e03981762c5237f)(double const &) const = &::statiskit::UnivariateHistogramDistribution::pdf;
    double  (::statiskit::UnivariateHistogramDistribution::*method_pointer_74a67fc0fdef522eb74d0ca8ff0dcc18)(double const &) const = &::statiskit::UnivariateHistogramDistribution::cdf;
    double  (::statiskit::UnivariateHistogramDistribution::*method_pointer_2aba8ac7f7885f7da6055cabd9657b6d)(double const &) const = &::statiskit::UnivariateHistogramDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateHistogramDistribution::*method_pointer_e8f17738bc2159d293d6880591b6e2f8)() const = &::statiskit::UnivariateHistogramDistribution::simulate;
    double  (::statiskit::UnivariateHistogramDistribution::*method_pointer_6a0968deaa9e532db63520cb04aec06f)() const = &::statiskit::UnivariateHistogramDistribution::get_mean;
    double  (::statiskit::UnivariateHistogramDistribution::*method_pointer_b8c07d90af4353d5bc2e685f93f94b1d)() const = &::statiskit::UnivariateHistogramDistribution::get_variance;
    boost::python::class_< class ::statiskit::UnivariateHistogramDistribution, autowig::Held< class ::statiskit::UnivariateHistogramDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_9ca9917e667b52ea9eb2ec4f17e230b5("UnivariateHistogramDistribution", "", boost::python::no_init);
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::std::vector< double, class ::std::allocator< double > > const & >(""));
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def(boost::python::init< class ::statiskit::UnivariateHistogramDistribution const & >(""));
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("get_nb_parameters", method_pointer_98a0b080781959fd8c256381b272d32a, "");
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("get_bins", method_pointer_0adabf56e3155b9b81c68457b36cddd8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("get_densities", method_pointer_0b6a988d603c5ef98804c95ebb1d6552, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("ldf", method_pointer_dd380c8e123c55228e42dfc4a5473fc7, "");
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("pdf", method_pointer_a519793e9c8052259e03981762c5237f, "");
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("cdf", method_pointer_74a67fc0fdef522eb74d0ca8ff0dcc18, "");
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("quantile", method_pointer_2aba8ac7f7885f7da6055cabd9657b6d, "");
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("simulate", method_pointer_e8f17738bc2159d293d6880591b6e2f8, "");
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("get_mean", method_pointer_6a0968deaa9e532db63520cb04aec06f, "");
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("get_variance", method_pointer_b8c07d90af4353d5bc2e685f93f94b1d, "");

    if(autowig::Held< class ::statiskit::UnivariateHistogramDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UnivariateHistogramDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::UnivariateHistogramDistribution >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::UnivariateHistogramDistribution, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::UnivariateHistogramDistribution >::Type, class ::statiskit::UnivariateHistogramDistribution > > >();
    }

}