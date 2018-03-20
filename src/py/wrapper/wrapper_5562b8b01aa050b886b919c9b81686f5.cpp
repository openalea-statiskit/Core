#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::DirichletMultinomialSingularDistributionEstimation const volatile * get_pointer<struct ::statiskit::DirichletMultinomialSingularDistributionEstimation const volatile >(struct ::statiskit::DirichletMultinomialSingularDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5562b8b01aa050b886b919c9b81686f5()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation, autowig::Held< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > > class_5562b8b01aa050b886b919c9b81686f5("DirichletMultinomialSingularDistributionEstimation", "", boost::python::no_init);
    class_5562b8b01aa050b886b919c9b81686f5.def(boost::python::init< class ::statiskit::DirichletMultinomialSingularDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_5562b8b01aa050b886b919c9b81686f5.def(boost::python::init< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type >();
    }

}