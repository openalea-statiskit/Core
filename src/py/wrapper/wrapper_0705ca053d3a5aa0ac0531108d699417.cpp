#include "_core.h"



namespace autowig
{

    void method_decorator_92af2615e4f65b0f8f0b3674cdd442d0(class ::std::unique_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::CovarianceMatrixEstimation::Estimator > > const & instance, struct ::statiskit::CovarianceMatrixEstimation::Estimator & param_out)     { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::CovarianceMatrixEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::CovarianceMatrixEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::CovarianceMatrixEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0705ca053d3a5aa0ac0531108d699417()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_0705ca053d3a5aa0ac0531108d699417_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::CovarianceMatrixEstimation::Estimator > > const & unique_ptr_0705ca053d3a5aa0ac0531108d699417)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::CovarianceMatrixEstimation::Estimator > > & >(unique_ptr_0705ca053d3a5aa0ac0531108d699417).release()).ptr());
            std::shared_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator  > shared_ptr_0705ca053d3a5aa0ac0531108d699417(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::CovarianceMatrixEstimation::Estimator > > & >(unique_ptr_0705ca053d3a5aa0ac0531108d699417)));
            return boost::python::incref(boost::python::object(shared_ptr_0705ca053d3a5aa0ac0531108d699417).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::CovarianceMatrixEstimation::Estimator > >, unique_ptr_0705ca053d3a5aa0ac0531108d699417_to_python >();
}