#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator const volatile * get_pointer<struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator const volatile >(struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_227ebcabe93051fdb49f2bd6c608d881()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_e5e03034302f5c6ca9d068a205353d2a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._negative_binomial_distribution_ml_estimation");
    boost::python::object module_e5e03034302f5c6ca9d068a205353d2a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_e5e03034302f5c6ca9d068a205353d2a.c_str()))));
    boost::python::scope().attr("_negative_binomial_distribution_ml_estimation") = module_e5e03034302f5c6ca9d068a205353d2a;
    boost::python::scope scope_e5e03034302f5c6ca9d068a205353d2a = module_e5e03034302f5c6ca9d068a205353d2a;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::NegativeBinomialDistributionMLEstimation::Estimator::*method_pointer_ba9271ea1eb857249980f2ba801ce542)(struct ::statiskit::UnivariateData const &, bool const &) const = &::statiskit::NegativeBinomialDistributionMLEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  (::statiskit::NegativeBinomialDistributionMLEstimation::Estimator::*method_pointer_1e4562d15c50584fa620a7ca038184a7)() const = &::statiskit::NegativeBinomialDistributionMLEstimation::Estimator::copy;
    boost::python::class_< struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator, autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > class_227ebcabe93051fdb49f2bd6c608d881("Estimator", "", boost::python::no_init);
    class_227ebcabe93051fdb49f2bd6c608d881.def("__call__", method_pointer_ba9271ea1eb857249980f2ba801ce542, "");
    class_227ebcabe93051fdb49f2bd6c608d881.def("copy", method_pointer_1e4562d15c50584fa620a7ca038184a7, "");

    if(autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::Type, struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator > > >();
    }

}