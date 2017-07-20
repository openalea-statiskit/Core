#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile >(class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8e7da3504a5b5679aa98d8889fb4d5d1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::statiskit::SplittingMixtureOperator *, ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::*method_pointer_0d28d0adeeda50f4bc51a4bc843da758)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::size;
    boost::python::class_< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > > > class_8e7da3504a5b5679aa98d8889fb4d5d1("_OptimizationEstimationImpl_8e7da3504a5b5679aa98d8889fb4d5d1", "", boost::python::no_init);
    class_8e7da3504a5b5679aa98d8889fb4d5d1.def(boost::python::init<  >(""));
    class_8e7da3504a5b5679aa98d8889fb4d5d1.def(boost::python::init< struct ::statiskit::SplittingMixtureOperator const *, struct ::statiskit::MultivariateData const * >(""));
    class_8e7da3504a5b5679aa98d8889fb4d5d1.def(boost::python::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const & >(""));
    class_8e7da3504a5b5679aa98d8889fb4d5d1.def("__len__", method_pointer_0d28d0adeeda50f4bc51a4bc843da758, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type >();
    }

}