#include "_core.h"


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
    class_0159796d2beb51da9446e83d609342aa.def(boost::python::init< class ::std::shared_ptr< class ::statiskit::UnivariateHistogramDistribution > const &, class ::std::shared_ptr< struct ::statiskit::UnivariateData > const & >(""));

    if(autowig::Held< struct ::statiskit::UnivariateHistogramDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::UnivariateHistogramDistributionEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type >();
    }

}