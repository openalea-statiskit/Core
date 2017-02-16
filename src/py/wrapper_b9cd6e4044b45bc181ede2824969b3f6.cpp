#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation const volatile * get_pointer<struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation const volatile >(struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_b9cd6e4044b45bc181ede2824969b3f6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation, autowig::Held< struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation, class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > > > class_b9cd6e4044b45bc181ede2824969b3f6("RegularUnivariateHistogramDistributionSlopeHeuristicEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation >::Type, autowig::Held< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > >::Type >();
    }

}