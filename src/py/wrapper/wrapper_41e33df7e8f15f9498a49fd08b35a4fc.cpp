#include "_core.h"



namespace autowig
{

    void method_decorator_bb01f707748457378190e827a422c293(class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > > const & instance, const struct ::statiskit::MultivariateLocationEstimation::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_41e33df7e8f15f9498a49fd08b35a4fc()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_41e33df7e8f15f9498a49fd08b35a4fc_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > > const & unique_ptr_41e33df7e8f15f9498a49fd08b35a4fc)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > > & >(unique_ptr_41e33df7e8f15f9498a49fd08b35a4fc).release()).ptr());
            std::shared_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator  > shared_ptr_41e33df7e8f15f9498a49fd08b35a4fc(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > > & >(unique_ptr_41e33df7e8f15f9498a49fd08b35a4fc)));
            return boost::python::incref(boost::python::object(shared_ptr_41e33df7e8f15f9498a49fd08b35a4fc).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > >, unique_ptr_41e33df7e8f15f9498a49fd08b35a4fc_to_python >();
}