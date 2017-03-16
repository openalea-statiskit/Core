#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_811eb8572ed85179a4f2772ee38ad536()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::DiscreteMultivariateDistribution const * (::statiskit::OptimizationEstimation< ::statiskit::DiscreteMultivariateDistribution *, ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_f8af3ca6f5b15a2dac48cf7202cc1151)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_step;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_811eb8572ed85179a4f2772ee38ad536("_OptimizationEstimation_811eb8572ed85179a4f2772ee38ad536", "", boost::python::no_init);
    class_811eb8572ed85179a4f2772ee38ad536.def(boost::python::init<  >(""));
    class_811eb8572ed85179a4f2772ee38ad536.def(boost::python::init< struct ::statiskit::DiscreteMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_811eb8572ed85179a4f2772ee38ad536.def(boost::python::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >(""));
    class_811eb8572ed85179a4f2772ee38ad536.def("get_step", method_pointer_f8af3ca6f5b15a2dac48cf7202cc1151, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteMultivariateDistribution *, struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > >();
    }

}