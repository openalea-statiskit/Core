#include "_core.h"



namespace autowig
{

    void method_decorator_5f44fe47089d58ce8a031102a341157a(class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > > const & instance, const struct ::statiskit::UnivariateLocationEstimation::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_aa517e9d14595c32b4bf797f0280ed1f()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_aa517e9d14595c32b4bf797f0280ed1f_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > > const & unique_ptr_aa517e9d14595c32b4bf797f0280ed1f)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > > & >(unique_ptr_aa517e9d14595c32b4bf797f0280ed1f).release()).ptr());
            std::shared_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator  > shared_ptr_aa517e9d14595c32b4bf797f0280ed1f(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > > & >(unique_ptr_aa517e9d14595c32b4bf797f0280ed1f)));
            return boost::python::incref(boost::python::object(shared_ptr_aa517e9d14595c32b4bf797f0280ed1f).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > >, unique_ptr_aa517e9d14595c32b4bf797f0280ed1f_to_python >();
}