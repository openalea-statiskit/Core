#include "_core.h"



namespace autowig
{

    void method_decorator_e7cbaf56db485aafb5f7222341ef77ee(class ::std::unique_ptr< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator > > const & instance, const struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7cbbf4b9923d5fb6a3e309d720bafe76()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_7cbbf4b9923d5fb6a3e309d720bafe76_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator > > const & unique_ptr_7cbbf4b9923d5fb6a3e309d720bafe76)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator > > & >(unique_ptr_7cbbf4b9923d5fb6a3e309d720bafe76).release()).ptr());
            std::shared_ptr< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator  > shared_ptr_7cbbf4b9923d5fb6a3e309d720bafe76(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator > > & >(unique_ptr_7cbbf4b9923d5fb6a3e309d720bafe76)));
            return boost::python::incref(boost::python::object(shared_ptr_7cbbf4b9923d5fb6a3e309d720bafe76).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator > >, unique_ptr_7cbbf4b9923d5fb6a3e309d720bafe76_to_python >();
}