#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_59db006e2d0a532f903fd7d41c9aabfb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::SingularDistribution const * (::statiskit::LazyEstimation< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_302abc77e98951e6b3d24ad5617c20f6)() const = &::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::SingularDistributionEstimation > > class_59db006e2d0a532f903fd7d41c9aabfb("_LazyEstimation_59db006e2d0a532f903fd7d41c9aabfb", "", boost::python::no_init);
    class_59db006e2d0a532f903fd7d41c9aabfb.def(boost::python::init<  >(""));
    class_59db006e2d0a532f903fd7d41c9aabfb.def(boost::python::init< struct ::statiskit::SingularDistribution const * >(""));
    class_59db006e2d0a532f903fd7d41c9aabfb.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >(""));
    class_59db006e2d0a532f903fd7d41c9aabfb.def("get_estimated", method_pointer_302abc77e98951e6b3d24ad5617c20f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::SingularDistributionEstimation >::Type >();
    }

}