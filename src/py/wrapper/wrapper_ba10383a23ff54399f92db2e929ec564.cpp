#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator const volatile >(class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ba10383a23ff54399f92db2e929ec564()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_e28923ae1ac356e5845929232f8e09ac = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_e28923ae1ac356e5845929232f8e09ac");
    boost::python::object module_e28923ae1ac356e5845929232f8e09ac(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_e28923ae1ac356e5845929232f8e09ac.c_str()))));
    boost::python::scope().attr("__selection_e28923ae1ac356e5845929232f8e09ac") = module_e28923ae1ac356e5845929232f8e09ac;
    boost::python::scope scope_e28923ae1ac356e5845929232f8e09ac = module_e28923ae1ac356e5845929232f8e09ac;
    enum ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_4a0ac3d0e8ba5acab01bb16df19c819d)() const = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
    void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_9dc7d3334bd75dbdaeca6ea3bd0d7f94)(enum ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &) = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::set_criterion;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > > > class_ba10383a23ff54399f92db2e929ec564("CriterionEstimator", "", boost::python::no_init);
    class_ba10383a23ff54399f92db2e929ec564.def(boost::python::init<  >(""));
    class_ba10383a23ff54399f92db2e929ec564.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator const & >(""));
    class_ba10383a23ff54399f92db2e929ec564.def("get_criterion", method_pointer_4a0ac3d0e8ba5acab01bb16df19c819d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ba10383a23ff54399f92db2e929ec564.def("set_criterion", method_pointer_9dc7d3334bd75dbdaeca6ea3bd0d7f94, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > >::Type >();
    }

}