#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > const volatile >(class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    void method_decorator_cb48823d3bd55083b26b4347b10b3e4c(class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > const & instance, struct ::statiskit::UnivariateEvent & param_out)     { instance.operator*() = param_out; }
}


void wrapper_0e41540d879f5526a70e316582f05d49()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_0e41540d879f5526a70e316582f05d49_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > const & unique_ptr_0e41540d879f5526a70e316582f05d49)
        {
            std::shared_ptr< struct ::statiskit::UnivariateEvent  > shared_ptr_0e41540d879f5526a70e316582f05d49(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > & >(unique_ptr_0e41540d879f5526a70e316582f05d49)));
            return boost::python::incref(boost::python::object(shared_ptr_0e41540d879f5526a70e316582f05d49).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >, unique_ptr_0e41540d879f5526a70e316582f05d49_to_python >();
}