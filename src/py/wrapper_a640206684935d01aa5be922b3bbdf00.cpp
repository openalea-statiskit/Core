#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::BinomialDistributionMLEstimation const volatile * get_pointer<struct ::statiskit::BinomialDistributionMLEstimation const volatile >(struct ::statiskit::BinomialDistributionMLEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a640206684935d01aa5be922b3bbdf00()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::BinomialDistributionMLEstimation, autowig::Held< struct ::statiskit::BinomialDistributionMLEstimation >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_a640206684935d01aa5be922b3bbdf00("BinomialDistributionMLEstimation", "", boost::python::no_init);
    class_a640206684935d01aa5be922b3bbdf00.def(boost::python::init< class ::statiskit::BinomialDistribution const *, struct ::statiskit::UnivariateData const * >(""));

    if(autowig::Held< struct ::statiskit::BinomialDistributionMLEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::BinomialDistributionMLEstimation >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::BinomialDistributionMLEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::BinomialDistributionMLEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::BinomialDistributionMLEstimation >::Type, struct ::statiskit::BinomialDistributionMLEstimation > > >();
    }

}