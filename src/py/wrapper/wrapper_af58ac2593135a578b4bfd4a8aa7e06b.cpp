#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile >(class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_af58ac2593135a578b4bfd4a8aa7e06b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::DirichletMultinomialSplittingOperator, ::statiskit::SplittingOperatorEstimation >::*method_pointer_eaab82a6ef3452aca00abe6a2958daf3)() const = &::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::size;
    boost::python::class_< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >, autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > > > class_af58ac2593135a578b4bfd4a8aa7e06b("_OptimizationEstimationImpl_af58ac2593135a578b4bfd4a8aa7e06b", "", boost::python::no_init);
    class_af58ac2593135a578b4bfd4a8aa7e06b.def(boost::python::init<  >(""));
    class_af58ac2593135a578b4bfd4a8aa7e06b.def(boost::python::init< class ::statiskit::DirichletMultinomialSplittingOperator const *, struct ::statiskit::MultivariateData const * >(""));
    class_af58ac2593135a578b4bfd4a8aa7e06b.def(boost::python::init< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const & >(""));
    class_af58ac2593135a578b4bfd4a8aa7e06b.def("__len__", method_pointer_eaab82a6ef3452aca00abe6a2958daf3, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type >();
    }

}