#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3bec1ea35c425068802275b6eb9a34ad()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, boost::python::bases< struct ::statiskit::SplittingOperatorEstimation > > class_3bec1ea35c425068802275b6eb9a34ad("_LazyEstimation_3bec1ea35c425068802275b6eb9a34ad", "", boost::python::no_init);
    class_3bec1ea35c425068802275b6eb9a34ad.def(boost::python::init<  >(""));
    class_3bec1ea35c425068802275b6eb9a34ad.def(boost::python::init< class ::statiskit::DirichletMultinomialSplittingOperator const * >(""));
    class_3bec1ea35c425068802275b6eb9a34ad.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, autowig::Held< struct ::statiskit::SplittingOperatorEstimation >::Type >();
    }

}