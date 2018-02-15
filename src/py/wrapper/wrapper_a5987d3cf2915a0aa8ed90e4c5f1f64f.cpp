#include "_core.h"



namespace autowig
{

    void method_decorator_08bf751b26e954a4b5cfac4607d60bd8(class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > > const & instance, const struct ::statiskit::MultivariateDispersionEstimation::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a5987d3cf2915a0aa8ed90e4c5f1f64f()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_a5987d3cf2915a0aa8ed90e4c5f1f64f_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > > const & unique_ptr_a5987d3cf2915a0aa8ed90e4c5f1f64f)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > > & >(unique_ptr_a5987d3cf2915a0aa8ed90e4c5f1f64f).release()).ptr());
            std::shared_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator  > shared_ptr_a5987d3cf2915a0aa8ed90e4c5f1f64f(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > > & >(unique_ptr_a5987d3cf2915a0aa8ed90e4c5f1f64f)));
            return boost::python::incref(boost::python::object(shared_ptr_a5987d3cf2915a0aa8ed90e4c5f1f64f).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > >, unique_ptr_a5987d3cf2915a0aa8ed90e4c5f1f64f_to_python >();
}