#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_85895a324a625f0888907166731d1bca()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_d074f81d124c593a9483366686044479)() const = &::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > > > class_85895a324a625f0888907166731d1bca("_ActiveEstimation_85895a324a625f0888907166731d1bca", "", boost::python::no_init);
    class_85895a324a625f0888907166731d1bca.def(boost::python::init<  >(""));
    class_85895a324a625f0888907166731d1bca.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_85895a324a625f0888907166731d1bca.def(boost::python::init< struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_85895a324a625f0888907166731d1bca.def(boost::python::init< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const & >(""));
    class_85895a324a625f0888907166731d1bca.def("get_data", method_pointer_d074f81d124c593a9483366686044479, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type >();
    }

}