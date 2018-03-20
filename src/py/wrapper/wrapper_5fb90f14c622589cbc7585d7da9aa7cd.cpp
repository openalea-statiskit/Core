#include "_core.h"



namespace autowig
{

    void method_decorator_ccf697e9b2bb584a9d779dc711a22c01(class ::std::unique_ptr< class ::statiskit::GumbelMaxDistribution, struct ::std::default_delete< class ::statiskit::GumbelMaxDistribution > > const & instance, const class ::statiskit::GumbelMaxDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::GumbelMaxDistribution, struct ::std::default_delete< class ::statiskit::GumbelMaxDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::GumbelMaxDistribution, struct ::std::default_delete< class ::statiskit::GumbelMaxDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::GumbelMaxDistribution, struct ::std::default_delete< class ::statiskit::GumbelMaxDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5fb90f14c622589cbc7585d7da9aa7cd()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_5fb90f14c622589cbc7585d7da9aa7cd_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::GumbelMaxDistribution, struct ::std::default_delete< class ::statiskit::GumbelMaxDistribution > > const & unique_ptr_5fb90f14c622589cbc7585d7da9aa7cd)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::GumbelMaxDistribution, struct ::std::default_delete< class ::statiskit::GumbelMaxDistribution > > & >(unique_ptr_5fb90f14c622589cbc7585d7da9aa7cd).release()).ptr());
            std::shared_ptr< class ::statiskit::GumbelMaxDistribution  > shared_ptr_5fb90f14c622589cbc7585d7da9aa7cd(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::GumbelMaxDistribution, struct ::std::default_delete< class ::statiskit::GumbelMaxDistribution > > & >(unique_ptr_5fb90f14c622589cbc7585d7da9aa7cd)));
            return boost::python::incref(boost::python::object(shared_ptr_5fb90f14c622589cbc7585d7da9aa7cd).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::GumbelMaxDistribution, struct ::std::default_delete< class ::statiskit::GumbelMaxDistribution > >, unique_ptr_5fb90f14c622589cbc7585d7da9aa7cd_to_python >();
}