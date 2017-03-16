#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile >(class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_620a7d5c098354e4922976fd426aec9a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::statiskit::CategoricalUnivariateDistribution *, ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_3b1023f1d41a5cd8b6ad2c672f7a060b)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::size;
    boost::python::class_< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > > class_620a7d5c098354e4922976fd426aec9a("_OptimizationEstimationImpl_620a7d5c098354e4922976fd426aec9a", "", boost::python::no_init);
    class_620a7d5c098354e4922976fd426aec9a.def(boost::python::init<  >(""));
    class_620a7d5c098354e4922976fd426aec9a.def(boost::python::init< struct ::statiskit::CategoricalUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_620a7d5c098354e4922976fd426aec9a.def(boost::python::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >(""));
    class_620a7d5c098354e4922976fd426aec9a.def("__len__", method_pointer_3b1023f1d41a5cd8b6ad2c672f7a060b, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateDistribution *, struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > > >();
    }

}