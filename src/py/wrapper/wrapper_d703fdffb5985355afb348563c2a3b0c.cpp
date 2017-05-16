#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d703fdffb5985355afb348563c2a3b0c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const * (::statiskit::OptimizationEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_d10155e4d412517796a8867c0835d222)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_iteration;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_d703fdffb5985355afb348563c2a3b0c("_OptimizationEstimation_d703fdffb5985355afb348563c2a3b0c", "", boost::python::no_init);
    class_d703fdffb5985355afb348563c2a3b0c.def(boost::python::init<  >(""));
    class_d703fdffb5985355afb348563c2a3b0c.def(boost::python::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >(""));
    class_d703fdffb5985355afb348563c2a3b0c.def(boost::python::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >(""));
    class_d703fdffb5985355afb348563c2a3b0c.def("get_iteration", method_pointer_d10155e4d412517796a8867c0835d222, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > >();
    }

}