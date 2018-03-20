#include "_core.h"



namespace autowig
{

    void method_decorator_67767f6f4b7d52bf8607981892c04255(class ::std::unique_ptr< class ::statiskit::LaplaceDistribution, struct ::std::default_delete< class ::statiskit::LaplaceDistribution > > const & instance, const class ::statiskit::LaplaceDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::LaplaceDistribution, struct ::std::default_delete< class ::statiskit::LaplaceDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::LaplaceDistribution, struct ::std::default_delete< class ::statiskit::LaplaceDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::LaplaceDistribution, struct ::std::default_delete< class ::statiskit::LaplaceDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_30c7358631df586cb00b98444d127366()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_30c7358631df586cb00b98444d127366_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::LaplaceDistribution, struct ::std::default_delete< class ::statiskit::LaplaceDistribution > > const & unique_ptr_30c7358631df586cb00b98444d127366)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::LaplaceDistribution, struct ::std::default_delete< class ::statiskit::LaplaceDistribution > > & >(unique_ptr_30c7358631df586cb00b98444d127366).release()).ptr());
            std::shared_ptr< class ::statiskit::LaplaceDistribution  > shared_ptr_30c7358631df586cb00b98444d127366(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::LaplaceDistribution, struct ::std::default_delete< class ::statiskit::LaplaceDistribution > > & >(unique_ptr_30c7358631df586cb00b98444d127366)));
            return boost::python::incref(boost::python::object(shared_ptr_30c7358631df586cb00b98444d127366).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::LaplaceDistribution, struct ::std::default_delete< class ::statiskit::LaplaceDistribution > >, unique_ptr_30c7358631df586cb00b98444d127366_to_python >();
}