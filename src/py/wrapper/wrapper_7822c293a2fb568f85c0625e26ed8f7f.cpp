#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7822c293a2fb568f85c0625e26ed8f7f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, boost::python::bases< struct ::statiskit::SplittingOperatorEstimation > > class_7822c293a2fb568f85c0625e26ed8f7f("_LazyEstimation_7822c293a2fb568f85c0625e26ed8f7f", "", boost::python::no_init);
    class_7822c293a2fb568f85c0625e26ed8f7f.def(boost::python::init<  >(""));
    class_7822c293a2fb568f85c0625e26ed8f7f.def(boost::python::init< struct ::statiskit::SplittingMixtureOperator const * >(""));
    class_7822c293a2fb568f85c0625e26ed8f7f.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, autowig::Held< struct ::statiskit::SplittingOperatorEstimation >::Type >();
    }

}