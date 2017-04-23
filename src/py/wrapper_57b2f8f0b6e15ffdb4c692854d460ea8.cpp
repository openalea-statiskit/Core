#include "_core.h"



namespace autowig
{
    class Wrap_57b2f8f0b6e15ffdb4c692854d460ea8 : public ::statiskit::ListSelection< ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, public boost::python::wrapper< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_57b2f8f0b6e15ffdb4c692854d460ea8 const volatile * get_pointer<autowig::Wrap_57b2f8f0b6e15ffdb4c692854d460ea8 const volatile >(autowig::Wrap_57b2f8f0b6e15ffdb4c692854d460ea8 const volatile *c) { return c; }
    template <> class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_57b2f8f0b6e15ffdb4c692854d460ea8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a2b6e7d6cd9f5e07a05b02debc08e97a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_a2b6e7d6cd9f5e07a05b02debc08e97a");
    boost::python::object module_a2b6e7d6cd9f5e07a05b02debc08e97a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a2b6e7d6cd9f5e07a05b02debc08e97a.c_str()))));
    boost::python::scope().attr("__list_selection_a2b6e7d6cd9f5e07a05b02debc08e97a") = module_a2b6e7d6cd9f5e07a05b02debc08e97a;
    boost::python::scope scope_a2b6e7d6cd9f5e07a05b02debc08e97a = module_a2b6e7d6cd9f5e07a05b02debc08e97a;
    enum ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::ListSelection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_c46f4cdd45bd5d1ab55fc9838d755b9b)() const = &::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::get_criterion;
    void  (::statiskit::ListSelection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_9a8c4133844d5b79aadbc124725ea9f7)(enum ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const &) = &::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::set_criterion;
    boost::python::class_< autowig::Wrap_57b2f8f0b6e15ffdb4c692854d460ea8, autowig::Held< autowig::Wrap_57b2f8f0b6e15ffdb4c692854d460ea8 >::Type, boost::python::bases< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >, boost::noncopyable > class_57b2f8f0b6e15ffdb4c692854d460ea8("CriterionEstimator", "", boost::python::no_init);
    class_57b2f8f0b6e15ffdb4c692854d460ea8.def("get_criterion", method_pointer_c46f4cdd45bd5d1ab55fc9838d755b9b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_57b2f8f0b6e15ffdb4c692854d460ea8.def("set_criterion", method_pointer_9a8c4133844d5b79aadbc124725ea9f7, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_57b2f8f0b6e15ffdb4c692854d460ea8 >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator > > >();
    }

}