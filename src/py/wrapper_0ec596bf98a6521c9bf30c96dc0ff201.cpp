#include "_core.h"


namespace autowig
{
}


void wrapper_0ec596bf98a6521c9bf30c96dc0ff201()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_0ec596bf98a6521c9bf30c96dc0ff201("_UnivariateFrequencyDistributionEstimation_0ec596bf98a6521c9bf30c96dc0ff201", "", boost::python::no_init);
    class_0ec596bf98a6521c9bf30c96dc0ff201.def(boost::python::init< class ::std::shared_ptr< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > const &, class ::std::shared_ptr< struct ::statiskit::UnivariateData > const & >(""));

    if(autowig::Held< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}