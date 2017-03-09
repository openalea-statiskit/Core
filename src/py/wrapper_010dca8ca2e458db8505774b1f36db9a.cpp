#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator const volatile * get_pointer<class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator const volatile >(class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_010dca8ca2e458db8505774b1f36db9a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_05ca2ab336025cf2a8fa3266fedb4a1e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._regular_univariate_histogram_distribution_slope_heuristic_selection");
    boost::python::object module_05ca2ab336025cf2a8fa3266fedb4a1e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_05ca2ab336025cf2a8fa3266fedb4a1e.c_str()))));
    boost::python::scope().attr("_regular_univariate_histogram_distribution_slope_heuristic_selection") = module_05ca2ab336025cf2a8fa3266fedb4a1e;
    boost::python::scope scope_05ca2ab336025cf2a8fa3266fedb4a1e = module_05ca2ab336025cf2a8fa3266fedb4a1e;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_bd0ffc70b9bd50769f491f2dd43fa729)(struct ::statiskit::UnivariateData const &, bool const &) const = &::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  (::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_ace252bb520f5b9088a1945b236ee6bc)() const = &::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::copy;
    unsigned int const & (::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_84cd9c9cdae8518b9ba46be8ffbe47d9)() const = &::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::get_max_bins;
    void  (::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::*method_pointer_e584d85d692d54e3a252bcae8697efbb)(unsigned int const &) = &::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator::set_max_bins;
    boost::python::class_< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator, autowig::Held< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_010dca8ca2e458db8505774b1f36db9a("Estimator", "", boost::python::no_init);
    class_010dca8ca2e458db8505774b1f36db9a.def(boost::python::init<  >(""));
    class_010dca8ca2e458db8505774b1f36db9a.def(boost::python::init< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator const & >(""));
    class_010dca8ca2e458db8505774b1f36db9a.def("__call__", method_pointer_bd0ffc70b9bd50769f491f2dd43fa729, "");
    class_010dca8ca2e458db8505774b1f36db9a.def("copy", method_pointer_ace252bb520f5b9088a1945b236ee6bc, "");
    class_010dca8ca2e458db8505774b1f36db9a.def("get_max_bins", method_pointer_84cd9c9cdae8518b9ba46be8ffbe47d9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_010dca8ca2e458db8505774b1f36db9a.def("set_max_bins", method_pointer_e584d85d692d54e3a252bcae8697efbb, "");

    if(autowig::Held< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
    }

}