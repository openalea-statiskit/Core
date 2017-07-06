#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6714db1d278d5fec95ea3760f54b9fa0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_7ea7e4e79f67522ba4962d142e52341a)() const = &::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_6714db1d278d5fec95ea3760f54b9fa0("_ActiveEstimation_6714db1d278d5fec95ea3760f54b9fa0", "", boost::python::no_init);
    class_6714db1d278d5fec95ea3760f54b9fa0.def(boost::python::init<  >(""));
    class_6714db1d278d5fec95ea3760f54b9fa0.def(boost::python::init< class ::statiskit::UnivariateConditionalData const * >(""));
    class_6714db1d278d5fec95ea3760f54b9fa0.def(boost::python::init< struct ::statiskit::DiscreteUnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_6714db1d278d5fec95ea3760f54b9fa0.def(boost::python::init< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >(""));
    class_6714db1d278d5fec95ea3760f54b9fa0.def("get_data", method_pointer_7ea7e4e79f67522ba4962d142e52341a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
    }

}