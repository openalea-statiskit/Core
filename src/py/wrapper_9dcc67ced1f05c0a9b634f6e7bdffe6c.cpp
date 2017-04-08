#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9dcc67ced1f05c0a9b634f6e7bdffe6c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::UnivariateDistribution const * (::statiskit::LazyEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_09d1e32240185a3e8207437625b8abc8)() const = &::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_9dcc67ced1f05c0a9b634f6e7bdffe6c("_LazyEstimation_9dcc67ced1f05c0a9b634f6e7bdffe6c", "", boost::python::no_init);
    class_9dcc67ced1f05c0a9b634f6e7bdffe6c.def(boost::python::init<  >(""));
    class_9dcc67ced1f05c0a9b634f6e7bdffe6c.def(boost::python::init< struct ::statiskit::DiscreteUnivariateMixtureDistribution const * >(""));
    class_9dcc67ced1f05c0a9b634f6e7bdffe6c.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_9dcc67ced1f05c0a9b634f6e7bdffe6c.def("get_estimated", method_pointer_09d1e32240185a3e8207437625b8abc8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > >();
    }

}