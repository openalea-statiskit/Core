#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MeanEstimation::Estimator const volatile * get_pointer<struct ::statiskit::MeanEstimation::Estimator const volatile >(struct ::statiskit::MeanEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_38789725488459f2828bf83b439865f4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c9a2f82a42795e79b282609850c28571 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._mean_estimation");
    boost::python::object module_c9a2f82a42795e79b282609850c28571(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c9a2f82a42795e79b282609850c28571.c_str()))));
    boost::python::scope().attr("_mean_estimation") = module_c9a2f82a42795e79b282609850c28571;
    boost::python::scope scope_c9a2f82a42795e79b282609850c28571 = module_c9a2f82a42795e79b282609850c28571;
    class ::std::shared_ptr< struct ::statiskit::MeanEstimation >  (::statiskit::MeanEstimation::Estimator::*method_pointer_1b78210aabce58ada0deee362586d166)(class ::std::shared_ptr< struct ::statiskit::UnivariateData > const) const = &::statiskit::MeanEstimation::Estimator::operator();
    boost::python::class_< struct ::statiskit::MeanEstimation::Estimator, autowig::Held< struct ::statiskit::MeanEstimation::Estimator >::Type, boost::noncopyable > class_38789725488459f2828bf83b439865f4("Estimator", "", boost::python::no_init);
    class_38789725488459f2828bf83b439865f4.def("__call__", method_pointer_1b78210aabce58ada0deee362586d166, "");

}