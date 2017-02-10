#include "_core.h"


namespace autowig
{
}


void wrapper_36c99cd43c5c5fb8abeb0fd1ca103ac8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::shared_ptr< struct ::statiskit::UnivariateData > const & (::statiskit::ActiveEstimation< ::statiskit::UnivariateHistogramDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_ee7ffbd54c2a5cae8e84388fb1d836e9)() const = &::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > class_36c99cd43c5c5fb8abeb0fd1ca103ac8("_ActiveEstimation_36c99cd43c5c5fb8abeb0fd1ca103ac8", "", boost::python::no_init);
    class_36c99cd43c5c5fb8abeb0fd1ca103ac8.def(boost::python::init<  >(""));
    class_36c99cd43c5c5fb8abeb0fd1ca103ac8.def(boost::python::init< class ::std::shared_ptr< class ::statiskit::UnivariateHistogramDistribution > const &, class ::std::shared_ptr< struct ::statiskit::UnivariateData > const & >(""));
    class_36c99cd43c5c5fb8abeb0fd1ca103ac8.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >(""));
    class_36c99cd43c5c5fb8abeb0fd1ca103ac8.def("get_data", method_pointer_ee7ffbd54c2a5cae8e84388fb1d836e9, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type >();
    }

}