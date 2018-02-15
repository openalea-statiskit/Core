#include "_core.h"



namespace autowig
{

    void method_decorator_211dad9c8dcc5642a2d6a45454edf5a7(class ::std::unique_ptr< class ::statiskit::MultivariateDataFrame, struct ::std::default_delete< class ::statiskit::MultivariateDataFrame > > const & instance, const class ::statiskit::MultivariateDataFrame & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::MultivariateDataFrame, struct ::std::default_delete< class ::statiskit::MultivariateDataFrame > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::MultivariateDataFrame, struct ::std::default_delete< class ::statiskit::MultivariateDataFrame > > const volatile >(class ::std::unique_ptr< class ::statiskit::MultivariateDataFrame, struct ::std::default_delete< class ::statiskit::MultivariateDataFrame > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1c83b12a81d05462a483f288388dbb3e()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_1c83b12a81d05462a483f288388dbb3e_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::MultivariateDataFrame, struct ::std::default_delete< class ::statiskit::MultivariateDataFrame > > const & unique_ptr_1c83b12a81d05462a483f288388dbb3e)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::MultivariateDataFrame, struct ::std::default_delete< class ::statiskit::MultivariateDataFrame > > & >(unique_ptr_1c83b12a81d05462a483f288388dbb3e).release()).ptr());
            std::shared_ptr< class ::statiskit::MultivariateDataFrame  > shared_ptr_1c83b12a81d05462a483f288388dbb3e(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::MultivariateDataFrame, struct ::std::default_delete< class ::statiskit::MultivariateDataFrame > > & >(unique_ptr_1c83b12a81d05462a483f288388dbb3e)));
            return boost::python::incref(boost::python::object(shared_ptr_1c83b12a81d05462a483f288388dbb3e).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::MultivariateDataFrame, struct ::std::default_delete< class ::statiskit::MultivariateDataFrame > >, unique_ptr_1c83b12a81d05462a483f288388dbb3e_to_python >();
}