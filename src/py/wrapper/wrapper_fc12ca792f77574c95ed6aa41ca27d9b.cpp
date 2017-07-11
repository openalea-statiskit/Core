#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation::Estimator const volatile >(struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fc12ca792f77574c95ed6aa41ca27d9b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_2c86b15d8ed75c0782676b5eb6d40192 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._dirichlet_multinomial_splitting_distribution_estimation");
    boost::python::object module_2c86b15d8ed75c0782676b5eb6d40192(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_2c86b15d8ed75c0782676b5eb6d40192.c_str()))));
    boost::python::scope().attr("_dirichlet_multinomial_splitting_distribution_estimation") = module_2c86b15d8ed75c0782676b5eb6d40192;
    boost::python::scope scope_2c86b15d8ed75c0782676b5eb6d40192 = module_2c86b15d8ed75c0782676b5eb6d40192;
    boost::python::class_< struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation::Estimator >::Type, boost::python::bases< class ::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator > > class_fc12ca792f77574c95ed6aa41ca27d9b("Estimator", "", boost::python::no_init);
    class_fc12ca792f77574c95ed6aa41ca27d9b.def(boost::python::init<  >(""));
    class_fc12ca792f77574c95ed6aa41ca27d9b.def(boost::python::init< struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DirichletMultinomialSplittingDistributionEstimation::Estimator >::Type, autowig::Held< class ::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator >::Type >();
    }

}