#include "_core.h"



namespace autowig
{

    void method_decorator_7269500856715283935d7ab94c23cd30(class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > > const & instance, const class ::statiskit::UnivariateDispersionEstimation & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > > const volatile >(class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cf5d31feb9b059de8352d654f997199c()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_cf5d31feb9b059de8352d654f997199c_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > > const & unique_ptr_cf5d31feb9b059de8352d654f997199c)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > > & >(unique_ptr_cf5d31feb9b059de8352d654f997199c).release()).ptr());
            std::shared_ptr< class ::statiskit::UnivariateDispersionEstimation  > shared_ptr_cf5d31feb9b059de8352d654f997199c(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > > & >(unique_ptr_cf5d31feb9b059de8352d654f997199c)));
            return boost::python::incref(boost::python::object(shared_ptr_cf5d31feb9b059de8352d654f997199c).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > >, unique_ptr_cf5d31feb9b059de8352d654f997199c_to_python >();
}