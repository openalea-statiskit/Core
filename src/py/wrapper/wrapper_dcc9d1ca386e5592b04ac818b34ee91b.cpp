#include "_core.h"


void wrapper_dcc9d1ca386e5592b04ac818b34ee91b()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator > >  (*function_pointer_dcc9d1ca386e5592b04ac818b34ee91b)(class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator const &) = ::std::make_unique;
    boost::python::def("make_unique", function_pointer_dcc9d1ca386e5592b04ac818b34ee91b, "");
}