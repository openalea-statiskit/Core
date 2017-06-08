#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_58ce030c450459a79803894a62868fcd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation > > class_58ce030c450459a79803894a62868fcd("_LazyEstimation_58ce030c450459a79803894a62868fcd", "", boost::python::no_init);
    class_58ce030c450459a79803894a62868fcd.def(boost::python::init<  >(""));
    class_58ce030c450459a79803894a62868fcd.def(boost::python::init< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > const * >(""));
    class_58ce030c450459a79803894a62868fcd.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation >::Type >();
    }

}