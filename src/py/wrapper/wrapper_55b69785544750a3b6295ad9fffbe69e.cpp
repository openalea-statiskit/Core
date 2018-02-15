#include "_core.h"



namespace autowig
{

    void method_decorator_06ed95cc073a527a97893900084abcb5(class ::std::unique_ptr< class ::statiskit::BetaNegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaNegativeBinomialDistribution > > const & instance, const class ::statiskit::BetaNegativeBinomialDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::BetaNegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaNegativeBinomialDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::BetaNegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaNegativeBinomialDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::BetaNegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaNegativeBinomialDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_55b69785544750a3b6295ad9fffbe69e()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_55b69785544750a3b6295ad9fffbe69e_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::BetaNegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaNegativeBinomialDistribution > > const & unique_ptr_55b69785544750a3b6295ad9fffbe69e)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::BetaNegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaNegativeBinomialDistribution > > & >(unique_ptr_55b69785544750a3b6295ad9fffbe69e).release()).ptr());
            std::shared_ptr< class ::statiskit::BetaNegativeBinomialDistribution  > shared_ptr_55b69785544750a3b6295ad9fffbe69e(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::BetaNegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaNegativeBinomialDistribution > > & >(unique_ptr_55b69785544750a3b6295ad9fffbe69e)));
            return boost::python::incref(boost::python::object(shared_ptr_55b69785544750a3b6295ad9fffbe69e).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::BetaNegativeBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaNegativeBinomialDistribution > >, unique_ptr_55b69785544750a3b6295ad9fffbe69e_to_python >();
}