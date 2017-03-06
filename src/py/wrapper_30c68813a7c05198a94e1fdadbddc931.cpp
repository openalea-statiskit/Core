#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    void method_decorator_bf9c46c7479a5c3599f286739ab7677c(class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > const & instance, struct ::statiskit::MultivariateData & param_out)     { instance.operator*() = param_out; }
}


void wrapper_30c68813a7c05198a94e1fdadbddc931()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_30c68813a7c05198a94e1fdadbddc931_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > const & unique_ptr_30c68813a7c05198a94e1fdadbddc931)
        {
            std::shared_ptr< struct ::statiskit::MultivariateData  > shared_ptr_30c68813a7c05198a94e1fdadbddc931(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > & >(unique_ptr_30c68813a7c05198a94e1fdadbddc931)));
            return boost::python::incref(boost::python::object(shared_ptr_30c68813a7c05198a94e1fdadbddc931).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >, unique_ptr_30c68813a7c05198a94e1fdadbddc931_to_python >();
}