#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::GeometricDistributionMLEstimation const volatile * get_pointer<struct ::statiskit::GeometricDistributionMLEstimation const volatile >(struct ::statiskit::GeometricDistributionMLEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_104495a9f44f508fb8c76ab6d2269ec3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::GeometricDistributionMLEstimation, autowig::Held< struct ::statiskit::GeometricDistributionMLEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_104495a9f44f508fb8c76ab6d2269ec3("GeometricDistributionMLEstimation", "", boost::python::no_init);
    class_104495a9f44f508fb8c76ab6d2269ec3.def(boost::python::init<  >(""));
    class_104495a9f44f508fb8c76ab6d2269ec3.def(boost::python::init< class ::statiskit::GeometricDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_104495a9f44f508fb8c76ab6d2269ec3.def(boost::python::init< struct ::statiskit::GeometricDistributionMLEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::GeometricDistributionMLEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::GeometricDistributionMLEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}