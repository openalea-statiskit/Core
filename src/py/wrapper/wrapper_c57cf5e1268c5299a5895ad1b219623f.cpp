#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator const volatile >(class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c57cf5e1268c5299a5895ad1b219623f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_cd94566e790a5588be95cba4cfaaec57 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_cd94566e790a5588be95cba4cfaaec57");
    boost::python::object module_cd94566e790a5588be95cba4cfaaec57(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_cd94566e790a5588be95cba4cfaaec57.c_str()))));
    boost::python::scope().attr("__selection_cd94566e790a5588be95cba4cfaaec57") = module_cd94566e790a5588be95cba4cfaaec57;
    boost::python::scope scope_cd94566e790a5588be95cba4cfaaec57 = module_cd94566e790a5588be95cba4cfaaec57;
    enum ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_aaa0dfbae2e75008bd244623dab630b4)() const = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::get_criterion;
    void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_5b1c78213d9d55bd9dddfb9743888267)(enum ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const &) = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::set_criterion;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator > > > class_c57cf5e1268c5299a5895ad1b219623f("CriterionEstimator", "", boost::python::no_init);
    class_c57cf5e1268c5299a5895ad1b219623f.def(boost::python::init<  >(""));
    class_c57cf5e1268c5299a5895ad1b219623f.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator const & >(""));
    class_c57cf5e1268c5299a5895ad1b219623f.def("get_criterion", method_pointer_aaa0dfbae2e75008bd244623dab630b4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c57cf5e1268c5299a5895ad1b219623f.def("set_criterion", method_pointer_5b1c78213d9d55bd9dddfb9743888267, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator > >::Type >();
    }

}