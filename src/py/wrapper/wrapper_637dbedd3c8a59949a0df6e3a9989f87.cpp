#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile * get_pointer<struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile >(struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_637dbedd3c8a59949a0df6e3a9989f87()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > > class_637dbedd3c8a59949a0df6e3a9989f87("_MixtureDistributionEMEstimation_637dbedd3c8a59949a0df6e3a9989f87", "", boost::python::no_init);
    class_637dbedd3c8a59949a0df6e3a9989f87.def(boost::python::init<  >(""));
    class_637dbedd3c8a59949a0df6e3a9989f87.def(boost::python::init< struct ::statiskit::MixtureSingularDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_637dbedd3c8a59949a0df6e3a9989f87.def(boost::python::init< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >(""));

    if(autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type >();
    }

}