#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::VarianceEstimation::Estimator const volatile * get_pointer<struct ::statiskit::VarianceEstimation::Estimator const volatile >(struct ::statiskit::VarianceEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_ce83e073e997563e890b79b6b3db0bed()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_99c254a34dca5e70bdf05b701c5b7360 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._variance_estimation");
    boost::python::object module_99c254a34dca5e70bdf05b701c5b7360(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_99c254a34dca5e70bdf05b701c5b7360.c_str()))));
    boost::python::scope().attr("_variance_estimation") = module_99c254a34dca5e70bdf05b701c5b7360;
    boost::python::scope scope_99c254a34dca5e70bdf05b701c5b7360 = module_99c254a34dca5e70bdf05b701c5b7360;
    boost::python::class_< struct ::statiskit::VarianceEstimation::Estimator, autowig::Held< struct ::statiskit::VarianceEstimation::Estimator >::Type, boost::noncopyable > class_ce83e073e997563e890b79b6b3db0bed("Estimator", "", boost::python::no_init);

}