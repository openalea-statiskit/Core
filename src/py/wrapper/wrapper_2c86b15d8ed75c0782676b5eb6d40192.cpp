#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation const volatile * get_pointer<struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation const volatile >(struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2c86b15d8ed75c0782676b5eb6d40192()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation, autowig::Held< struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation >::Type, boost::python::bases< class ::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > > class_2c86b15d8ed75c0782676b5eb6d40192("DirichletMultinomialSplittingDistributionEstimation", "", boost::python::no_init);
    class_2c86b15d8ed75c0782676b5eb6d40192.def(boost::python::init<  >(""));
    class_2c86b15d8ed75c0782676b5eb6d40192.def(boost::python::init< class ::statiskit::DirichletMultinomialSplittingDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_2c86b15d8ed75c0782676b5eb6d40192.def(boost::python::init< struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation >::Type, autowig::Held< class ::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > >::Type >();
    }

}