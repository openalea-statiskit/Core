#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > const volatile >(class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_985cf21680915944bc189269c6e7eaf8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::*method_pointer_d3ccedb55b8d5b6ca53ec7de0d9a0edc)() const = &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::*method_pointer_943d6f125002594588773db745c20a0e)(double const &) = &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::*method_pointer_93507ddbedc4537da09b64ff5c506d66)() const = &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::*method_pointer_a5ad8543bef75abe82c8068ed14680b0)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::*method_pointer_f6284a65c2bb5871951583a96f2f4150)() const = &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::*method_pointer_28f5d6e7fa1552b2a937cffd4bed119d)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::set_maxits;
    boost::python::class_< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > > class_985cf21680915944bc189269c6e7eaf8("_Optimization_985cf21680915944bc189269c6e7eaf8", "", boost::python::no_init);
    class_985cf21680915944bc189269c6e7eaf8.def(boost::python::init<  >(""));
    class_985cf21680915944bc189269c6e7eaf8.def(boost::python::init< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > const & >(""));
    class_985cf21680915944bc189269c6e7eaf8.def("get_mindiff", method_pointer_d3ccedb55b8d5b6ca53ec7de0d9a0edc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_985cf21680915944bc189269c6e7eaf8.def("set_mindiff", method_pointer_943d6f125002594588773db745c20a0e, "");
    class_985cf21680915944bc189269c6e7eaf8.def("get_minits", method_pointer_93507ddbedc4537da09b64ff5c506d66, "");
    class_985cf21680915944bc189269c6e7eaf8.def("set_minits", method_pointer_a5ad8543bef75abe82c8068ed14680b0, "");
    class_985cf21680915944bc189269c6e7eaf8.def("get_maxits", method_pointer_f6284a65c2bb5871951583a96f2f4150, "");
    class_985cf21680915944bc189269c6e7eaf8.def("set_maxits", method_pointer_28f5d6e7fa1552b2a937cffd4bed119d, "");

    if(autowig::Held< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::Type >();
    }

}