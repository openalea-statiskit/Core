#include "_core.h"



namespace autowig
{

    void method_decorator_f6612d8c0a695a3d95468c7283168aa2(class ::std::unique_ptr< class ::statiskit::NegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::NegativeBinomialDistribution > > const & instance, const class ::statiskit::NegativeBinomialDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::NegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::NegativeBinomialDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::NegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::NegativeBinomialDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::NegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::NegativeBinomialDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e8f3d84734c05381b4354cfc400b164c()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_e8f3d84734c05381b4354cfc400b164c_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::NegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::NegativeBinomialDistribution > > const & unique_ptr_e8f3d84734c05381b4354cfc400b164c)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::NegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::NegativeBinomialDistribution > > & >(unique_ptr_e8f3d84734c05381b4354cfc400b164c).release()).ptr());
            std::shared_ptr< class ::statiskit::NegativeBinomialDistribution  > shared_ptr_e8f3d84734c05381b4354cfc400b164c(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::NegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::NegativeBinomialDistribution > > & >(unique_ptr_e8f3d84734c05381b4354cfc400b164c)));
            return boost::python::incref(boost::python::object(shared_ptr_e8f3d84734c05381b4354cfc400b164c).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::NegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::NegativeBinomialDistribution > >, unique_ptr_e8f3d84734c05381b4354cfc400b164c_to_python >();
}