#include "_core.h"



namespace autowig
{
    class Wrap_fd972a10c86a58beaa770541f6e5204f : public ::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator, public boost::python::wrapper< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator >
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
    template <> autowig::Wrap_fd972a10c86a58beaa770541f6e5204f const volatile * get_pointer<autowig::Wrap_fd972a10c86a58beaa770541f6e5204f const volatile >(autowig::Wrap_fd972a10c86a58beaa770541f6e5204f const volatile *c) { return c; }
    template <> class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator const volatile * get_pointer<class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator const volatile >(class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fd972a10c86a58beaa770541f6e5204f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_3fcc3ee4798357898d2a495bb06ac033 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_estimation_3fcc3ee4798357898d2a495bb06ac033");
    boost::python::object module_3fcc3ee4798357898d2a495bb06ac033(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_3fcc3ee4798357898d2a495bb06ac033.c_str()))));
    boost::python::scope().attr("__list_estimation_3fcc3ee4798357898d2a495bb06ac033") = module_3fcc3ee4798357898d2a495bb06ac033;
    boost::python::scope scope_3fcc3ee4798357898d2a495bb06ac033 = module_3fcc3ee4798357898d2a495bb06ac033;
    enum ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator::criterion_type const & (::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator::*method_pointer_df49c1a84e8756f4b9243bd715ec767c)() const = &::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator::get_criterion;
    void  (::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator::*method_pointer_edbf64ba51fd5ce9bb78906ada3a13c4)(enum ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator::criterion_type const &) = &::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator::set_criterion;
    boost::python::class_< autowig::Wrap_fd972a10c86a58beaa770541f6e5204f, autowig::Held< autowig::Wrap_fd972a10c86a58beaa770541f6e5204f >::Type, boost::python::bases< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >, boost::noncopyable > class_fd972a10c86a58beaa770541f6e5204f("ClassicalCriterionEstimator", "", boost::python::no_init);
    class_fd972a10c86a58beaa770541f6e5204f.def("get_criterion", method_pointer_df49c1a84e8756f4b9243bd715ec767c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fd972a10c86a58beaa770541f6e5204f.def("set_criterion", method_pointer_edbf64ba51fd5ce9bb78906ada3a13c4, "");

    if(autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_fd972a10c86a58beaa770541f6e5204f >::Type, autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator >::Type, autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator >::Type, class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::ClassicalCriterionEstimator > > >();
    }

}