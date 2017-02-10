#include "_core.h"


namespace autowig
{
}


void wrapper_3fd024ee203f5dbeb9a9f3392ca1db8c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistribution >  (::statiskit::LazyEstimation< ::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_a52759b574945019bf27459fbbd87385)() const = &::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_3fd024ee203f5dbeb9a9f3392ca1db8c("_LazyEstimation_3fd024ee203f5dbeb9a9f3392ca1db8c", "", boost::python::no_init);
    class_3fd024ee203f5dbeb9a9f3392ca1db8c.def(boost::python::init<  >(""));
    class_3fd024ee203f5dbeb9a9f3392ca1db8c.def(boost::python::init< class ::std::shared_ptr< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > const & >(""));
    class_3fd024ee203f5dbeb9a9f3392ca1db8c.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >(""));
    class_3fd024ee203f5dbeb9a9f3392ca1db8c.def("get_estimated", method_pointer_a52759b574945019bf27459fbbd87385, "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type >();
    }

}