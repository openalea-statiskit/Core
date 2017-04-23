#include "_core.h"



namespace autowig
{
    class Wrap_b23ffbc8a18a595595a7606937c4df1c : public ::statiskit::ListSelection< ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            
            virtual double  scoring(struct ::statiskit::UnivariateDistribution const * param_0, struct ::statiskit::UnivariateData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_b23ffbc8a18a595595a7606937c4df1c const volatile * get_pointer<autowig::Wrap_b23ffbc8a18a595595a7606937c4df1c const volatile >(autowig::Wrap_b23ffbc8a18a595595a7606937c4df1c const volatile *c) { return c; }
    template <> class ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b23ffbc8a18a595595a7606937c4df1c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a6d706b03fc354a987c6f1afce1bf0d2 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_a6d706b03fc354a987c6f1afce1bf0d2");
    boost::python::object module_a6d706b03fc354a987c6f1afce1bf0d2(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a6d706b03fc354a987c6f1afce1bf0d2.c_str()))));
    boost::python::scope().attr("__list_selection_a6d706b03fc354a987c6f1afce1bf0d2") = module_a6d706b03fc354a987c6f1afce1bf0d2;
    boost::python::scope scope_a6d706b03fc354a987c6f1afce1bf0d2 = module_a6d706b03fc354a987c6f1afce1bf0d2;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::ListSelection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_5f1fcc0a087f5de9b56bc6b62276e303)(struct ::statiskit::UnivariateData const &, bool const &) const = &::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::operator();
    ::statiskit::Index  (::statiskit::ListSelection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_2584d14e3b6c5acb817b40f093542920)() const = &::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator * (::statiskit::ListSelection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_60cb259884f55039a22984fd4af637fe)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::ListSelection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_52fa9d7c22a454edad832808283b94e6)(::statiskit::Index const &, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::ListSelection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_c649da8b38d350e0923087e661adab1f)(struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::ListSelection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_0c3ac4842faf5b6ea1ba35ddb8f887ec)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_b23ffbc8a18a595595a7606937c4df1c, autowig::Held< autowig::Wrap_b23ffbc8a18a595595a7606937c4df1c >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_b23ffbc8a18a595595a7606937c4df1c("Estimator", "", boost::python::no_init);
    class_b23ffbc8a18a595595a7606937c4df1c.def("__call__", method_pointer_5f1fcc0a087f5de9b56bc6b62276e303, "");
    class_b23ffbc8a18a595595a7606937c4df1c.def("__len__", method_pointer_2584d14e3b6c5acb817b40f093542920, "");
    class_b23ffbc8a18a595595a7606937c4df1c.def("get_estimator", method_pointer_60cb259884f55039a22984fd4af637fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b23ffbc8a18a595595a7606937c4df1c.def("set_estimator", method_pointer_52fa9d7c22a454edad832808283b94e6, "");
    class_b23ffbc8a18a595595a7606937c4df1c.def("add_estimator", method_pointer_c649da8b38d350e0923087e661adab1f, "");
    class_b23ffbc8a18a595595a7606937c4df1c.def("remove_estimator", method_pointer_0c3ac4842faf5b6ea1ba35ddb8f887ec, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b23ffbc8a18a595595a7606937c4df1c >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > >();
    }

}