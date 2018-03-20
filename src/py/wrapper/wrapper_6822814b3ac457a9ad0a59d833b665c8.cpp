#include "_core.h"



namespace autowig
{

    void method_decorator_72eb83d1f07854e8b08b7b8ea095fb86(class ::std::unique_ptr< class ::statiskit::NonStandardStudentDistribution, struct ::std::default_delete< class ::statiskit::NonStandardStudentDistribution > > const & instance, const class ::statiskit::NonStandardStudentDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::NonStandardStudentDistribution, struct ::std::default_delete< class ::statiskit::NonStandardStudentDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::NonStandardStudentDistribution, struct ::std::default_delete< class ::statiskit::NonStandardStudentDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::NonStandardStudentDistribution, struct ::std::default_delete< class ::statiskit::NonStandardStudentDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6822814b3ac457a9ad0a59d833b665c8()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_6822814b3ac457a9ad0a59d833b665c8_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::NonStandardStudentDistribution, struct ::std::default_delete< class ::statiskit::NonStandardStudentDistribution > > const & unique_ptr_6822814b3ac457a9ad0a59d833b665c8)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::NonStandardStudentDistribution, struct ::std::default_delete< class ::statiskit::NonStandardStudentDistribution > > & >(unique_ptr_6822814b3ac457a9ad0a59d833b665c8).release()).ptr());
            std::shared_ptr< class ::statiskit::NonStandardStudentDistribution  > shared_ptr_6822814b3ac457a9ad0a59d833b665c8(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::NonStandardStudentDistribution, struct ::std::default_delete< class ::statiskit::NonStandardStudentDistribution > > & >(unique_ptr_6822814b3ac457a9ad0a59d833b665c8)));
            return boost::python::incref(boost::python::object(shared_ptr_6822814b3ac457a9ad0a59d833b665c8).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::NonStandardStudentDistribution, struct ::std::default_delete< class ::statiskit::NonStandardStudentDistribution > >, unique_ptr_6822814b3ac457a9ad0a59d833b665c8_to_python >();
}