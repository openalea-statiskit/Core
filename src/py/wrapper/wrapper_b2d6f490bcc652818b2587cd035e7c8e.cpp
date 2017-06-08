#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultinomialSplittingDistributionEstimation const volatile * get_pointer<class ::statiskit::MultinomialSplittingDistributionEstimation const volatile >(class ::statiskit::MultinomialSplittingDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b2d6f490bcc652818b2587cd035e7c8e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation const * (::statiskit::MultinomialSplittingDistributionEstimation::*method_pointer_b3feef411d735d899c56c550e52d46ce)() const = &::statiskit::MultinomialSplittingDistributionEstimation::get_sum;
    boost::python::class_< class ::statiskit::MultinomialSplittingDistributionEstimation, autowig::Held< class ::statiskit::MultinomialSplittingDistributionEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_b2d6f490bcc652818b2587cd035e7c8e("MultinomialSplittingDistributionEstimation", "", boost::python::no_init);
    class_b2d6f490bcc652818b2587cd035e7c8e.def(boost::python::init<  >(""));
    class_b2d6f490bcc652818b2587cd035e7c8e.def(boost::python::init< class ::statiskit::MultinomialSplittingDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_b2d6f490bcc652818b2587cd035e7c8e.def(boost::python::init< class ::statiskit::MultinomialSplittingDistributionEstimation const & >(""));
    class_b2d6f490bcc652818b2587cd035e7c8e.def("get_sum", method_pointer_b3feef411d735d899c56c550e52d46ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::MultinomialSplittingDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MultinomialSplittingDistributionEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type >();
    }

}