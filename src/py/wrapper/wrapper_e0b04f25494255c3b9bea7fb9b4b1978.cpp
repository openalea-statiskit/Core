#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e0b04f25494255c3b9bea7fb9b4b1978()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const (::statiskit::OptimizationEstimation< double, ::statiskit::MultinomialSplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_5085974b3a005d519842b243cadfbc2a)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_iteration;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_e0b04f25494255c3b9bea7fb9b4b1978("_OptimizationEstimation_e0b04f25494255c3b9bea7fb9b4b1978", "", boost::python::no_init);
    class_e0b04f25494255c3b9bea7fb9b4b1978.def(boost::python::init<  >(""));
    class_e0b04f25494255c3b9bea7fb9b4b1978.def(boost::python::init< class ::statiskit::MultinomialSplittingDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_e0b04f25494255c3b9bea7fb9b4b1978.def(boost::python::init< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >(""));
    class_e0b04f25494255c3b9bea7fb9b4b1978.def("get_iteration", method_pointer_5085974b3a005d519842b243cadfbc2a, "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type >();
    }

}