#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile >(class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_54f73c2e27295a3bb19fa8c15190b6ea()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::statiskit::ContinuousMultivariateDistribution *, ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_7e277fba953f51dbb1f6bd23b54ead6d)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::size;
    boost::python::class_< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > > class_54f73c2e27295a3bb19fa8c15190b6ea("_OptimizationEstimationImpl_54f73c2e27295a3bb19fa8c15190b6ea", "", boost::python::no_init);
    class_54f73c2e27295a3bb19fa8c15190b6ea.def(boost::python::init<  >(""));
    class_54f73c2e27295a3bb19fa8c15190b6ea.def(boost::python::init< struct ::statiskit::ContinuousMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_54f73c2e27295a3bb19fa8c15190b6ea.def(boost::python::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >(""));
    class_54f73c2e27295a3bb19fa8c15190b6ea.def("__len__", method_pointer_7e277fba953f51dbb1f6bd23b54ead6d, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousMultivariateDistribution *, struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > > >();
    }

}