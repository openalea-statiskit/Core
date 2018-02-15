#include "_core.h"


void wrapper_b3e5120c9f8d5568bdd546ced505be5c()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    class ::std::unique_ptr< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::std::default_delete< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > >  (*function_pointer_b3e5120c9f8d5568bdd546ced505be5c)(class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const &) = ::std::make_unique;
    boost::python::def("make_unique", function_pointer_b3e5120c9f8d5568bdd546ced505be5c, "");
}