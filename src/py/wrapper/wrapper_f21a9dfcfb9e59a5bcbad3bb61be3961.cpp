#include "_core.h"



namespace autowig
{

    void method_decorator_4b59b82269e35912b707072408fbfeed(class ::std::unique_ptr< class ::statiskit::GumbelMinDistribution, struct ::std::default_delete< class ::statiskit::GumbelMinDistribution > > const & instance, const class ::statiskit::GumbelMinDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::GumbelMinDistribution, struct ::std::default_delete< class ::statiskit::GumbelMinDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::GumbelMinDistribution, struct ::std::default_delete< class ::statiskit::GumbelMinDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::GumbelMinDistribution, struct ::std::default_delete< class ::statiskit::GumbelMinDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f21a9dfcfb9e59a5bcbad3bb61be3961()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_f21a9dfcfb9e59a5bcbad3bb61be3961_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::GumbelMinDistribution, struct ::std::default_delete< class ::statiskit::GumbelMinDistribution > > const & unique_ptr_f21a9dfcfb9e59a5bcbad3bb61be3961)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::GumbelMinDistribution, struct ::std::default_delete< class ::statiskit::GumbelMinDistribution > > & >(unique_ptr_f21a9dfcfb9e59a5bcbad3bb61be3961).release()).ptr());
            std::shared_ptr< class ::statiskit::GumbelMinDistribution  > shared_ptr_f21a9dfcfb9e59a5bcbad3bb61be3961(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::GumbelMinDistribution, struct ::std::default_delete< class ::statiskit::GumbelMinDistribution > > & >(unique_ptr_f21a9dfcfb9e59a5bcbad3bb61be3961)));
            return boost::python::incref(boost::python::object(shared_ptr_f21a9dfcfb9e59a5bcbad3bb61be3961).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::GumbelMinDistribution, struct ::std::default_delete< class ::statiskit::GumbelMinDistribution > >, unique_ptr_f21a9dfcfb9e59a5bcbad3bb61be3961_to_python >();
}