#include "_core.h"


namespace autowig
{
}


void wrapper_ae5ffcb5f4c75f5cbb01e288fa5a986d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::DiscreteUnivariateDistributionEstimation, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type, boost::python::bases< struct ::statiskit::UnivariateDistributionEstimation >, boost::noncopyable > class_ae5ffcb5f4c75f5cbb01e288fa5a986d("DiscreteUnivariateDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation >::Type >();
    }

}