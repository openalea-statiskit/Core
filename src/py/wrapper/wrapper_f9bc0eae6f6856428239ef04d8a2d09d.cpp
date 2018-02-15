#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f9bc0eae6f6856428239ef04d8a2d09d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::ContinuousUnivariateMixtureDistribution const * (::statiskit::LazyEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::MixtureDistributionEMEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation > >::*method_pointer_d5d91b506c0852b8b07855f11b0ce672)() const = &::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > >::Type, boost::python::bases< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > class_f9bc0eae6f6856428239ef04d8a2d09d("_LazyEstimation_f9bc0eae6f6856428239ef04d8a2d09d", "", boost::python::no_init);
    class_f9bc0eae6f6856428239ef04d8a2d09d.def(boost::python::init<  >(""));
    class_f9bc0eae6f6856428239ef04d8a2d09d.def(boost::python::init< struct ::statiskit::ContinuousUnivariateMixtureDistribution const * >(""));
    class_f9bc0eae6f6856428239ef04d8a2d09d.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > const & >(""));
    class_f9bc0eae6f6856428239ef04d8a2d09d.def("get_estimated", method_pointer_d5d91b506c0852b8b07855f11b0ce672, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > >::Type, autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type >();
    }

}