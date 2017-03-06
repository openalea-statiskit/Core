#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile >(class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_0dde50813a6555f8aff9d4b5fa01376d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::std::size_t  (::statiskit::IndependentMultivariateDistributionEstimation< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_692c46a2447051f5826c7f961ff6cc08)() const = &::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::size;
    struct ::statiskit::UnivariateDistributionEstimation const * (::statiskit::IndependentMultivariateDistributionEstimation< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_2a79255d07fb5af2a5642420cfe71083)(::std::size_t const &) const = &::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_estimation;
    boost::python::class_< class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > > class_0dde50813a6555f8aff9d4b5fa01376d("_IndependentMultivariateDistributionEstimation_0dde50813a6555f8aff9d4b5fa01376d", "", boost::python::no_init);
    class_0dde50813a6555f8aff9d4b5fa01376d.def(boost::python::init< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >(""));
    class_0dde50813a6555f8aff9d4b5fa01376d.def("__len__", method_pointer_692c46a2447051f5826c7f961ff6cc08, "");
    class_0dde50813a6555f8aff9d4b5fa01376d.def("get_estimation", method_pointer_2a79255d07fb5af2a5642420cfe71083, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type >();
    }

}