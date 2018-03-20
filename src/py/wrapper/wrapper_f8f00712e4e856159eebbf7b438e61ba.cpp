#include "_core.h"



namespace autowig
{

    void method_decorator_c0bff0bcb0eb52ed88f82356f31276ad(class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > > const & instance, const class ::statiskit::MultivariateDispersionEstimation & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > > const volatile >(class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f8f00712e4e856159eebbf7b438e61ba()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_f8f00712e4e856159eebbf7b438e61ba_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > > const & unique_ptr_f8f00712e4e856159eebbf7b438e61ba)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > > & >(unique_ptr_f8f00712e4e856159eebbf7b438e61ba).release()).ptr());
            std::shared_ptr< class ::statiskit::MultivariateDispersionEstimation  > shared_ptr_f8f00712e4e856159eebbf7b438e61ba(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > > & >(unique_ptr_f8f00712e4e856159eebbf7b438e61ba)));
            return boost::python::incref(boost::python::object(shared_ptr_f8f00712e4e856159eebbf7b438e61ba).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > >, unique_ptr_f8f00712e4e856159eebbf7b438e61ba_to_python >();
}