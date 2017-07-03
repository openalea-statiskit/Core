#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::LogarithmicDistributionMLEstimation const volatile * get_pointer<struct ::statiskit::LogarithmicDistributionMLEstimation const volatile >(struct ::statiskit::LogarithmicDistributionMLEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d57080a5d88f5beaa3f8f3ee09b1da8c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::LogarithmicDistributionMLEstimation, autowig::Held< struct ::statiskit::LogarithmicDistributionMLEstimation >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_d57080a5d88f5beaa3f8f3ee09b1da8c("LogarithmicDistributionMLEstimation", "", boost::python::no_init);
    class_d57080a5d88f5beaa3f8f3ee09b1da8c.def(boost::python::init<  >(""));
    class_d57080a5d88f5beaa3f8f3ee09b1da8c.def(boost::python::init< class ::statiskit::LogarithmicDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_d57080a5d88f5beaa3f8f3ee09b1da8c.def(boost::python::init< struct ::statiskit::LogarithmicDistributionMLEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::LogarithmicDistributionMLEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::LogarithmicDistributionMLEstimation >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}