#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_32e1846682dc5dedb4716929594ef6ce()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::DirichletMultinomialSplittingOperator, ::statiskit::SplittingOperatorEstimation >::*method_pointer_418f8d430cdd5e09b1784cd44792b126)() const = &::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > > > class_32e1846682dc5dedb4716929594ef6ce("_ActiveEstimation_32e1846682dc5dedb4716929594ef6ce", "", boost::python::no_init);
    class_32e1846682dc5dedb4716929594ef6ce.def(boost::python::init<  >(""));
    class_32e1846682dc5dedb4716929594ef6ce.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_32e1846682dc5dedb4716929594ef6ce.def(boost::python::init< class ::statiskit::DirichletMultinomialSplittingOperator const *, struct ::statiskit::MultivariateData const * >(""));
    class_32e1846682dc5dedb4716929594ef6ce.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const & >(""));
    class_32e1846682dc5dedb4716929594ef6ce.def("get_data", method_pointer_418f8d430cdd5e09b1784cd44792b126, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type >();
    }

}