#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c59e51f6890258a9ba8c5278b4a98b7b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::DiscreteUnivariateMixtureDistribution const * (::statiskit::LazyEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::MixtureDistributionEMEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation > >::*method_pointer_46ba4c61bc965e5a8694c34f0f65dd03)() const = &::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > >::Type, boost::python::bases< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_c59e51f6890258a9ba8c5278b4a98b7b("_LazyEstimation_c59e51f6890258a9ba8c5278b4a98b7b", "", boost::python::no_init);
    class_c59e51f6890258a9ba8c5278b4a98b7b.def(boost::python::init<  >(""));
    class_c59e51f6890258a9ba8c5278b4a98b7b.def(boost::python::init< struct ::statiskit::DiscreteUnivariateMixtureDistribution const * >(""));
    class_c59e51f6890258a9ba8c5278b4a98b7b.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > const & >(""));
    class_c59e51f6890258a9ba8c5278b4a98b7b.def("get_estimated", method_pointer_46ba4c61bc965e5a8694c34f0f65dd03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > >::Type, autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}