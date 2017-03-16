#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile >(struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6ee1e595d3d9519aa994271cab33468e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >, autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > > > class_6ee1e595d3d9519aa994271cab33468e("_MixtureDistributionEMEstimation_6ee1e595d3d9519aa994271cab33468e", "", boost::python::no_init);
    class_6ee1e595d3d9519aa994271cab33468e.def(boost::python::init<  >(""));
    class_6ee1e595d3d9519aa994271cab33468e.def(boost::python::init< struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_6ee1e595d3d9519aa994271cab33468e.def(boost::python::init< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const & >(""));

    if(autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateDistribution *, struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > > > >();
    }

}