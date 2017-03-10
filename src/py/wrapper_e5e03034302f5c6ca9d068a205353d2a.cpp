#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NegativeBinomialDistributionMLEstimation const volatile * get_pointer<struct ::statiskit::NegativeBinomialDistributionMLEstimation const volatile >(struct ::statiskit::NegativeBinomialDistributionMLEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e5e03034302f5c6ca9d068a205353d2a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::NegativeBinomialDistributionMLEstimation, autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_e5e03034302f5c6ca9d068a205353d2a("NegativeBinomialDistributionMLEstimation", "", boost::python::no_init);
    class_e5e03034302f5c6ca9d068a205353d2a.def(boost::python::init< class ::statiskit::NegativeBinomialDistribution const *, struct ::statiskit::UnivariateData const * >(""));

    if(autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::NegativeBinomialDistributionMLEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation >::Type, struct ::statiskit::NegativeBinomialDistributionMLEstimation > > >();
    }

}