#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::OrdinalSampleSpace, struct ::std::default_delete< class ::statiskit::OrdinalSampleSpace > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::OrdinalSampleSpace, struct ::std::default_delete< class ::statiskit::OrdinalSampleSpace > > const volatile >(class ::std::unique_ptr< class ::statiskit::OrdinalSampleSpace, struct ::std::default_delete< class ::statiskit::OrdinalSampleSpace > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    void method_decorator_c38f91089ce155d9b417e9797b7f0346(class ::std::unique_ptr< class ::statiskit::OrdinalSampleSpace, struct ::std::default_delete< class ::statiskit::OrdinalSampleSpace > > const & instance, class ::statiskit::OrdinalSampleSpace & param_out)     { instance.operator*() = param_out; }
}


void wrapper_84a556d72f7851e1831ea2c8cb5d6cb3()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_84a556d72f7851e1831ea2c8cb5d6cb3_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::OrdinalSampleSpace, struct ::std::default_delete< class ::statiskit::OrdinalSampleSpace > > const & unique_ptr_84a556d72f7851e1831ea2c8cb5d6cb3)
        {
            std::shared_ptr< class ::statiskit::OrdinalSampleSpace  > shared_ptr_84a556d72f7851e1831ea2c8cb5d6cb3(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::OrdinalSampleSpace, struct ::std::default_delete< class ::statiskit::OrdinalSampleSpace > > & >(unique_ptr_84a556d72f7851e1831ea2c8cb5d6cb3)));
            return boost::python::incref(boost::python::object(shared_ptr_84a556d72f7851e1831ea2c8cb5d6cb3).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::OrdinalSampleSpace, struct ::std::default_delete< class ::statiskit::OrdinalSampleSpace > >, unique_ptr_84a556d72f7851e1831ea2c8cb5d6cb3_to_python >();
}