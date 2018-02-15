#include "_core.h"



namespace autowig
{

    void method_decorator_15dc1cce489e5b45a4443cd7f1c08fbb(class ::std::unique_ptr< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator > > const & instance, const struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_46cb15530ddd5dbf8f9204dd687d8405()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_46cb15530ddd5dbf8f9204dd687d8405_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator > > const & unique_ptr_46cb15530ddd5dbf8f9204dd687d8405)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator > > & >(unique_ptr_46cb15530ddd5dbf8f9204dd687d8405).release()).ptr());
            std::shared_ptr< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator  > shared_ptr_46cb15530ddd5dbf8f9204dd687d8405(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator > > & >(unique_ptr_46cb15530ddd5dbf8f9204dd687d8405)));
            return boost::python::incref(boost::python::object(shared_ptr_46cb15530ddd5dbf8f9204dd687d8405).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator > >, unique_ptr_46cb15530ddd5dbf8f9204dd687d8405_to_python >();
}