#include "_core.h"



namespace autowig
{
    class Wrap_a083b00f7fa65f3994dc4d199b58d5f6 : public ::statiskit::ListSelection< ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_a083b00f7fa65f3994dc4d199b58d5f6 const volatile * get_pointer<autowig::Wrap_a083b00f7fa65f3994dc4d199b58d5f6 const volatile >(autowig::Wrap_a083b00f7fa65f3994dc4d199b58d5f6 const volatile *c) { return c; }
    template <> class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a083b00f7fa65f3994dc4d199b58d5f6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a2b6e7d6cd9f5e07a05b02debc08e97a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_a2b6e7d6cd9f5e07a05b02debc08e97a");
    boost::python::object module_a2b6e7d6cd9f5e07a05b02debc08e97a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a2b6e7d6cd9f5e07a05b02debc08e97a.c_str()))));
    boost::python::scope().attr("__list_selection_a2b6e7d6cd9f5e07a05b02debc08e97a") = module_a2b6e7d6cd9f5e07a05b02debc08e97a;
    boost::python::scope scope_a2b6e7d6cd9f5e07a05b02debc08e97a = module_a2b6e7d6cd9f5e07a05b02debc08e97a;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::ListSelection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_23f9b6820346568f8b3e61a3875625d1)(struct ::statiskit::UnivariateData const &, bool const &) const = &::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::operator();
    ::statiskit::Index  (::statiskit::ListSelection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_c03065f9bd4f5aea9a30c7a5de92f29c)() const = &::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator * (::statiskit::ListSelection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_0194dca4d8d758b2a22b7d2843387a7f)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::ListSelection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_0a60beac1f8356728928ab31662c657c)(::statiskit::Index const &, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::ListSelection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_25dbc92b6324562eb25c51c255914ce3)(struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::ListSelection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_7ed4d856a18a554c85e9c129399ade3a)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_a083b00f7fa65f3994dc4d199b58d5f6, autowig::Held< autowig::Wrap_a083b00f7fa65f3994dc4d199b58d5f6 >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_a083b00f7fa65f3994dc4d199b58d5f6("Estimator", "", boost::python::no_init);
    class_a083b00f7fa65f3994dc4d199b58d5f6.def("__call__", method_pointer_23f9b6820346568f8b3e61a3875625d1, "");
    class_a083b00f7fa65f3994dc4d199b58d5f6.def("__len__", method_pointer_c03065f9bd4f5aea9a30c7a5de92f29c, "");
    class_a083b00f7fa65f3994dc4d199b58d5f6.def("get_estimator", method_pointer_0194dca4d8d758b2a22b7d2843387a7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a083b00f7fa65f3994dc4d199b58d5f6.def("set_estimator", method_pointer_0a60beac1f8356728928ab31662c657c, "");
    class_a083b00f7fa65f3994dc4d199b58d5f6.def("add_estimator", method_pointer_25dbc92b6324562eb25c51c255914ce3, "");
    class_a083b00f7fa65f3994dc4d199b58d5f6.def("remove_estimator", method_pointer_7ed4d856a18a554c85e9c129399ade3a, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_a083b00f7fa65f3994dc4d199b58d5f6 >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > > >();
    }

}