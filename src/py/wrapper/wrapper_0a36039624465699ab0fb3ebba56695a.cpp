#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Estimator const volatile * get_pointer<class ::statiskit::Estimator const volatile >(class ::statiskit::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0a36039624465699ab0fb3ebba56695a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::Estimator, autowig::Held< class ::statiskit::Estimator >::Type > class_0a36039624465699ab0fb3ebba56695a("Estimator", "", boost::python::no_init);
    class_0a36039624465699ab0fb3ebba56695a.def(boost::python::init< class ::statiskit::Estimator const & >(""));

}