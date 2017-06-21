#include "_core.h"



namespace autowig
{

    void method_decorator_42a42ba3983d58b286bd89c1297d1ee8(class ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > > const & instance, struct ::statiskit::VarianceEstimation::Estimator & param_out)     { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_90f8ab28ca53501ab4546a523f40346a()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_90f8ab28ca53501ab4546a523f40346a_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > > const & unique_ptr_90f8ab28ca53501ab4546a523f40346a)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > > & >(unique_ptr_90f8ab28ca53501ab4546a523f40346a).release()).ptr());
            std::shared_ptr< struct ::statiskit::VarianceEstimation::Estimator  > shared_ptr_90f8ab28ca53501ab4546a523f40346a(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > > & >(unique_ptr_90f8ab28ca53501ab4546a523f40346a)));
            return boost::python::incref(boost::python::object(shared_ptr_90f8ab28ca53501ab4546a523f40346a).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > >, unique_ptr_90f8ab28ca53501ab4546a523f40346a_to_python >();
}