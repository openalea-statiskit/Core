#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile >(class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_099f33625b8c56688a7b3e04cbb36b62()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::statiskit::ContinuousUnivariateMixtureDistribution *, ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_833e7c2de4275589a63f3df93e4620d3)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::size;
    boost::python::class_< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > class_099f33625b8c56688a7b3e04cbb36b62("_OptimizationEstimationImpl_099f33625b8c56688a7b3e04cbb36b62", "", boost::python::no_init);
    class_099f33625b8c56688a7b3e04cbb36b62.def(boost::python::init<  >(""));
    class_099f33625b8c56688a7b3e04cbb36b62.def(boost::python::init< struct ::statiskit::ContinuousUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_099f33625b8c56688a7b3e04cbb36b62.def(boost::python::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >(""));
    class_099f33625b8c56688a7b3e04cbb36b62.def("__len__", method_pointer_833e7c2de4275589a63f3df93e4620d3, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type >();
    }

}