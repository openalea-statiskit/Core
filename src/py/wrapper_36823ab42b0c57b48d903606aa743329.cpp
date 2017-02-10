#include "_core.h"


namespace autowig
{
}


void wrapper_36823ab42b0c57b48d903606aa743329()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::PoissonDistributionMLEstimation, autowig::Held< struct ::statiskit::PoissonDistributionMLEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_36823ab42b0c57b48d903606aa743329("PoissonDistributionMLEstimation", "", boost::python::no_init);
    class_36823ab42b0c57b48d903606aa743329.def(boost::python::init< class ::std::shared_ptr< class ::statiskit::PoissonDistribution > const &, class ::std::shared_ptr< struct ::statiskit::UnivariateData > const & >(""));

    if(autowig::Held< struct ::statiskit::PoissonDistributionMLEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PoissonDistributionMLEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}