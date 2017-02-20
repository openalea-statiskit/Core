#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile >(class ::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_64ef317f2a4f5cf0b9f9cdea2326f15e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistribution >  (::statiskit::OptimizationEstimation< ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_c2e7a89bf4e05534a7d2934e46443c9f)() const = &::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_estimated;
    class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > > const & (::statiskit::OptimizationEstimation< ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_bc95ebb66a9152da8cff1347cc8dcd6a)() const = &::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_iterations;
    class ::std::vector< double, class ::std::allocator< double > > const & (::statiskit::OptimizationEstimation< ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_6ad3c71ef5dc50ea91a803d305f08a66)() const = &::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_scores;
    bool const & (::statiskit::OptimizationEstimation< ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_8a2b53edce2b55bbbaddf24a747686cf)() const = &::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::has_converged;
    boost::python::class_< class ::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_64ef317f2a4f5cf0b9f9cdea2326f15e("_OptimizationEstimation_64ef317f2a4f5cf0b9f9cdea2326f15e", "", boost::python::no_init);
    class_64ef317f2a4f5cf0b9f9cdea2326f15e.def(boost::python::init<  >(""));
    class_64ef317f2a4f5cf0b9f9cdea2326f15e.def(boost::python::init< class ::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_64ef317f2a4f5cf0b9f9cdea2326f15e.def("get_estimated", method_pointer_c2e7a89bf4e05534a7d2934e46443c9f, "");
    class_64ef317f2a4f5cf0b9f9cdea2326f15e.def("get_iterations", method_pointer_bc95ebb66a9152da8cff1347cc8dcd6a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_64ef317f2a4f5cf0b9f9cdea2326f15e.def("get_scores", method_pointer_6ad3c71ef5dc50ea91a803d305f08a66, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_64ef317f2a4f5cf0b9f9cdea2326f15e.def("has_converged", method_pointer_8a2b53edce2b55bbbaddf24a747686cf, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}