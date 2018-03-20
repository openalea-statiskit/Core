#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a2e03e1beb3652d19910e253216cbbdd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MixtureSingularDistribution const * (::statiskit::OptimizationEstimation< ::statiskit::MixtureSingularDistribution *, ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_014ed38b48b5567f97c1cff72c5dfd81)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_iteration;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > > class_a2e03e1beb3652d19910e253216cbbdd("_OptimizationEstimation_a2e03e1beb3652d19910e253216cbbdd", "", boost::python::no_init);
    class_a2e03e1beb3652d19910e253216cbbdd.def(boost::python::init<  >(""));
    class_a2e03e1beb3652d19910e253216cbbdd.def(boost::python::init< struct ::statiskit::MixtureSingularDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_a2e03e1beb3652d19910e253216cbbdd.def(boost::python::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >(""));
    class_a2e03e1beb3652d19910e253216cbbdd.def("get_iteration", method_pointer_014ed38b48b5567f97c1cff72c5dfd81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type >();
    }

}