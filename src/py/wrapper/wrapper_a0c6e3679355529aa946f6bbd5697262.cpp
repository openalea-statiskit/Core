#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultinomialSplittingDistributionEstimation const volatile * get_pointer<struct ::statiskit::MultinomialSplittingDistributionEstimation const volatile >(struct ::statiskit::MultinomialSplittingDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a0c6e3679355529aa946f6bbd5697262()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MultinomialSplittingDistributionEstimation, autowig::Held< struct ::statiskit::MultinomialSplittingDistributionEstimation >::Type, boost::python::bases< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > > class_a0c6e3679355529aa946f6bbd5697262("MultinomialSplittingDistributionEstimation", "", boost::python::no_init);
    class_a0c6e3679355529aa946f6bbd5697262.def(boost::python::init<  >(""));
    class_a0c6e3679355529aa946f6bbd5697262.def(boost::python::init< class ::statiskit::MultinomialSplittingDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_a0c6e3679355529aa946f6bbd5697262.def(boost::python::init< struct ::statiskit::MultinomialSplittingDistributionEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::MultinomialSplittingDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultinomialSplittingDistributionEstimation >::Type, autowig::Held< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > >::Type >();
    }

}