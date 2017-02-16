#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator const volatile * get_pointer<class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator const volatile >(class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_b85ac824f29951a49701a250a473cae3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f1a9dec4e61c504cbc42ceaaa4406a97 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._irregular_univariate_histogram_distribution_slope_heuristic_estimation");
    boost::python::object module_f1a9dec4e61c504cbc42ceaaa4406a97(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f1a9dec4e61c504cbc42ceaaa4406a97.c_str()))));
    boost::python::scope().attr("_irregular_univariate_histogram_distribution_slope_heuristic_estimation") = module_f1a9dec4e61c504cbc42ceaaa4406a97;
    boost::python::scope scope_f1a9dec4e61c504cbc42ceaaa4406a97 = module_f1a9dec4e61c504cbc42ceaaa4406a97;
    unsigned int const & (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::*method_pointer_38b41915d5ff5ff6ac7e513581e3a97c)() const = &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::get_max_bins;
    void  (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::*method_pointer_27bb7c04f1ca5ba096e3597e7f4c0e8c)(unsigned int const &) = &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::set_max_bins;
    double const & (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::*method_pointer_0561c9b4b0f4545ca78243fa2a0d890a)() const = &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::get_constant;
    void  (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::*method_pointer_e8a15132fccc557bbb7990324cf92b7f)(double const &) = &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::set_constant;
    boost::python::class_< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator, autowig::Held< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_b85ac824f29951a49701a250a473cae3("Estimator", "", boost::python::no_init);
    class_b85ac824f29951a49701a250a473cae3.def(boost::python::init<  >(""));
    class_b85ac824f29951a49701a250a473cae3.def(boost::python::init< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator const & >(""));
    class_b85ac824f29951a49701a250a473cae3.def("get_max_bins", method_pointer_38b41915d5ff5ff6ac7e513581e3a97c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b85ac824f29951a49701a250a473cae3.def("set_max_bins", method_pointer_27bb7c04f1ca5ba096e3597e7f4c0e8c, "");
    class_b85ac824f29951a49701a250a473cae3.def("get_constant", method_pointer_0561c9b4b0f4545ca78243fa2a0d890a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b85ac824f29951a49701a250a473cae3.def("set_constant", method_pointer_e8a15132fccc557bbb7990324cf92b7f, "");

    if(autowig::Held< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
    }

}