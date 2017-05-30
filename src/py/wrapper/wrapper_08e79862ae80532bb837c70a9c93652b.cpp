#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator const volatile >(class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_08e79862ae80532bb837c70a9c93652b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_8f3919223a1f55afb240c3500b95c95b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_8f3919223a1f55afb240c3500b95c95b");
    boost::python::object module_8f3919223a1f55afb240c3500b95c95b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_8f3919223a1f55afb240c3500b95c95b.c_str()))));
    boost::python::scope().attr("__selection_8f3919223a1f55afb240c3500b95c95b") = module_8f3919223a1f55afb240c3500b95c95b;
    boost::python::scope scope_8f3919223a1f55afb240c3500b95c95b = module_8f3919223a1f55afb240c3500b95c95b;
    enum ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_9c1bf2129d075603a416d88a0e80b85e)() const = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::get_criterion;
    void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_7f1915338f0451788a27ea7b91bb92a8)(enum ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const &) = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator::set_criterion;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > > class_08e79862ae80532bb837c70a9c93652b("CriterionEstimator", "", boost::python::no_init);
    class_08e79862ae80532bb837c70a9c93652b.def(boost::python::init<  >(""));
    class_08e79862ae80532bb837c70a9c93652b.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator const & >(""));
    class_08e79862ae80532bb837c70a9c93652b.def("get_criterion", method_pointer_9c1bf2129d075603a416d88a0e80b85e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_08e79862ae80532bb837c70a9c93652b.def("set_criterion", method_pointer_7f1915338f0451788a27ea7b91bb92a8, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > >::Type >();
    }

}