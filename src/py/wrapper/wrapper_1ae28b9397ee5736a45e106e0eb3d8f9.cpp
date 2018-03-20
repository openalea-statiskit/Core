#include "_core.h"



namespace autowig
{

    void method_decorator_e691984a4d3f5bc7b85ea1fd5e9c3233(class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > const & instance, const struct ::statiskit::SingularDistributionEstimation::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1ae28b9397ee5736a45e106e0eb3d8f9()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_1ae28b9397ee5736a45e106e0eb3d8f9_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > const & unique_ptr_1ae28b9397ee5736a45e106e0eb3d8f9)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > & >(unique_ptr_1ae28b9397ee5736a45e106e0eb3d8f9).release()).ptr());
            std::shared_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator  > shared_ptr_1ae28b9397ee5736a45e106e0eb3d8f9(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > & >(unique_ptr_1ae28b9397ee5736a45e106e0eb3d8f9)));
            return boost::python::incref(boost::python::object(shared_ptr_1ae28b9397ee5736a45e106e0eb3d8f9).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > >, unique_ptr_1ae28b9397ee5736a45e106e0eb3d8f9_to_python >();
}