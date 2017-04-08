#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_eddfddadfccc5e56b9e809e952641f6b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_44fc68f5bbf8569f90746af49cb3675e)() const = &::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_eddfddadfccc5e56b9e809e952641f6b("_ActiveEstimation_eddfddadfccc5e56b9e809e952641f6b", "", boost::python::no_init);
    class_eddfddadfccc5e56b9e809e952641f6b.def(boost::python::init<  >(""));
    class_eddfddadfccc5e56b9e809e952641f6b.def(boost::python::init< struct ::statiskit::DiscreteUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_eddfddadfccc5e56b9e809e952641f6b.def(boost::python::init< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_eddfddadfccc5e56b9e809e952641f6b.def("get_data", method_pointer_44fc68f5bbf8569f90746af49cb3675e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > >();
    }

}