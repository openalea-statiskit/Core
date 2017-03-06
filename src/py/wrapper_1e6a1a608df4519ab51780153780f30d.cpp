#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_1e6a1a608df4519ab51780153780f30d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::IndependentMultivariateDistribution< ::statiskit::MultivariateDistribution >, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_dffe094bde6e54bfa61d5ce111a514db)() const = &::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > > > class_1e6a1a608df4519ab51780153780f30d("_ActiveEstimation_1e6a1a608df4519ab51780153780f30d", "", boost::python::no_init);
    class_1e6a1a608df4519ab51780153780f30d.def(boost::python::init<  >(""));
    class_1e6a1a608df4519ab51780153780f30d.def(boost::python::init< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >(""));
    class_1e6a1a608df4519ab51780153780f30d.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const & >(""));
    class_1e6a1a608df4519ab51780153780f30d.def("get_data", method_pointer_dffe094bde6e54bfa61d5ce111a514db, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::Type >();
    }

}