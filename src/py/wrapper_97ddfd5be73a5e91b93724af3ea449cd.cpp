#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    void method_decorator_f93c1e93a0245b05b5e5bf3026df3134(class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > const & instance, struct ::statiskit::MultivariateDistributionEstimation & param_out)     { instance.operator*() = param_out; }
}


void wrapper_97ddfd5be73a5e91b93724af3ea449cd()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_97ddfd5be73a5e91b93724af3ea449cd_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > const & unique_ptr_97ddfd5be73a5e91b93724af3ea449cd)
        {
            std::shared_ptr< struct ::statiskit::MultivariateDistributionEstimation  > shared_ptr_97ddfd5be73a5e91b93724af3ea449cd(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > & >(unique_ptr_97ddfd5be73a5e91b93724af3ea449cd)));
            return boost::python::incref(boost::python::object(shared_ptr_97ddfd5be73a5e91b93724af3ea449cd).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >, unique_ptr_97ddfd5be73a5e91b93724af3ea449cd_to_python >();
}