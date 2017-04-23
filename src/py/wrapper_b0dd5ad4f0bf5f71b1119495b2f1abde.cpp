#include "_core.h"



namespace autowig
{
    class Wrap_b0dd5ad4f0bf5f71b1119495b2f1abde : public ::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, public boost::python::wrapper< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_b0dd5ad4f0bf5f71b1119495b2f1abde const volatile * get_pointer<autowig::Wrap_b0dd5ad4f0bf5f71b1119495b2f1abde const volatile >(autowig::Wrap_b0dd5ad4f0bf5f71b1119495b2f1abde const volatile *c) { return c; }
    template <> class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b0dd5ad4f0bf5f71b1119495b2f1abde()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_5a00146a763d5fe88b5b9cb9bbcb74b7 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_5a00146a763d5fe88b5b9cb9bbcb74b7");
    boost::python::object module_5a00146a763d5fe88b5b9cb9bbcb74b7(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5a00146a763d5fe88b5b9cb9bbcb74b7.c_str()))));
    boost::python::scope().attr("__list_selection_5a00146a763d5fe88b5b9cb9bbcb74b7") = module_5a00146a763d5fe88b5b9cb9bbcb74b7;
    boost::python::scope scope_5a00146a763d5fe88b5b9cb9bbcb74b7 = module_5a00146a763d5fe88b5b9cb9bbcb74b7;
    enum ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_27636adc8a145fb0a7801b40bd45b812)() const = &::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
    void  (::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_f1465638b6bc59ce8aaa2d6455caec29)(enum ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &) = &::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::set_criterion;
    boost::python::class_< autowig::Wrap_b0dd5ad4f0bf5f71b1119495b2f1abde, autowig::Held< autowig::Wrap_b0dd5ad4f0bf5f71b1119495b2f1abde >::Type, boost::python::bases< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >, boost::noncopyable > class_b0dd5ad4f0bf5f71b1119495b2f1abde("CriterionEstimator", "", boost::python::no_init);
    class_b0dd5ad4f0bf5f71b1119495b2f1abde.def("get_criterion", method_pointer_27636adc8a145fb0a7801b40bd45b812, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b0dd5ad4f0bf5f71b1119495b2f1abde.def("set_criterion", method_pointer_f1465638b6bc59ce8aaa2d6455caec29, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b0dd5ad4f0bf5f71b1119495b2f1abde >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator > > >();
    }

}