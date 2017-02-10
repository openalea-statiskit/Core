#include "_core.h"


namespace autowig
{
}


void wrapper_e1c5f547b5d15a24a9c9a3bab487c15d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_ae5ffcb5f4c75f5cbb01e288fa5a986d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._discrete_univariate_distribution_estimation");
    boost::python::object module_ae5ffcb5f4c75f5cbb01e288fa5a986d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_ae5ffcb5f4c75f5cbb01e288fa5a986d.c_str()))));
    boost::python::scope().attr("_discrete_univariate_distribution_estimation") = module_ae5ffcb5f4c75f5cbb01e288fa5a986d;
    boost::python::scope scope_ae5ffcb5f4c75f5cbb01e288fa5a986d = module_ae5ffcb5f4c75f5cbb01e288fa5a986d;
    boost::python::class_< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::UnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_e1c5f547b5d15a24a9c9a3bab487c15d("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation::Estimator >::Type >();
    }

}