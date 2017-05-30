#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator const volatile >(class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7622b202aa8c5c10af59ca8b1ec3c7e0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_2d551f106ba85f3cb3acfbda4c8e17c7 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_2d551f106ba85f3cb3acfbda4c8e17c7");
    boost::python::object module_2d551f106ba85f3cb3acfbda4c8e17c7(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_2d551f106ba85f3cb3acfbda4c8e17c7.c_str()))));
    boost::python::scope().attr("__selection_2d551f106ba85f3cb3acfbda4c8e17c7") = module_2d551f106ba85f3cb3acfbda4c8e17c7;
    boost::python::scope scope_2d551f106ba85f3cb3acfbda4c8e17c7 = module_2d551f106ba85f3cb3acfbda4c8e17c7;
    enum ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_32fd5c986dd05136b1dbf042854691b4)() const = &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
    void  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_9583a7943180584188d9656e9cb2212a)(enum ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &) = &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::set_criterion;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator > > > class_7622b202aa8c5c10af59ca8b1ec3c7e0("CriterionEstimator", "", boost::python::no_init);
    class_7622b202aa8c5c10af59ca8b1ec3c7e0.def(boost::python::init<  >(""));
    class_7622b202aa8c5c10af59ca8b1ec3c7e0.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator const & >(""));
    class_7622b202aa8c5c10af59ca8b1ec3c7e0.def("get_criterion", method_pointer_32fd5c986dd05136b1dbf042854691b4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7622b202aa8c5c10af59ca8b1ec3c7e0.def("set_criterion", method_pointer_9583a7943180584188d9656e9cb2212a, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator > >::Type >();
    }

}