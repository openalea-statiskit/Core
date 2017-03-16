#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_49ab1272d9545eac936c53a3450c2d8f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::CategoricalUnivariateDistribution const * (::statiskit::OptimizationEstimation< ::statiskit::CategoricalUnivariateDistribution *, ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_482abc694141597db3ff1b9d74ddcf10)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::get_step;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > > class_49ab1272d9545eac936c53a3450c2d8f("_OptimizationEstimation_49ab1272d9545eac936c53a3450c2d8f", "", boost::python::no_init);
    class_49ab1272d9545eac936c53a3450c2d8f.def(boost::python::init<  >(""));
    class_49ab1272d9545eac936c53a3450c2d8f.def(boost::python::init< struct ::statiskit::CategoricalUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_49ab1272d9545eac936c53a3450c2d8f.def(boost::python::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >(""));
    class_49ab1272d9545eac936c53a3450c2d8f.def("get_step", method_pointer_482abc694141597db3ff1b9d74ddcf10, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > > >();
    }

}