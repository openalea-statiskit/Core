#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6375bd4b368450a684e289f7598736a6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_7f5e0d6c276b59ea87e915ac4e3eafdf)() const = &::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_6375bd4b368450a684e289f7598736a6("_ActiveEstimation_6375bd4b368450a684e289f7598736a6", "", boost::python::no_init);
    class_6375bd4b368450a684e289f7598736a6.def(boost::python::init<  >(""));
    class_6375bd4b368450a684e289f7598736a6.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_6375bd4b368450a684e289f7598736a6.def(boost::python::init< struct ::statiskit::DiscreteMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_6375bd4b368450a684e289f7598736a6.def(boost::python::init< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >(""));
    class_6375bd4b368450a684e289f7598736a6.def("get_data", method_pointer_7f5e0d6c276b59ea87e915ac4e3eafdf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type >();
    }

}