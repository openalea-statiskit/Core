#include "_core.h"



namespace autowig
{

    void method_decorator_3cc287511a945c1589b02aa98845972b(class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > const & instance, const struct ::statiskit::UnivariateData & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > const volatile >(class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b3b19a6f3e2a5de28de1bc7ac29a0253()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_b3b19a6f3e2a5de28de1bc7ac29a0253_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > const & unique_ptr_b3b19a6f3e2a5de28de1bc7ac29a0253)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > & >(unique_ptr_b3b19a6f3e2a5de28de1bc7ac29a0253).release()).ptr());
            std::shared_ptr< struct ::statiskit::UnivariateData  > shared_ptr_b3b19a6f3e2a5de28de1bc7ac29a0253(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > & >(unique_ptr_b3b19a6f3e2a5de28de1bc7ac29a0253)));
            return boost::python::incref(boost::python::object(shared_ptr_b3b19a6f3e2a5de28de1bc7ac29a0253).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >, unique_ptr_b3b19a6f3e2a5de28de1bc7ac29a0253_to_python >();
}