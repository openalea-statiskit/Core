#include "_core.h"


namespace autowig
{
}


void wrapper_f490fbe6298d5af89adf9098e57be3d4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::shared_ptr< struct ::statiskit::UnivariateData > const & (::statiskit::ActiveEstimation< ::statiskit::PoissonDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_bc4837462b8350e8a5aeb210cd6e7fc4)() const = &::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_f490fbe6298d5af89adf9098e57be3d4("_ActiveEstimation_f490fbe6298d5af89adf9098e57be3d4", "", boost::python::no_init);
    class_f490fbe6298d5af89adf9098e57be3d4.def(boost::python::init<  >(""));
    class_f490fbe6298d5af89adf9098e57be3d4.def(boost::python::init< class ::std::shared_ptr< class ::statiskit::PoissonDistribution > const &, class ::std::shared_ptr< struct ::statiskit::UnivariateData > const & >(""));
    class_f490fbe6298d5af89adf9098e57be3d4.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_f490fbe6298d5af89adf9098e57be3d4.def("get_data", method_pointer_bc4837462b8350e8a5aeb210cd6e7fc4, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}