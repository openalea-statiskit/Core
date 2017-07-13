#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_adb101528f1256ccaa63a94998938b36()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::SplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_2cb72dcc14ea5e9b99047f3a84c84889)() const = &::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_adb101528f1256ccaa63a94998938b36("_ActiveEstimation_adb101528f1256ccaa63a94998938b36", "", boost::python::no_init);
    class_adb101528f1256ccaa63a94998938b36.def(boost::python::init<  >(""));
    class_adb101528f1256ccaa63a94998938b36.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_adb101528f1256ccaa63a94998938b36.def(boost::python::init< class ::statiskit::SplittingDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_adb101528f1256ccaa63a94998938b36.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >(""));
    class_adb101528f1256ccaa63a94998938b36.def("get_data", method_pointer_2cb72dcc14ea5e9b99047f3a84c84889, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type >();
    }

}