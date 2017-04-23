#include "_core.h"



namespace autowig
{
    class Wrap_d172eb08b5f6514d9459ff91ea8a2ac3 : public ::statiskit::ListSelection< ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, public boost::python::wrapper< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator >
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
    template <> autowig::Wrap_d172eb08b5f6514d9459ff91ea8a2ac3 const volatile * get_pointer<autowig::Wrap_d172eb08b5f6514d9459ff91ea8a2ac3 const volatile >(autowig::Wrap_d172eb08b5f6514d9459ff91ea8a2ac3 const volatile *c) { return c; }
    template <> class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d172eb08b5f6514d9459ff91ea8a2ac3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f125e57d2d0850ed89ebb0819839744b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_f125e57d2d0850ed89ebb0819839744b");
    boost::python::object module_f125e57d2d0850ed89ebb0819839744b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f125e57d2d0850ed89ebb0819839744b.c_str()))));
    boost::python::scope().attr("__list_selection_f125e57d2d0850ed89ebb0819839744b") = module_f125e57d2d0850ed89ebb0819839744b;
    boost::python::scope scope_f125e57d2d0850ed89ebb0819839744b = module_f125e57d2d0850ed89ebb0819839744b;
    enum ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::ListSelection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_008949d91c815835b0704f60bf9111fa)() const = &::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
    void  (::statiskit::ListSelection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_80849578601552eaadd1600a48a39d95)(enum ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &) = &::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::set_criterion;
    boost::python::class_< autowig::Wrap_d172eb08b5f6514d9459ff91ea8a2ac3, autowig::Held< autowig::Wrap_d172eb08b5f6514d9459ff91ea8a2ac3 >::Type, boost::python::bases< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >, boost::noncopyable > class_d172eb08b5f6514d9459ff91ea8a2ac3("CriterionEstimator", "", boost::python::no_init);
    class_d172eb08b5f6514d9459ff91ea8a2ac3.def("get_criterion", method_pointer_008949d91c815835b0704f60bf9111fa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d172eb08b5f6514d9459ff91ea8a2ac3.def("set_criterion", method_pointer_80849578601552eaadd1600a48a39d95, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d172eb08b5f6514d9459ff91ea8a2ac3 >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator > > >();
    }

}