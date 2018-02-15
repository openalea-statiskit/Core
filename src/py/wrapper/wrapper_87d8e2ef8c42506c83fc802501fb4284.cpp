#include "_core.h"



namespace autowig
{

    void method_decorator_8431548d625e5fb2bbf06657a8ece556(class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > > const & instance, const struct ::statiskit::UnivariateLocationEstimation & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > > const volatile >(class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_87d8e2ef8c42506c83fc802501fb4284()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_87d8e2ef8c42506c83fc802501fb4284_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > > const & unique_ptr_87d8e2ef8c42506c83fc802501fb4284)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > > & >(unique_ptr_87d8e2ef8c42506c83fc802501fb4284).release()).ptr());
            std::shared_ptr< struct ::statiskit::UnivariateLocationEstimation  > shared_ptr_87d8e2ef8c42506c83fc802501fb4284(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > > & >(unique_ptr_87d8e2ef8c42506c83fc802501fb4284)));
            return boost::python::incref(boost::python::object(shared_ptr_87d8e2ef8c42506c83fc802501fb4284).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > >, unique_ptr_87d8e2ef8c42506c83fc802501fb4284_to_python >();
}