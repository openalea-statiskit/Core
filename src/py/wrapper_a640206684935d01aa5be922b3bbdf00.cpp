#include "_core.h"


namespace autowig
{
}


void wrapper_a640206684935d01aa5be922b3bbdf00()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::BinomialDistributionMLEstimation, autowig::Held< struct ::statiskit::BinomialDistributionMLEstimation >::Type, boost::python::bases< class ::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_a640206684935d01aa5be922b3bbdf00("BinomialDistributionMLEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::BinomialDistributionMLEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::BinomialDistributionMLEstimation >::Type, autowig::Held< class ::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}