#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7394d54c7fd358b9be76af285eacadac()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::CategoricalMultivariateDistribution const * (::statiskit::OptimizationEstimation< ::statiskit::CategoricalMultivariateDistribution *, ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_4c630b7f153055d1bd5aae1cfd8b35c9)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_step;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > > class_7394d54c7fd358b9be76af285eacadac("_OptimizationEstimation_7394d54c7fd358b9be76af285eacadac", "", boost::python::no_init);
    class_7394d54c7fd358b9be76af285eacadac.def(boost::python::init<  >(""));
    class_7394d54c7fd358b9be76af285eacadac.def(boost::python::init< struct ::statiskit::CategoricalMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_7394d54c7fd358b9be76af285eacadac.def(boost::python::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >(""));
    class_7394d54c7fd358b9be76af285eacadac.def("get_step", method_pointer_4c630b7f153055d1bd5aae1cfd8b35c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalMultivariateDistribution *, struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > > >();
    }

}