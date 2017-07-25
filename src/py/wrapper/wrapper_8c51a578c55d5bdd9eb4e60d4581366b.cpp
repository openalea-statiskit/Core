#include "_core.h"



namespace autowig
{

    void method_decorator_b693b91fd62c5c3c95dbeda328fc8440(class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > const & instance, const struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8c51a578c55d5bdd9eb4e60d4581366b()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_8c51a578c55d5bdd9eb4e60d4581366b_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > const & unique_ptr_8c51a578c55d5bdd9eb4e60d4581366b)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > & >(unique_ptr_8c51a578c55d5bdd9eb4e60d4581366b).release()).ptr());
            std::shared_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator  > shared_ptr_8c51a578c55d5bdd9eb4e60d4581366b(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > & >(unique_ptr_8c51a578c55d5bdd9eb4e60d4581366b)));
            return boost::python::incref(boost::python::object(shared_ptr_8c51a578c55d5bdd9eb4e60d4581366b).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >, unique_ptr_8c51a578c55d5bdd9eb4e60d4581366b_to_python >();
}