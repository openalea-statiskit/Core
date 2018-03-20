#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6d99edae55df515bbdeb7c5c0e15917e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateConditionalDistribution const * (::statiskit::LazyEstimation< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::*method_pointer_4ad6f252034f52a1850d3f71c0e93033)() const = &::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > > class_6d99edae55df515bbdeb7c5c0e15917e("_LazyEstimation_6d99edae55df515bbdeb7c5c0e15917e", "", boost::python::no_init);
    class_6d99edae55df515bbdeb7c5c0e15917e.def(boost::python::init<  >(""));
    class_6d99edae55df515bbdeb7c5c0e15917e.def(boost::python::init< struct ::statiskit::DiscreteMultivariateConditionalDistribution const * >(""));
    class_6d99edae55df515bbdeb7c5c0e15917e.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > const & >(""));
    class_6d99edae55df515bbdeb7c5c0e15917e.def("get_estimated", method_pointer_4ad6f252034f52a1850d3f71c0e93033, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Type >();
    }

}