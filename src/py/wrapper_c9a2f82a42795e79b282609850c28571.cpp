#include "_core.h"


namespace autowig
{
}


void wrapper_c9a2f82a42795e79b282609850c28571()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::MeanEstimation::*method_pointer_84ec59a1ad2b5bd0a929a94ebc54efe3)() const = &::statiskit::MeanEstimation::get_mean;
    boost::python::class_< struct ::statiskit::MeanEstimation, autowig::Held< struct ::statiskit::MeanEstimation >::Type, boost::noncopyable > class_c9a2f82a42795e79b282609850c28571("MeanEstimation", "", boost::python::no_init);
    class_c9a2f82a42795e79b282609850c28571.def("get_mean", method_pointer_84ec59a1ad2b5bd0a929a94ebc54efe3, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}