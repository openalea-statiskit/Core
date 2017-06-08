#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ea65f72f6e415ac79babe4873fd858fe()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::IndependentMultivariateDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_34784c9d09e55bc999798c517dc2238b)() const = &::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_ea65f72f6e415ac79babe4873fd858fe("_ActiveEstimation_ea65f72f6e415ac79babe4873fd858fe", "", boost::python::no_init);
    class_ea65f72f6e415ac79babe4873fd858fe.def(boost::python::init<  >(""));
    class_ea65f72f6e415ac79babe4873fd858fe.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_ea65f72f6e415ac79babe4873fd858fe.def(boost::python::init< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >(""));
    class_ea65f72f6e415ac79babe4873fd858fe.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >(""));
    class_ea65f72f6e415ac79babe4873fd858fe.def("get_data", method_pointer_34784c9d09e55bc999798c517dc2238b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type >();
    }

}