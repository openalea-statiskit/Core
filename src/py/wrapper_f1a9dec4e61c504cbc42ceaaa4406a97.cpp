#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation const volatile * get_pointer<struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation const volatile >(struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_f1a9dec4e61c504cbc42ceaaa4406a97()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation, autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation, class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > > > class_f1a9dec4e61c504cbc42ceaaa4406a97("IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation >::Type, autowig::Held< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > >::Type >();
    }

}