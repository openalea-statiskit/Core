#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator const volatile * get_pointer<class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator const volatile >(class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_1e029a866743577a96657ca3aa3e679a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_b9cd6e4044b45bc181ede2824969b3f6 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._regular_univariate_histogram_distribution_slope_heuristic_estimation");
    boost::python::object module_b9cd6e4044b45bc181ede2824969b3f6(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b9cd6e4044b45bc181ede2824969b3f6.c_str()))));
    boost::python::scope().attr("_regular_univariate_histogram_distribution_slope_heuristic_estimation") = module_b9cd6e4044b45bc181ede2824969b3f6;
    boost::python::scope scope_b9cd6e4044b45bc181ede2824969b3f6 = module_b9cd6e4044b45bc181ede2824969b3f6;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistributionEstimation >  (::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::*method_pointer_78e5d68d0ca25529bc2b5266c62c3306)(class ::std::shared_ptr< struct ::statiskit::UnivariateData > const &, bool const &) const = &::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::operator();
    unsigned int const & (::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::*method_pointer_5e1edc96567f512299e757eec199fc0c)() const = &::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::get_max_bins;
    void  (::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::*method_pointer_787616912f6855a4b073a8d98adc756b)(unsigned int const &) = &::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::set_max_bins;
    boost::python::class_< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator, autowig::Held< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_1e029a866743577a96657ca3aa3e679a("Estimator", "", boost::python::no_init);
    class_1e029a866743577a96657ca3aa3e679a.def(boost::python::init<  >(""));
    class_1e029a866743577a96657ca3aa3e679a.def(boost::python::init< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator const & >(""));
    class_1e029a866743577a96657ca3aa3e679a.def("__call__", method_pointer_78e5d68d0ca25529bc2b5266c62c3306, "");
    class_1e029a866743577a96657ca3aa3e679a.def("get_max_bins", method_pointer_5e1edc96567f512299e757eec199fc0c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1e029a866743577a96657ca3aa3e679a.def("set_max_bins", method_pointer_787616912f6855a4b073a8d98adc756b, "");

    if(autowig::Held< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
    }

}