#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_01656ed050645673a3d629a129fee2e7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::CategoricalUnivariateMixtureDistribution const * (::statiskit::LazyEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::MixtureDistributionEMEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation > >::*method_pointer_ddc154bed3965463aa1c76a8191f76f9)() const = &::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > >::Type, boost::python::bases< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > > class_01656ed050645673a3d629a129fee2e7("_LazyEstimation_01656ed050645673a3d629a129fee2e7", "", boost::python::no_init);
    class_01656ed050645673a3d629a129fee2e7.def(boost::python::init<  >(""));
    class_01656ed050645673a3d629a129fee2e7.def(boost::python::init< struct ::statiskit::CategoricalUnivariateMixtureDistribution const * >(""));
    class_01656ed050645673a3d629a129fee2e7.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > const & >(""));
    class_01656ed050645673a3d629a129fee2e7.def("get_estimated", method_pointer_ddc154bed3965463aa1c76a8191f76f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > >::Type, autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type >();
    }

}