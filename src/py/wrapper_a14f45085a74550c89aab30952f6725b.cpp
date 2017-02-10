#include "_core.h"


namespace autowig
{
}


void wrapper_a14f45085a74550c89aab30952f6725b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_0159796d2beb51da9446e83d609342aa = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._univariate_histogram_distribution_estimation");
    boost::python::object module_0159796d2beb51da9446e83d609342aa(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_0159796d2beb51da9446e83d609342aa.c_str()))));
    boost::python::scope().attr("_univariate_histogram_distribution_estimation") = module_0159796d2beb51da9446e83d609342aa;
    boost::python::scope scope_0159796d2beb51da9446e83d609342aa = module_0159796d2beb51da9446e83d609342aa;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistributionEstimation >  (::statiskit::UnivariateHistogramDistributionEstimation::Estimator::*method_pointer_752ea42ba919583eaab35e2d72bbedcd)(class ::std::shared_ptr< struct ::statiskit::UnivariateData > const &, bool const &) const = &::statiskit::UnivariateHistogramDistributionEstimation::Estimator::operator();
    unsigned int const & (::statiskit::UnivariateHistogramDistributionEstimation::Estimator::*method_pointer_51500bc0b2985679b02003e72c323092)() const = &::statiskit::UnivariateHistogramDistributionEstimation::Estimator::get_nb_bins;
    void  (::statiskit::UnivariateHistogramDistributionEstimation::Estimator::*method_pointer_7663d6320c1a5d018f910f7bbcfe06d8)(unsigned int const &) = &::statiskit::UnivariateHistogramDistributionEstimation::Estimator::set_nb_bins;
    boost::python::class_< class ::statiskit::UnivariateHistogramDistributionEstimation::Estimator, autowig::Held< class ::statiskit::UnivariateHistogramDistributionEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_a14f45085a74550c89aab30952f6725b("Estimator", "", boost::python::no_init);
    class_a14f45085a74550c89aab30952f6725b.def(boost::python::init<  >(""));
    class_a14f45085a74550c89aab30952f6725b.def(boost::python::init< class ::statiskit::UnivariateHistogramDistributionEstimation::Estimator const & >(""));
    class_a14f45085a74550c89aab30952f6725b.def("__call__", method_pointer_752ea42ba919583eaab35e2d72bbedcd, "");
    class_a14f45085a74550c89aab30952f6725b.def("get_nb_bins", method_pointer_51500bc0b2985679b02003e72c323092, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a14f45085a74550c89aab30952f6725b.def("set_nb_bins", method_pointer_7663d6320c1a5d018f910f7bbcfe06d8, "");

    if(autowig::Held< class ::statiskit::UnivariateHistogramDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UnivariateHistogramDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
    }

}