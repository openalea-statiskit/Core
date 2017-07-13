#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultinomialSplittingOperatorEstimation const volatile * get_pointer<struct ::statiskit::MultinomialSplittingOperatorEstimation const volatile >(struct ::statiskit::MultinomialSplittingOperatorEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_983c8f09302f58288d31a502e9ff8d51()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MultinomialSplittingOperatorEstimation, autowig::Held< struct ::statiskit::MultinomialSplittingOperatorEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > > > class_983c8f09302f58288d31a502e9ff8d51("MultinomialSplittingOperatorEstimation", "", boost::python::no_init);
    class_983c8f09302f58288d31a502e9ff8d51.def(boost::python::init< class ::statiskit::MultinomialSplittingOperator const *, struct ::statiskit::MultivariateData const * >(""));
    class_983c8f09302f58288d31a502e9ff8d51.def(boost::python::init< struct ::statiskit::MultinomialSplittingOperatorEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::MultinomialSplittingOperatorEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultinomialSplittingOperatorEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type >();
    }

}