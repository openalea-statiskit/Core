#include "_core.h"


namespace autowig
{
}


void wrapper_40c631b5a67d5748bbfdeaa0beedb4e0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistribution >  (::statiskit::LazyEstimation< ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_ebc2884c15b558c78011e88d2d1436a3)() const = &::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_40c631b5a67d5748bbfdeaa0beedb4e0("_LazyEstimation_40c631b5a67d5748bbfdeaa0beedb4e0", "", boost::python::no_init);
    class_40c631b5a67d5748bbfdeaa0beedb4e0.def(boost::python::init<  >(""));
    class_40c631b5a67d5748bbfdeaa0beedb4e0.def(boost::python::init< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > const & >(""));
    class_40c631b5a67d5748bbfdeaa0beedb4e0.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_40c631b5a67d5748bbfdeaa0beedb4e0.def("get_estimated", method_pointer_ebc2884c15b558c78011e88d2d1436a3, "");

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type >();
    }

}