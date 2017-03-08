#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile >(class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{

}


void wrapper_625725874d5f5fde949f34e8f010537c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::std::size_t  (::statiskit::IndependentMultivariateDistributionEstimation< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_ff9f69d151e65240adb96407244c3825)() const = &::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::size;
    struct ::statiskit::UnivariateDistributionEstimation const * (::statiskit::IndependentMultivariateDistributionEstimation< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_e32d482ccf985339b3c64509335d0dff)(::std::size_t const &) const = &::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_estimation;
    boost::python::class_< class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_625725874d5f5fde949f34e8f010537c("_IndependentMultivariateDistributionEstimation_625725874d5f5fde949f34e8f010537c", "", boost::python::no_init);
    class_625725874d5f5fde949f34e8f010537c.def(boost::python::init< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >(""));
    class_625725874d5f5fde949f34e8f010537c.def("__len__", method_pointer_ff9f69d151e65240adb96407244c3825, "");
    class_625725874d5f5fde949f34e8f010537c.def("get_estimation", method_pointer_e32d482ccf985339b3c64509335d0dff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type >();
    }

}