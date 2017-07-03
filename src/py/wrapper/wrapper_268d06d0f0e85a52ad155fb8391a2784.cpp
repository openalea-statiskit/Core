#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile >(class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_268d06d0f0e85a52ad155fb8391a2784()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::OptimizationEstimationImpl< double, ::statiskit::MultinomialSplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_1632b39fb0e058749d722e23f830ee79)() const = &::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::size;
    boost::python::class_< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_268d06d0f0e85a52ad155fb8391a2784("_OptimizationEstimationImpl_268d06d0f0e85a52ad155fb8391a2784", "", boost::python::no_init);
    class_268d06d0f0e85a52ad155fb8391a2784.def(boost::python::init<  >(""));
    class_268d06d0f0e85a52ad155fb8391a2784.def(boost::python::init< class ::statiskit::MultinomialSplittingDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_268d06d0f0e85a52ad155fb8391a2784.def(boost::python::init< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >(""));
    class_268d06d0f0e85a52ad155fb8391a2784.def("__len__", method_pointer_1632b39fb0e058749d722e23f830ee79, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type >();
    }

}