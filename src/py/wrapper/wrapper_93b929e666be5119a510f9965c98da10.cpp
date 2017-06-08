#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultinomialSplittingDistributionEstimation::Estimator const volatile * get_pointer<class ::statiskit::MultinomialSplittingDistributionEstimation::Estimator const volatile >(class ::statiskit::MultinomialSplittingDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_93b929e666be5119a510f9965c98da10()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_b2d6f490bcc652818b2587cd035e7c8e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._multinomial_splitting_distribution_estimation");
    boost::python::object module_b2d6f490bcc652818b2587cd035e7c8e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b2d6f490bcc652818b2587cd035e7c8e.c_str()))));
    boost::python::scope().attr("_multinomial_splitting_distribution_estimation") = module_b2d6f490bcc652818b2587cd035e7c8e;
    boost::python::scope scope_b2d6f490bcc652818b2587cd035e7c8e = module_b2d6f490bcc652818b2587cd035e7c8e;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const * (::statiskit::MultinomialSplittingDistributionEstimation::Estimator::*method_pointer_6052b1bc08d45d3484907d25dbd5b050)() const = &::statiskit::MultinomialSplittingDistributionEstimation::Estimator::get_sum;
    void  (::statiskit::MultinomialSplittingDistributionEstimation::Estimator::*method_pointer_610a0768289b588b886bfa8c743a4a21)(struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &) = &::statiskit::MultinomialSplittingDistributionEstimation::Estimator::set_sum;
    boost::python::class_< class ::statiskit::MultinomialSplittingDistributionEstimation::Estimator, autowig::Held< class ::statiskit::MultinomialSplittingDistributionEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > > class_93b929e666be5119a510f9965c98da10("Estimator", "", boost::python::no_init);
    class_93b929e666be5119a510f9965c98da10.def(boost::python::init<  >(""));
    class_93b929e666be5119a510f9965c98da10.def(boost::python::init< class ::statiskit::MultinomialSplittingDistributionEstimation::Estimator const & >(""));
    class_93b929e666be5119a510f9965c98da10.def("get_sum", method_pointer_6052b1bc08d45d3484907d25dbd5b050, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_93b929e666be5119a510f9965c98da10.def("set_sum", method_pointer_610a0768289b588b886bfa8c743a4a21, "");

    if(autowig::Held< class ::statiskit::MultinomialSplittingDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MultinomialSplittingDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type >();
    }

}