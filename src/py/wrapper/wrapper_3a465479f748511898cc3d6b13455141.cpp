#include "_core.h"



namespace autowig
{

    void method_decorator_2c576a0de12e5757a80589a7ad84a2ec(class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > > const & instance, const struct ::statiskit::UnivariateDispersionEstimation::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3a465479f748511898cc3d6b13455141()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_3a465479f748511898cc3d6b13455141_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > > const & unique_ptr_3a465479f748511898cc3d6b13455141)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > > & >(unique_ptr_3a465479f748511898cc3d6b13455141).release()).ptr());
            std::shared_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator  > shared_ptr_3a465479f748511898cc3d6b13455141(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > > & >(unique_ptr_3a465479f748511898cc3d6b13455141)));
            return boost::python::incref(boost::python::object(shared_ptr_3a465479f748511898cc3d6b13455141).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > >, unique_ptr_3a465479f748511898cc3d6b13455141_to_python >();
}