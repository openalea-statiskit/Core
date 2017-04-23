#include "_core.h"



namespace autowig
{
    class Wrap_4d0273ab3b7959879ed7145c5855cd71 : public ::statiskit::ListSelection< ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, public boost::python::wrapper< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator >
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
    template <> autowig::Wrap_4d0273ab3b7959879ed7145c5855cd71 const volatile * get_pointer<autowig::Wrap_4d0273ab3b7959879ed7145c5855cd71 const volatile >(autowig::Wrap_4d0273ab3b7959879ed7145c5855cd71 const volatile *c) { return c; }
    template <> class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4d0273ab3b7959879ed7145c5855cd71()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c4ab8acadc5d58e687f03729ce178865 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_c4ab8acadc5d58e687f03729ce178865");
    boost::python::object module_c4ab8acadc5d58e687f03729ce178865(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c4ab8acadc5d58e687f03729ce178865.c_str()))));
    boost::python::scope().attr("__list_selection_c4ab8acadc5d58e687f03729ce178865") = module_c4ab8acadc5d58e687f03729ce178865;
    boost::python::scope scope_c4ab8acadc5d58e687f03729ce178865 = module_c4ab8acadc5d58e687f03729ce178865;
    enum ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::ListSelection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_84b18eb0710c5d6c88e73a3f43d57b83)() const = &::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
    void  (::statiskit::ListSelection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_eeef952566f35393bcd256741e164261)(enum ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &) = &::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator::set_criterion;
    boost::python::class_< autowig::Wrap_4d0273ab3b7959879ed7145c5855cd71, autowig::Held< autowig::Wrap_4d0273ab3b7959879ed7145c5855cd71 >::Type, boost::python::bases< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >, boost::noncopyable > class_4d0273ab3b7959879ed7145c5855cd71("CriterionEstimator", "", boost::python::no_init);
    class_4d0273ab3b7959879ed7145c5855cd71.def("get_criterion", method_pointer_84b18eb0710c5d6c88e73a3f43d57b83, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4d0273ab3b7959879ed7145c5855cd71.def("set_criterion", method_pointer_eeef952566f35393bcd256741e164261, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_4d0273ab3b7959879ed7145c5855cd71 >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator > > >();
    }

}