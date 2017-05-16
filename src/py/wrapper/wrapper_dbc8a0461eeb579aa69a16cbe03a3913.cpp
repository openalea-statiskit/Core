#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::BinomialDistributionMMEstimation const volatile * get_pointer<struct ::statiskit::BinomialDistributionMMEstimation const volatile >(struct ::statiskit::BinomialDistributionMMEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dbc8a0461eeb579aa69a16cbe03a3913()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::BinomialDistributionMMEstimation, autowig::Held< struct ::statiskit::BinomialDistributionMMEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_dbc8a0461eeb579aa69a16cbe03a3913("BinomialDistributionMMEstimation", "", boost::python::no_init);
    class_dbc8a0461eeb579aa69a16cbe03a3913.def(boost::python::init<  >(""));
    class_dbc8a0461eeb579aa69a16cbe03a3913.def(boost::python::init< class ::statiskit::BinomialDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_dbc8a0461eeb579aa69a16cbe03a3913.def(boost::python::init< struct ::statiskit::BinomialDistributionMMEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::BinomialDistributionMMEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::BinomialDistributionMMEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::BinomialDistributionMMEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::BinomialDistributionMMEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::BinomialDistributionMMEstimation >::Type, struct ::statiskit::BinomialDistributionMMEstimation > > >();
    }

}