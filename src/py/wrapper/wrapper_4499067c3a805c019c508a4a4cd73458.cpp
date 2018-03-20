#include "_core.h"



namespace autowig
{

    void method_decorator_dd7bb4d869c75ddd94845b6b24addf34(class ::std::unique_ptr< class ::statiskit::GeneralizedStudentDistribution, struct ::std::default_delete< class ::statiskit::GeneralizedStudentDistribution > > const & instance, const class ::statiskit::GeneralizedStudentDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::GeneralizedStudentDistribution, struct ::std::default_delete< class ::statiskit::GeneralizedStudentDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::GeneralizedStudentDistribution, struct ::std::default_delete< class ::statiskit::GeneralizedStudentDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::GeneralizedStudentDistribution, struct ::std::default_delete< class ::statiskit::GeneralizedStudentDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4499067c3a805c019c508a4a4cd73458()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_4499067c3a805c019c508a4a4cd73458_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::GeneralizedStudentDistribution, struct ::std::default_delete< class ::statiskit::GeneralizedStudentDistribution > > const & unique_ptr_4499067c3a805c019c508a4a4cd73458)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::GeneralizedStudentDistribution, struct ::std::default_delete< class ::statiskit::GeneralizedStudentDistribution > > & >(unique_ptr_4499067c3a805c019c508a4a4cd73458).release()).ptr());
            std::shared_ptr< class ::statiskit::GeneralizedStudentDistribution  > shared_ptr_4499067c3a805c019c508a4a4cd73458(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::GeneralizedStudentDistribution, struct ::std::default_delete< class ::statiskit::GeneralizedStudentDistribution > > & >(unique_ptr_4499067c3a805c019c508a4a4cd73458)));
            return boost::python::incref(boost::python::object(shared_ptr_4499067c3a805c019c508a4a4cd73458).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::GeneralizedStudentDistribution, struct ::std::default_delete< class ::statiskit::GeneralizedStudentDistribution > >, unique_ptr_4499067c3a805c019c508a4a4cd73458_to_python >();
}