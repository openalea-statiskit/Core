#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_490a7e94b19952aeaafbd6e6b0779fca()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateDistribution const * (::statiskit::OptimizationEstimation< ::statiskit::MultivariateDistribution *, ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_81661baaabc356e4b008fa7dcc2104aa)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::get_step;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > > > class_490a7e94b19952aeaafbd6e6b0779fca("_OptimizationEstimation_490a7e94b19952aeaafbd6e6b0779fca", "", boost::python::no_init);
    class_490a7e94b19952aeaafbd6e6b0779fca.def(boost::python::init<  >(""));
    class_490a7e94b19952aeaafbd6e6b0779fca.def(boost::python::init< struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_490a7e94b19952aeaafbd6e6b0779fca.def(boost::python::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const & >(""));
    class_490a7e94b19952aeaafbd6e6b0779fca.def("get_step", method_pointer_81661baaabc356e4b008fa7dcc2104aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > > > >();
    }

}