#include "_core.h"



namespace autowig
{

    void method_decorator_753243b150b75d1cacde60aaf4eeb3b0(class ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation::Estimator > > const & instance, struct ::statiskit::MeanVectorEstimation::Estimator & param_out)     { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_697d360d83db501b932e60e19cf5de08()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_697d360d83db501b932e60e19cf5de08_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation::Estimator > > const & unique_ptr_697d360d83db501b932e60e19cf5de08)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation::Estimator > > & >(unique_ptr_697d360d83db501b932e60e19cf5de08).release()).ptr());
            std::shared_ptr< struct ::statiskit::MeanVectorEstimation::Estimator  > shared_ptr_697d360d83db501b932e60e19cf5de08(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation::Estimator > > & >(unique_ptr_697d360d83db501b932e60e19cf5de08)));
            return boost::python::incref(boost::python::object(shared_ptr_697d360d83db501b932e60e19cf5de08).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation::Estimator > >, unique_ptr_697d360d83db501b932e60e19cf5de08_to_python >();
}