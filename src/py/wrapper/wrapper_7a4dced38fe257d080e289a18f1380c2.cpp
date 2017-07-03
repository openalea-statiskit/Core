#include "_core.h"



namespace autowig
{

    void method_decorator_f9066bbcdce95d078f4caa8e00cb44ac(class ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > > const & instance, const struct ::statiskit::MeanEstimation::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7a4dced38fe257d080e289a18f1380c2()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_7a4dced38fe257d080e289a18f1380c2_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > > const & unique_ptr_7a4dced38fe257d080e289a18f1380c2)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > > & >(unique_ptr_7a4dced38fe257d080e289a18f1380c2).release()).ptr());
            std::shared_ptr< struct ::statiskit::MeanEstimation::Estimator  > shared_ptr_7a4dced38fe257d080e289a18f1380c2(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > > & >(unique_ptr_7a4dced38fe257d080e289a18f1380c2)));
            return boost::python::incref(boost::python::object(shared_ptr_7a4dced38fe257d080e289a18f1380c2).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > >, unique_ptr_7a4dced38fe257d080e289a18f1380c2_to_python >();
}