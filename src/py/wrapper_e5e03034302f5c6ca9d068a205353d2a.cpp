#include "_core.h"


namespace autowig
{
}


void wrapper_e5e03034302f5c6ca9d068a205353d2a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::NegativeBinomialDistributionMLEstimation, autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation >::Type, boost::python::bases< class ::statiskit::OptimizationEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_e5e03034302f5c6ca9d068a205353d2a("NegativeBinomialDistributionMLEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation >::Type, autowig::Held< class ::statiskit::OptimizationEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}