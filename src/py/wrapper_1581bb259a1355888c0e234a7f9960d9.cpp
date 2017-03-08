#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::BinomialDistributionMMEstimation::Estimator const volatile * get_pointer<class ::statiskit::BinomialDistributionMMEstimation::Estimator const volatile >(class ::statiskit::BinomialDistributionMMEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{

}


void wrapper_1581bb259a1355888c0e234a7f9960d9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dbc8a0461eeb579aa69a16cbe03a3913 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._binomial_distribution_mm_estimation");
    boost::python::object module_dbc8a0461eeb579aa69a16cbe03a3913(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dbc8a0461eeb579aa69a16cbe03a3913.c_str()))));
    boost::python::scope().attr("_binomial_distribution_mm_estimation") = module_dbc8a0461eeb579aa69a16cbe03a3913;
    boost::python::scope scope_dbc8a0461eeb579aa69a16cbe03a3913 = module_dbc8a0461eeb579aa69a16cbe03a3913;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_69e6ca58b0f25323934c5aaf40ba6d78)(struct ::statiskit::UnivariateData const &, bool const &) const = &::statiskit::BinomialDistributionMMEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_519b4daa399d573db56191c6f25aa53c)() const = &::statiskit::BinomialDistributionMMEstimation::Estimator::copy;
    struct ::statiskit::MeanEstimation::Estimator * (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_c5464024919d54d0a0c56a08a8521486)() = &::statiskit::BinomialDistributionMMEstimation::Estimator::get_mean;
    void  (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_4195abd1e74c5d71bd61d88306dec0cf)(struct ::statiskit::MeanEstimation::Estimator const &) = &::statiskit::BinomialDistributionMMEstimation::Estimator::set_mean;
    struct ::statiskit::VarianceEstimation::Estimator * (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_3bfd0366febb5aa79e799877d79c34f9)() = &::statiskit::BinomialDistributionMMEstimation::Estimator::get_variance;
    void  (::statiskit::BinomialDistributionMMEstimation::Estimator::*method_pointer_c3ec2b0fe4f75c7d862c9226c59054a0)(struct ::statiskit::VarianceEstimation::Estimator const &) = &::statiskit::BinomialDistributionMMEstimation::Estimator::set_variance;
    boost::python::class_< class ::statiskit::BinomialDistributionMMEstimation::Estimator, autowig::Held< class ::statiskit::BinomialDistributionMMEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_1581bb259a1355888c0e234a7f9960d9("Estimator", "", boost::python::no_init);
    class_1581bb259a1355888c0e234a7f9960d9.def(boost::python::init<  >(""));
    class_1581bb259a1355888c0e234a7f9960d9.def(boost::python::init< class ::statiskit::BinomialDistributionMMEstimation::Estimator const & >(""));
    class_1581bb259a1355888c0e234a7f9960d9.def("__call__", method_pointer_69e6ca58b0f25323934c5aaf40ba6d78, "");
    class_1581bb259a1355888c0e234a7f9960d9.def("copy", method_pointer_519b4daa399d573db56191c6f25aa53c, "");
    class_1581bb259a1355888c0e234a7f9960d9.def("get_mean", method_pointer_c5464024919d54d0a0c56a08a8521486, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1581bb259a1355888c0e234a7f9960d9.def("set_mean", method_pointer_4195abd1e74c5d71bd61d88306dec0cf, "");
    class_1581bb259a1355888c0e234a7f9960d9.def("get_variance", method_pointer_3bfd0366febb5aa79e799877d79c34f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1581bb259a1355888c0e234a7f9960d9.def("set_variance", method_pointer_c3ec2b0fe4f75c7d862c9226c59054a0, "");

    if(autowig::Held< class ::statiskit::BinomialDistributionMMEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BinomialDistributionMMEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
    }

}