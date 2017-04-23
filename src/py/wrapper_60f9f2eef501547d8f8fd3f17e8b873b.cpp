#include "_core.h"



namespace autowig
{
    class Wrap_60f9f2eef501547d8f8fd3f17e8b873b : public ::statiskit::ListSelection< ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_60f9f2eef501547d8f8fd3f17e8b873b const volatile * get_pointer<autowig::Wrap_60f9f2eef501547d8f8fd3f17e8b873b const volatile >(autowig::Wrap_60f9f2eef501547d8f8fd3f17e8b873b const volatile *c) { return c; }
    template <> class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_60f9f2eef501547d8f8fd3f17e8b873b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c4ab8acadc5d58e687f03729ce178865 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_c4ab8acadc5d58e687f03729ce178865");
    boost::python::object module_c4ab8acadc5d58e687f03729ce178865(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c4ab8acadc5d58e687f03729ce178865.c_str()))));
    boost::python::scope().attr("__list_selection_c4ab8acadc5d58e687f03729ce178865") = module_c4ab8acadc5d58e687f03729ce178865;
    boost::python::scope scope_c4ab8acadc5d58e687f03729ce178865 = module_c4ab8acadc5d58e687f03729ce178865;
    class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  (::statiskit::ListSelection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_0446b157d6fa59f7ba6cc7805605645d)(struct ::statiskit::MultivariateData const &, bool const &) const = &::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::operator();
    ::statiskit::Index  (::statiskit::ListSelection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_787cd65652075162aa632b6f1bbf9798)() const = &::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator * (::statiskit::ListSelection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_802501ea2b6855898043ab9026461229)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::ListSelection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_822ab8cf2c3f55a4a70c1840c32a7779)(::statiskit::Index const &, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::ListSelection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_ab436b6b7edf54ed92dc05590281d442)(struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::ListSelection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::*method_pointer_70b53f3a731f54318f7973e10a83b361)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_60f9f2eef501547d8f8fd3f17e8b873b, autowig::Held< autowig::Wrap_60f9f2eef501547d8f8fd3f17e8b873b >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_60f9f2eef501547d8f8fd3f17e8b873b("Estimator", "", boost::python::no_init);
    class_60f9f2eef501547d8f8fd3f17e8b873b.def("__call__", method_pointer_0446b157d6fa59f7ba6cc7805605645d, "");
    class_60f9f2eef501547d8f8fd3f17e8b873b.def("__len__", method_pointer_787cd65652075162aa632b6f1bbf9798, "");
    class_60f9f2eef501547d8f8fd3f17e8b873b.def("get_estimator", method_pointer_802501ea2b6855898043ab9026461229, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_60f9f2eef501547d8f8fd3f17e8b873b.def("set_estimator", method_pointer_822ab8cf2c3f55a4a70c1840c32a7779, "");
    class_60f9f2eef501547d8f8fd3f17e8b873b.def("add_estimator", method_pointer_ab436b6b7edf54ed92dc05590281d442, "");
    class_60f9f2eef501547d8f8fd3f17e8b873b.def("remove_estimator", method_pointer_70b53f3a731f54318f7973e10a83b361, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_60f9f2eef501547d8f8fd3f17e8b873b >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > > >();
    }

}