#include "_core.h"



namespace autowig
{

    void method_decorator_ecea9e01b90a5eceb1b3cbaa4b0d9f53(class ::std::unique_ptr< class ::statiskit::MultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::MultinomialSingularDistribution > > const & instance, const class ::statiskit::MultinomialSingularDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::MultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::MultinomialSingularDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::MultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::MultinomialSingularDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::MultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::MultinomialSingularDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_eeb88c3a800a5e78b27ab74270f2b99f()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_eeb88c3a800a5e78b27ab74270f2b99f_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::MultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::MultinomialSingularDistribution > > const & unique_ptr_eeb88c3a800a5e78b27ab74270f2b99f)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::MultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::MultinomialSingularDistribution > > & >(unique_ptr_eeb88c3a800a5e78b27ab74270f2b99f).release()).ptr());
            std::shared_ptr< class ::statiskit::MultinomialSingularDistribution  > shared_ptr_eeb88c3a800a5e78b27ab74270f2b99f(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::MultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::MultinomialSingularDistribution > > & >(unique_ptr_eeb88c3a800a5e78b27ab74270f2b99f)));
            return boost::python::incref(boost::python::object(shared_ptr_eeb88c3a800a5e78b27ab74270f2b99f).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::MultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::MultinomialSingularDistribution > >, unique_ptr_eeb88c3a800a5e78b27ab74270f2b99f_to_python >();
}