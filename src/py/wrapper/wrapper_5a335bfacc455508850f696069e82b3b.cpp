#include "_core.h"



namespace autowig
{

    void method_decorator_84137d7c97525f0dac2dcf7b32db26ea(class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > > const & instance, const struct ::statiskit::SingularDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > > const volatile >(class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5a335bfacc455508850f696069e82b3b()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_5a335bfacc455508850f696069e82b3b_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > > const & unique_ptr_5a335bfacc455508850f696069e82b3b)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > > & >(unique_ptr_5a335bfacc455508850f696069e82b3b).release()).ptr());
            std::shared_ptr< struct ::statiskit::SingularDistribution  > shared_ptr_5a335bfacc455508850f696069e82b3b(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > > & >(unique_ptr_5a335bfacc455508850f696069e82b3b)));
            return boost::python::incref(boost::python::object(shared_ptr_5a335bfacc455508850f696069e82b3b).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > >, unique_ptr_5a335bfacc455508850f696069e82b3b_to_python >();
}