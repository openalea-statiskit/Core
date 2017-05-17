#include "_core.h"



namespace autowig
{

    void method_decorator_63f527c603d45e82b91133b86a97d2c3(class ::std::unique_ptr< class ::statiskit::NominalSampleSpace, struct ::std::default_delete< class ::statiskit::NominalSampleSpace > > const & instance, const class ::statiskit::NominalSampleSpace & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::NominalSampleSpace, struct ::std::default_delete< class ::statiskit::NominalSampleSpace > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::NominalSampleSpace, struct ::std::default_delete< class ::statiskit::NominalSampleSpace > > const volatile >(class ::std::unique_ptr< class ::statiskit::NominalSampleSpace, struct ::std::default_delete< class ::statiskit::NominalSampleSpace > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2a9f5c079e365a359ea86941717450bb()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_2a9f5c079e365a359ea86941717450bb_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::NominalSampleSpace, struct ::std::default_delete< class ::statiskit::NominalSampleSpace > > const & unique_ptr_2a9f5c079e365a359ea86941717450bb)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::NominalSampleSpace, struct ::std::default_delete< class ::statiskit::NominalSampleSpace > > & >(unique_ptr_2a9f5c079e365a359ea86941717450bb).release()).ptr());
            std::shared_ptr< class ::statiskit::NominalSampleSpace  > shared_ptr_2a9f5c079e365a359ea86941717450bb(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::NominalSampleSpace, struct ::std::default_delete< class ::statiskit::NominalSampleSpace > > & >(unique_ptr_2a9f5c079e365a359ea86941717450bb)));
            return boost::python::incref(boost::python::object(shared_ptr_2a9f5c079e365a359ea86941717450bb).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::NominalSampleSpace, struct ::std::default_delete< class ::statiskit::NominalSampleSpace > >, unique_ptr_2a9f5c079e365a359ea86941717450bb_to_python >();
}