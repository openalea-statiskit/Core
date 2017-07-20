#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a432be7c31225d679b632287208f5f42()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::SplittingMixtureOperator const * (::statiskit::OptimizationEstimation< ::statiskit::SplittingMixtureOperator *, ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::*method_pointer_13aff2b13e0e5a069f91da4bbad1f1ac)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::get_iteration;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > > > class_a432be7c31225d679b632287208f5f42("_OptimizationEstimation_a432be7c31225d679b632287208f5f42", "", boost::python::no_init);
    class_a432be7c31225d679b632287208f5f42.def(boost::python::init<  >(""));
    class_a432be7c31225d679b632287208f5f42.def(boost::python::init< struct ::statiskit::SplittingMixtureOperator const *, struct ::statiskit::MultivariateData const * >(""));
    class_a432be7c31225d679b632287208f5f42.def(boost::python::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const & >(""));
    class_a432be7c31225d679b632287208f5f42.def("get_iteration", method_pointer_13aff2b13e0e5a069f91da4bbad1f1ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type >();
    }

}