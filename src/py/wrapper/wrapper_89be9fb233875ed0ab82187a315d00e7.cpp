#include "_core.h"



namespace autowig
{

    void method_decorator_d4a73547b6265f89acbfcd9a59c4bc0b(class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > > const & instance, const struct ::statiskit::MultivariateLocationEstimation & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_89be9fb233875ed0ab82187a315d00e7()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_89be9fb233875ed0ab82187a315d00e7_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > > const & unique_ptr_89be9fb233875ed0ab82187a315d00e7)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > > & >(unique_ptr_89be9fb233875ed0ab82187a315d00e7).release()).ptr());
            std::shared_ptr< struct ::statiskit::MultivariateLocationEstimation  > shared_ptr_89be9fb233875ed0ab82187a315d00e7(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > > & >(unique_ptr_89be9fb233875ed0ab82187a315d00e7)));
            return boost::python::incref(boost::python::object(shared_ptr_89be9fb233875ed0ab82187a315d00e7).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > >, unique_ptr_89be9fb233875ed0ab82187a315d00e7_to_python >();
}