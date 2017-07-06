#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3201f3b07b0254eb8ef2d0c42eff2557()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::*method_pointer_0aaf13ac5d0754b2bbb6101c6a0847ba)() const = &::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > > > class_3201f3b07b0254eb8ef2d0c42eff2557("_ActiveEstimation_3201f3b07b0254eb8ef2d0c42eff2557", "", boost::python::no_init);
    class_3201f3b07b0254eb8ef2d0c42eff2557.def(boost::python::init<  >(""));
    class_3201f3b07b0254eb8ef2d0c42eff2557.def(boost::python::init< class ::statiskit::UnivariateConditionalData const * >(""));
    class_3201f3b07b0254eb8ef2d0c42eff2557.def(boost::python::init< struct ::statiskit::ContinuousUnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_3201f3b07b0254eb8ef2d0c42eff2557.def(boost::python::init< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > const & >(""));
    class_3201f3b07b0254eb8ef2d0c42eff2557.def("get_data", method_pointer_0aaf13ac5d0754b2bbb6101c6a0847ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > >::Type >();
    }

}