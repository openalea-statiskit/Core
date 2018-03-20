#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile >(struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_96486d682f0851438822ccbdd2c8c3eb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_0ec596bf98a6521c9bf30c96dc0ff201 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__univariate_frequency_distribution_estimation_0ec596bf98a6521c9bf30c96dc0ff201");
    boost::python::object module_0ec596bf98a6521c9bf30c96dc0ff201(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_0ec596bf98a6521c9bf30c96dc0ff201.c_str()))));
    boost::python::scope().attr("__univariate_frequency_distribution_estimation_0ec596bf98a6521c9bf30c96dc0ff201") = module_0ec596bf98a6521c9bf30c96dc0ff201;
    boost::python::scope scope_0ec596bf98a6521c9bf30c96dc0ff201 = module_0ec596bf98a6521c9bf30c96dc0ff201;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::UnivariateFrequencyDistributionEstimation< ::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_a332effd5a545549a565802aefeba8bb)(struct ::statiskit::UnivariateData const &, bool const &) const = &::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  (::statiskit::UnivariateFrequencyDistributionEstimation< ::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_0a904a04df8f544b91cb3020be59ec66)() const = &::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::copy;
    boost::python::class_< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::Held< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_96486d682f0851438822ccbdd2c8c3eb("Estimator", "", boost::python::no_init);
    class_96486d682f0851438822ccbdd2c8c3eb.def(boost::python::init<  >(""));
    class_96486d682f0851438822ccbdd2c8c3eb.def(boost::python::init< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const & >(""));
    class_96486d682f0851438822ccbdd2c8c3eb.def("__call__", method_pointer_a332effd5a545549a565802aefeba8bb, "");
    class_96486d682f0851438822ccbdd2c8c3eb.def("copy", method_pointer_0a904a04df8f544b91cb3020be59ec66, "");

    if(autowig::Held< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
    }

}