#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultinomialSplittingDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::MultinomialSplittingDistributionEstimation::Estimator const volatile >(struct ::statiskit::MultinomialSplittingDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_750509a1de4356e7a5cdf658fbeb8002()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a0c6e3679355529aa946f6bbd5697262 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._multinomial_splitting_distribution_estimation");
    boost::python::object module_a0c6e3679355529aa946f6bbd5697262(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a0c6e3679355529aa946f6bbd5697262.c_str()))));
    boost::python::scope().attr("_multinomial_splitting_distribution_estimation") = module_a0c6e3679355529aa946f6bbd5697262;
    boost::python::scope scope_a0c6e3679355529aa946f6bbd5697262 = module_a0c6e3679355529aa946f6bbd5697262;
    boost::python::class_< struct ::statiskit::MultinomialSplittingDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::MultinomialSplittingDistributionEstimation::Estimator >::Type, boost::python::bases< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator > > class_750509a1de4356e7a5cdf658fbeb8002("Estimator", "", boost::python::no_init);
    class_750509a1de4356e7a5cdf658fbeb8002.def(boost::python::init<  >(""));
    class_750509a1de4356e7a5cdf658fbeb8002.def(boost::python::init< struct ::statiskit::MultinomialSplittingDistributionEstimation::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::MultinomialSplittingDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultinomialSplittingDistributionEstimation::Estimator >::Type, autowig::Held< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator >::Type >();
    }

}