#include "_core.h"



namespace autowig
{
    class Wrap_c3fbd4e7f04157dc936a07233a0c3afa : public ::statiskit::ListSelection< ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, public boost::python::wrapper< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator >
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
    template <> autowig::Wrap_c3fbd4e7f04157dc936a07233a0c3afa const volatile * get_pointer<autowig::Wrap_c3fbd4e7f04157dc936a07233a0c3afa const volatile >(autowig::Wrap_c3fbd4e7f04157dc936a07233a0c3afa const volatile *c) { return c; }
    template <> class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c3fbd4e7f04157dc936a07233a0c3afa()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c2c7e656acce553d835b8be4510a40dd = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_c2c7e656acce553d835b8be4510a40dd");
    boost::python::object module_c2c7e656acce553d835b8be4510a40dd(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c2c7e656acce553d835b8be4510a40dd.c_str()))));
    boost::python::scope().attr("__list_selection_c2c7e656acce553d835b8be4510a40dd") = module_c2c7e656acce553d835b8be4510a40dd;
    boost::python::scope scope_c2c7e656acce553d835b8be4510a40dd = module_c2c7e656acce553d835b8be4510a40dd;
    enum ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::ListSelection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_8da20f0dcfa05cb89c66d64c1566c5a7)() const = &::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
    void  (::statiskit::ListSelection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_69dd05d35e9a501ba89eef9f5484ac71)(enum ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &) = &::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::set_criterion;
    boost::python::class_< autowig::Wrap_c3fbd4e7f04157dc936a07233a0c3afa, autowig::Held< autowig::Wrap_c3fbd4e7f04157dc936a07233a0c3afa >::Type, boost::python::bases< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >, boost::noncopyable > class_c3fbd4e7f04157dc936a07233a0c3afa("CriterionEstimator", "", boost::python::no_init);
    class_c3fbd4e7f04157dc936a07233a0c3afa.def("get_criterion", method_pointer_8da20f0dcfa05cb89c66d64c1566c5a7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c3fbd4e7f04157dc936a07233a0c3afa.def("set_criterion", method_pointer_69dd05d35e9a501ba89eef9f5484ac71, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c3fbd4e7f04157dc936a07233a0c3afa >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator > > >();
    }

}