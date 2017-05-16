#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ee3148dbf8425c8f8a5c5a280fb4586c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::DiscreteUnivariateMixtureDistribution const * (::statiskit::OptimizationEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution *, ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_f0f5078b51cb54cca1fd0eeb7d7c893d)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_iteration;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_ee3148dbf8425c8f8a5c5a280fb4586c("_OptimizationEstimation_ee3148dbf8425c8f8a5c5a280fb4586c", "", boost::python::no_init);
    class_ee3148dbf8425c8f8a5c5a280fb4586c.def(boost::python::init<  >(""));
    class_ee3148dbf8425c8f8a5c5a280fb4586c.def(boost::python::init< struct ::statiskit::DiscreteUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_ee3148dbf8425c8f8a5c5a280fb4586c.def(boost::python::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_ee3148dbf8425c8f8a5c5a280fb4586c.def("get_iteration", method_pointer_f0f5078b51cb54cca1fd0eeb7d7c893d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > >();
    }

}