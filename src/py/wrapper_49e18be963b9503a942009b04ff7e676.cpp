#include "_core.h"


namespace autowig
{
}


void wrapper_49e18be963b9503a942009b04ff7e676()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistribution >  (::statiskit::LazyEstimation< ::statiskit::PoissonDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_41ac8910560258eaa7f207c013735b9a)() const = &::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_49e18be963b9503a942009b04ff7e676("_LazyEstimation_49e18be963b9503a942009b04ff7e676", "", boost::python::no_init);
    class_49e18be963b9503a942009b04ff7e676.def(boost::python::init<  >(""));
    class_49e18be963b9503a942009b04ff7e676.def(boost::python::init< class ::std::shared_ptr< class ::statiskit::PoissonDistribution > const & >(""));
    class_49e18be963b9503a942009b04ff7e676.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_49e18be963b9503a942009b04ff7e676.def("get_estimated", method_pointer_41ac8910560258eaa7f207c013735b9a, "");

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type >();
    }

}