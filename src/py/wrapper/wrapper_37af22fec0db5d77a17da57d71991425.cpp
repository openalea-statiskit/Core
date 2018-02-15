#include "_core.h"



namespace autowig
{

    void method_decorator_7d83424fc675525cad982287f2e2f62d(class ::std::unique_ptr< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::std::default_delete< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > const & instance, const class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::std::default_delete< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::std::default_delete< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > const volatile >(class ::std::unique_ptr< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::std::default_delete< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_37af22fec0db5d77a17da57d71991425()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_37af22fec0db5d77a17da57d71991425_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::std::default_delete< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > const & unique_ptr_37af22fec0db5d77a17da57d71991425)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::std::default_delete< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > & >(unique_ptr_37af22fec0db5d77a17da57d71991425).release()).ptr());
            std::shared_ptr< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator  > shared_ptr_37af22fec0db5d77a17da57d71991425(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::std::default_delete< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > & >(unique_ptr_37af22fec0db5d77a17da57d71991425)));
            return boost::python::incref(boost::python::object(shared_ptr_37af22fec0db5d77a17da57d71991425).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::std::default_delete< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > >, unique_ptr_37af22fec0db5d77a17da57d71991425_to_python >();
}