#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > > const volatile >(class ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    void method_decorator_dcafe6784ad0578094810e9dc6ceb523(class ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > > const & instance, class ::statiskit::VarianceEstimation & param_out)     { instance.operator*() = param_out; }
}


void wrapper_51687976bd8c5c0b9b94015141d807f4()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_51687976bd8c5c0b9b94015141d807f4_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > > const & unique_ptr_51687976bd8c5c0b9b94015141d807f4)
        {
            std::shared_ptr< class ::statiskit::VarianceEstimation  > shared_ptr_51687976bd8c5c0b9b94015141d807f4(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > > & >(unique_ptr_51687976bd8c5c0b9b94015141d807f4)));
            return boost::python::incref(boost::python::object(shared_ptr_51687976bd8c5c0b9b94015141d807f4).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > >, unique_ptr_51687976bd8c5c0b9b94015141d807f4_to_python >();
}