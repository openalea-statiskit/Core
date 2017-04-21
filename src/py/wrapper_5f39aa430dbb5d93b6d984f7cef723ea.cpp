#include "_core.h"



namespace autowig
{
    class Wrap_5f39aa430dbb5d93b6d984f7cef723ea : public ::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_5f39aa430dbb5d93b6d984f7cef723ea const volatile * get_pointer<autowig::Wrap_5f39aa430dbb5d93b6d984f7cef723ea const volatile >(autowig::Wrap_5f39aa430dbb5d93b6d984f7cef723ea const volatile *c) { return c; }
    template <> class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5f39aa430dbb5d93b6d984f7cef723ea()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_3fcc3ee4798357898d2a495bb06ac033 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_estimation_3fcc3ee4798357898d2a495bb06ac033");
    boost::python::object module_3fcc3ee4798357898d2a495bb06ac033(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_3fcc3ee4798357898d2a495bb06ac033.c_str()))));
    boost::python::scope().attr("__list_estimation_3fcc3ee4798357898d2a495bb06ac033") = module_3fcc3ee4798357898d2a495bb06ac033;
    boost::python::scope scope_3fcc3ee4798357898d2a495bb06ac033 = module_3fcc3ee4798357898d2a495bb06ac033;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_3384af1615a959c9a569f985524265c8)(struct ::statiskit::UnivariateData const &, bool const &) const = &::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::operator();
    ::statiskit::Index  (::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_6af711f5e3f559ee9719ad038701762d)() const = &::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator * (::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_8f71c59224cb578fb59dcf70f5de920f)(::statiskit::Index const &) = &::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_5b88eedd0fe25e1389d4628ffb89b984)(::statiskit::Index const &, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &) = &::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_9f77c0d8f3975c3fb1557da054fda861)(struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &) = &::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_f27a424e6e5a5ed4804f1e979d8128e8)(::statiskit::Index const &) = &::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_5f39aa430dbb5d93b6d984f7cef723ea, autowig::Held< autowig::Wrap_5f39aa430dbb5d93b6d984f7cef723ea >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_5f39aa430dbb5d93b6d984f7cef723ea("Estimator", "", boost::python::no_init);
    class_5f39aa430dbb5d93b6d984f7cef723ea.def("__call__", method_pointer_3384af1615a959c9a569f985524265c8, "");
    class_5f39aa430dbb5d93b6d984f7cef723ea.def("__len__", method_pointer_6af711f5e3f559ee9719ad038701762d, "");
    class_5f39aa430dbb5d93b6d984f7cef723ea.def("get_estimator", method_pointer_8f71c59224cb578fb59dcf70f5de920f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5f39aa430dbb5d93b6d984f7cef723ea.def("set_estimator", method_pointer_5b88eedd0fe25e1389d4628ffb89b984, "");
    class_5f39aa430dbb5d93b6d984f7cef723ea.def("add_estimator", method_pointer_9f77c0d8f3975c3fb1557da054fda861, "");
    class_5f39aa430dbb5d93b6d984f7cef723ea.def("remove_estimator", method_pointer_f27a424e6e5a5ed4804f1e979d8128e8, "");

    if(autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5f39aa430dbb5d93b6d984f7cef723ea >::Type, autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > >();
    }

}