#include "_core.h"



namespace autowig
{

    void method_decorator_c64629bff0785454948de7f63d2aff09(class ::std::unique_ptr< class ::statiskit::CovarianceMatrixEstimation, struct ::std::default_delete< class ::statiskit::CovarianceMatrixEstimation > > const & instance, class ::statiskit::CovarianceMatrixEstimation & param_out)     { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::CovarianceMatrixEstimation, struct ::std::default_delete< class ::statiskit::CovarianceMatrixEstimation > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::CovarianceMatrixEstimation, struct ::std::default_delete< class ::statiskit::CovarianceMatrixEstimation > > const volatile >(class ::std::unique_ptr< class ::statiskit::CovarianceMatrixEstimation, struct ::std::default_delete< class ::statiskit::CovarianceMatrixEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_bf742a807d5054c483c71bc86d3edf4f()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_bf742a807d5054c483c71bc86d3edf4f_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::CovarianceMatrixEstimation, struct ::std::default_delete< class ::statiskit::CovarianceMatrixEstimation > > const & unique_ptr_bf742a807d5054c483c71bc86d3edf4f)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::CovarianceMatrixEstimation, struct ::std::default_delete< class ::statiskit::CovarianceMatrixEstimation > > & >(unique_ptr_bf742a807d5054c483c71bc86d3edf4f).release()).ptr());
            std::shared_ptr< class ::statiskit::CovarianceMatrixEstimation  > shared_ptr_bf742a807d5054c483c71bc86d3edf4f(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::CovarianceMatrixEstimation, struct ::std::default_delete< class ::statiskit::CovarianceMatrixEstimation > > & >(unique_ptr_bf742a807d5054c483c71bc86d3edf4f)));
            return boost::python::incref(boost::python::object(shared_ptr_bf742a807d5054c483c71bc86d3edf4f).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::CovarianceMatrixEstimation, struct ::std::default_delete< class ::statiskit::CovarianceMatrixEstimation > >, unique_ptr_bf742a807d5054c483c71bc86d3edf4f_to_python >();
}