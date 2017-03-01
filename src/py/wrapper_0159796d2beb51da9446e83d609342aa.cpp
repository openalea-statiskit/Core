#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::UnivariateHistogramDistributionEstimation const volatile * get_pointer<struct ::statiskit::UnivariateHistogramDistributionEstimation const volatile >(struct ::statiskit::UnivariateHistogramDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_0159796d2beb51da9446e83d609342aa()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::UnivariateHistogramDistributionEstimation, autowig::Held< struct ::statiskit::UnivariateHistogramDistributionEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > class_0159796d2beb51da9446e83d609342aa("UnivariateHistogramDistributionEstimation", "", boost::python::no_init);
    class_0159796d2beb51da9446e83d609342aa.def(boost::python::init< class ::statiskit::UnivariateHistogramDistribution const *, struct ::statiskit::UnivariateData const * >(""));

    if(autowig::Held< struct ::statiskit::UnivariateHistogramDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::UnivariateHistogramDistributionEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type >();
    }

}