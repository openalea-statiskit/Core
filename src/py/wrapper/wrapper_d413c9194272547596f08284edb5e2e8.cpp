#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NegativeMultinomialDistributionEstimation const volatile * get_pointer<struct ::statiskit::NegativeMultinomialDistributionEstimation const volatile >(struct ::statiskit::NegativeMultinomialDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d413c9194272547596f08284edb5e2e8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::NegativeMultinomialDistributionEstimation, autowig::Held< struct ::statiskit::NegativeMultinomialDistributionEstimation >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_d413c9194272547596f08284edb5e2e8("NegativeMultinomialDistributionEstimation", "", boost::python::no_init);
    class_d413c9194272547596f08284edb5e2e8.def(boost::python::init<  >(""));
    class_d413c9194272547596f08284edb5e2e8.def(boost::python::init< class ::statiskit::SplittingDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_d413c9194272547596f08284edb5e2e8.def(boost::python::init< struct ::statiskit::NegativeMultinomialDistributionEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::NegativeMultinomialDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeMultinomialDistributionEstimation >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type >();
    }

}