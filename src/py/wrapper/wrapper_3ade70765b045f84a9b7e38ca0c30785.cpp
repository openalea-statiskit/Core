#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation::Estimator const volatile * get_pointer<struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation::Estimator const volatile >(struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3ade70765b045f84a9b7e38ca0c30785()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_2c11ed5596ee5d9b9b2c6cc00fe30c62 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._dirichlet_multinomial_splitting_operator_estimation");
    boost::python::object module_2c11ed5596ee5d9b9b2c6cc00fe30c62(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_2c11ed5596ee5d9b9b2c6cc00fe30c62.c_str()))));
    boost::python::scope().attr("_dirichlet_multinomial_splitting_operator_estimation") = module_2c11ed5596ee5d9b9b2c6cc00fe30c62;
    boost::python::scope scope_2c11ed5596ee5d9b9b2c6cc00fe30c62 = module_2c11ed5596ee5d9b9b2c6cc00fe30c62;
    boost::python::class_< struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation::Estimator, autowig::Held< struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > > > class_3ade70765b045f84a9b7e38ca0c30785("Estimator", "", boost::python::no_init);
    class_3ade70765b045f84a9b7e38ca0c30785.def(boost::python::init<  >(""));
    class_3ade70765b045f84a9b7e38ca0c30785.def(boost::python::init< struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > >::Type >();
    }

}