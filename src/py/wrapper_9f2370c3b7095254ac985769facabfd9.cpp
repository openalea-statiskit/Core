#include "_core.h"



namespace autowig
{
    class Wrap_9f2370c3b7095254ac985769facabfd9 : public ::statiskit::ListSelection< ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            
            virtual double  scoring(struct ::statiskit::MultivariateDistribution const * param_0, struct ::statiskit::MultivariateData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_9f2370c3b7095254ac985769facabfd9 const volatile * get_pointer<autowig::Wrap_9f2370c3b7095254ac985769facabfd9 const volatile >(autowig::Wrap_9f2370c3b7095254ac985769facabfd9 const volatile *c) { return c; }
    template <> class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9f2370c3b7095254ac985769facabfd9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f125e57d2d0850ed89ebb0819839744b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_f125e57d2d0850ed89ebb0819839744b");
    boost::python::object module_f125e57d2d0850ed89ebb0819839744b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f125e57d2d0850ed89ebb0819839744b.c_str()))));
    boost::python::scope().attr("__list_selection_f125e57d2d0850ed89ebb0819839744b") = module_f125e57d2d0850ed89ebb0819839744b;
    boost::python::scope scope_f125e57d2d0850ed89ebb0819839744b = module_f125e57d2d0850ed89ebb0819839744b;
    class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  (::statiskit::ListSelection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_6e0ff6de0633534985d9884129d5c178)(struct ::statiskit::MultivariateData const &, bool const &) const = &::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::operator();
    ::statiskit::Index  (::statiskit::ListSelection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_ba77ab17f4aa5270ab165bd7904a6ea3)() const = &::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::MultivariateDistributionEstimation::Estimator * (::statiskit::ListSelection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_210b799522a95ec79b401a6228818b2b)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::ListSelection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_7e25b091ab985d27a9815912771e2db0)(::statiskit::Index const &, struct ::statiskit::MultivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::ListSelection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_ed8e58f151425e41a4f8f5fa0382c33e)(struct ::statiskit::MultivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::ListSelection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::Estimator::*method_pointer_0949ee8cec8759fdae94c133f7bb98a4)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_9f2370c3b7095254ac985769facabfd9, autowig::Held< autowig::Wrap_9f2370c3b7095254ac985769facabfd9 >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_9f2370c3b7095254ac985769facabfd9("Estimator", "", boost::python::no_init);
    class_9f2370c3b7095254ac985769facabfd9.def("__call__", method_pointer_6e0ff6de0633534985d9884129d5c178, "");
    class_9f2370c3b7095254ac985769facabfd9.def("__len__", method_pointer_ba77ab17f4aa5270ab165bd7904a6ea3, "");
    class_9f2370c3b7095254ac985769facabfd9.def("get_estimator", method_pointer_210b799522a95ec79b401a6228818b2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9f2370c3b7095254ac985769facabfd9.def("set_estimator", method_pointer_7e25b091ab985d27a9815912771e2db0, "");
    class_9f2370c3b7095254ac985769facabfd9.def("add_estimator", method_pointer_ed8e58f151425e41a4f8f5fa0382c33e, "");
    class_9f2370c3b7095254ac985769facabfd9.def("remove_estimator", method_pointer_0949ee8cec8759fdae94c133f7bb98a4, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_9f2370c3b7095254ac985769facabfd9 >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator > > >();
    }

}