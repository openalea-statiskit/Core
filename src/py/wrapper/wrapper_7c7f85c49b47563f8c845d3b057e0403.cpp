#include "_core.h"



namespace autowig
{

    void method_decorator_3c2e8d521a0350d6ba7f13dc6750a417(class ::std::unique_ptr< class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::std::default_delete< class ::statiskit::SplittingDistributionEstimation::Estimator > > const & instance, const class ::statiskit::SplittingDistributionEstimation::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::std::default_delete< class ::statiskit::SplittingDistributionEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::std::default_delete< class ::statiskit::SplittingDistributionEstimation::Estimator > > const volatile >(class ::std::unique_ptr< class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::std::default_delete< class ::statiskit::SplittingDistributionEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7c7f85c49b47563f8c845d3b057e0403()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_7c7f85c49b47563f8c845d3b057e0403_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::std::default_delete< class ::statiskit::SplittingDistributionEstimation::Estimator > > const & unique_ptr_7c7f85c49b47563f8c845d3b057e0403)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::std::default_delete< class ::statiskit::SplittingDistributionEstimation::Estimator > > & >(unique_ptr_7c7f85c49b47563f8c845d3b057e0403).release()).ptr());
            std::shared_ptr< class ::statiskit::SplittingDistributionEstimation::Estimator  > shared_ptr_7c7f85c49b47563f8c845d3b057e0403(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::std::default_delete< class ::statiskit::SplittingDistributionEstimation::Estimator > > & >(unique_ptr_7c7f85c49b47563f8c845d3b057e0403)));
            return boost::python::incref(boost::python::object(shared_ptr_7c7f85c49b47563f8c845d3b057e0403).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::std::default_delete< class ::statiskit::SplittingDistributionEstimation::Estimator > >, unique_ptr_7c7f85c49b47563f8c845d3b057e0403_to_python >();
}