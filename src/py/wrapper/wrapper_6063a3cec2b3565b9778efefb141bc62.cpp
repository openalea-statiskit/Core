#include "_core.h"



namespace autowig
{

    void method_decorator_995b7092ebd75f2eb08994c5aafde642(class ::std::unique_ptr< class ::statiskit::LogisticDistribution, struct ::std::default_delete< class ::statiskit::LogisticDistribution > > const & instance, const class ::statiskit::LogisticDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::LogisticDistribution, struct ::std::default_delete< class ::statiskit::LogisticDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::LogisticDistribution, struct ::std::default_delete< class ::statiskit::LogisticDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::LogisticDistribution, struct ::std::default_delete< class ::statiskit::LogisticDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6063a3cec2b3565b9778efefb141bc62()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_6063a3cec2b3565b9778efefb141bc62_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::LogisticDistribution, struct ::std::default_delete< class ::statiskit::LogisticDistribution > > const & unique_ptr_6063a3cec2b3565b9778efefb141bc62)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::LogisticDistribution, struct ::std::default_delete< class ::statiskit::LogisticDistribution > > & >(unique_ptr_6063a3cec2b3565b9778efefb141bc62).release()).ptr());
            std::shared_ptr< class ::statiskit::LogisticDistribution  > shared_ptr_6063a3cec2b3565b9778efefb141bc62(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::LogisticDistribution, struct ::std::default_delete< class ::statiskit::LogisticDistribution > > & >(unique_ptr_6063a3cec2b3565b9778efefb141bc62)));
            return boost::python::incref(boost::python::object(shared_ptr_6063a3cec2b3565b9778efefb141bc62).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::LogisticDistribution, struct ::std::default_delete< class ::statiskit::LogisticDistribution > >, unique_ptr_6063a3cec2b3565b9778efefb141bc62_to_python >();
}