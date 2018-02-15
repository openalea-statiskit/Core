#include "_core.h"



namespace autowig
{

    void method_decorator_2f1c92d920a652509c774767c2703da7(class ::std::unique_ptr< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::DiscreteUnivariateMixtureDistribution > > const & instance, const struct ::statiskit::DiscreteUnivariateMixtureDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::DiscreteUnivariateMixtureDistribution > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::DiscreteUnivariateMixtureDistribution > > const volatile >(class ::std::unique_ptr< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::DiscreteUnivariateMixtureDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9662256c000953e681881812720c95cf()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_9662256c000953e681881812720c95cf_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::DiscreteUnivariateMixtureDistribution > > const & unique_ptr_9662256c000953e681881812720c95cf)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::DiscreteUnivariateMixtureDistribution > > & >(unique_ptr_9662256c000953e681881812720c95cf).release()).ptr());
            std::shared_ptr< struct ::statiskit::DiscreteUnivariateMixtureDistribution  > shared_ptr_9662256c000953e681881812720c95cf(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::DiscreteUnivariateMixtureDistribution > > & >(unique_ptr_9662256c000953e681881812720c95cf)));
            return boost::python::incref(boost::python::object(shared_ptr_9662256c000953e681881812720c95cf).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::DiscreteUnivariateMixtureDistribution > >, unique_ptr_9662256c000953e681881812720c95cf_to_python >();
}