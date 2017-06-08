#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_134023695d4459f2931df9cb87b57330()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_30cb362e5d2c5275878ee2af9d27b927)() const = &::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > > class_134023695d4459f2931df9cb87b57330("_ActiveEstimation_134023695d4459f2931df9cb87b57330", "", boost::python::no_init);
    class_134023695d4459f2931df9cb87b57330.def(boost::python::init<  >(""));
    class_134023695d4459f2931df9cb87b57330.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_134023695d4459f2931df9cb87b57330.def(boost::python::init< struct ::statiskit::ContinuousMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_134023695d4459f2931df9cb87b57330.def(boost::python::init< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >(""));
    class_134023695d4459f2931df9cb87b57330.def("get_data", method_pointer_30cb362e5d2c5275878ee2af9d27b927, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type >();
    }

}