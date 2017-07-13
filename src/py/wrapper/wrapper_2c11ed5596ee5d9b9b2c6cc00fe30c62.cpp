#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation const volatile * get_pointer<struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation const volatile >(struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2c11ed5596ee5d9b9b2c6cc00fe30c62()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation, autowig::Held< struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > > > class_2c11ed5596ee5d9b9b2c6cc00fe30c62("DirichletMultinomialSplittingOperatorEstimation", "", boost::python::no_init);
    class_2c11ed5596ee5d9b9b2c6cc00fe30c62.def(boost::python::init< class ::statiskit::DirichletMultinomialSplittingOperator const *, struct ::statiskit::MultivariateData const * >(""));
    class_2c11ed5596ee5d9b9b2c6cc00fe30c62.def(boost::python::init< struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DirichletMultinomialSplittingOperatorEstimation >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type >();
    }

}