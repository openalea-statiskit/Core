#include "_core.h"


namespace autowig
{
}


void wrapper_cc9b200ad98c51108cfb0b6bf6bf2bd0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::NegativeBinomialDistributionMMEstimation, autowig::Held< struct ::statiskit::NegativeBinomialDistributionMMEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_cc9b200ad98c51108cfb0b6bf6bf2bd0("NegativeBinomialDistributionMMEstimation", "", boost::python::no_init);
    class_cc9b200ad98c51108cfb0b6bf6bf2bd0.def(boost::python::init< class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > const &, class ::std::shared_ptr< struct ::statiskit::UnivariateData > const & >(""));

    if(autowig::Held< struct ::statiskit::NegativeBinomialDistributionMMEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeBinomialDistributionMMEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}