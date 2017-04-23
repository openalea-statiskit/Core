#include "_core.h"



namespace autowig
{
    class Wrap_08463025d06051df8b309f94133c3c73 : public ::statiskit::ListSelection< ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_08463025d06051df8b309f94133c3c73 const volatile * get_pointer<autowig::Wrap_08463025d06051df8b309f94133c3c73 const volatile >(autowig::Wrap_08463025d06051df8b309f94133c3c73 const volatile *c) { return c; }
    template <> class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_08463025d06051df8b309f94133c3c73()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c2c7e656acce553d835b8be4510a40dd = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_c2c7e656acce553d835b8be4510a40dd");
    boost::python::object module_c2c7e656acce553d835b8be4510a40dd(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c2c7e656acce553d835b8be4510a40dd.c_str()))));
    boost::python::scope().attr("__list_selection_c2c7e656acce553d835b8be4510a40dd") = module_c2c7e656acce553d835b8be4510a40dd;
    boost::python::scope scope_c2c7e656acce553d835b8be4510a40dd = module_c2c7e656acce553d835b8be4510a40dd;
    class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  (::statiskit::ListSelection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_e64c0d6da0695cbb957178c6fcaac2cb)(struct ::statiskit::MultivariateData const &, bool const &) const = &::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::operator();
    ::statiskit::Index  (::statiskit::ListSelection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_03119d4854665f888f0c9a72ab9cb18d)() const = &::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator * (::statiskit::ListSelection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_d4c932f4ef4250eab4e377bcac5ac870)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::ListSelection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_36c83cbed5b3570d9998f59fbd1deb57)(::statiskit::Index const &, struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::ListSelection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_a883fd5b7f875f72ab3eef69d3a7d66b)(struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::ListSelection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_507a355fbe0b568a8e0e721725ef344d)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_08463025d06051df8b309f94133c3c73, autowig::Held< autowig::Wrap_08463025d06051df8b309f94133c3c73 >::Type, boost::python::bases< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_08463025d06051df8b309f94133c3c73("Estimator", "", boost::python::no_init);
    class_08463025d06051df8b309f94133c3c73.def("__call__", method_pointer_e64c0d6da0695cbb957178c6fcaac2cb, "");
    class_08463025d06051df8b309f94133c3c73.def("__len__", method_pointer_03119d4854665f888f0c9a72ab9cb18d, "");
    class_08463025d06051df8b309f94133c3c73.def("get_estimator", method_pointer_d4c932f4ef4250eab4e377bcac5ac870, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_08463025d06051df8b309f94133c3c73.def("set_estimator", method_pointer_36c83cbed5b3570d9998f59fbd1deb57, "");
    class_08463025d06051df8b309f94133c3c73.def("add_estimator", method_pointer_a883fd5b7f875f72ab3eef69d3a7d66b, "");
    class_08463025d06051df8b309f94133c3c73.def("remove_estimator", method_pointer_507a355fbe0b568a8e0e721725ef344d, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_08463025d06051df8b309f94133c3c73 >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator > > >();
    }

}