#include "_core.h"



namespace autowig
{
    class Wrap_d18357d4989850ac8979919f8d89f004 : public ::statiskit::ListSelection< ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >
    {
        public:
            

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
    template <> autowig::Wrap_d18357d4989850ac8979919f8d89f004 const volatile * get_pointer<autowig::Wrap_d18357d4989850ac8979919f8d89f004 const volatile >(autowig::Wrap_d18357d4989850ac8979919f8d89f004 const volatile *c) { return c; }
    template <> class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d18357d4989850ac8979919f8d89f004()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_d9bf9f15e3585b63b3798522663f828c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_d9bf9f15e3585b63b3798522663f828c");
    boost::python::object module_d9bf9f15e3585b63b3798522663f828c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d9bf9f15e3585b63b3798522663f828c.c_str()))));
    boost::python::scope().attr("__list_selection_d9bf9f15e3585b63b3798522663f828c") = module_d9bf9f15e3585b63b3798522663f828c;
    boost::python::scope scope_d9bf9f15e3585b63b3798522663f828c = module_d9bf9f15e3585b63b3798522663f828c;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::ListSelection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_fb2afd65d6f85537b726f733d933bb58)(struct ::statiskit::UnivariateData const &, bool const &) const = &::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::operator();
    ::statiskit::Index  (::statiskit::ListSelection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_5fdbd9685aff5414bc841294863b5f7c)() const = &::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator * (::statiskit::ListSelection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_747cc55d300758478764613f0e3327a8)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::ListSelection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_cb2d757734d454e382f572ef472df4f5)(::statiskit::Index const &, struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::ListSelection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_d13e6fa26de55060a3e9ffbba7871678)(struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::ListSelection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_397e691db761590c9c6d045a49524cea)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_d18357d4989850ac8979919f8d89f004, autowig::Held< autowig::Wrap_d18357d4989850ac8979919f8d89f004 >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_d18357d4989850ac8979919f8d89f004("Estimator", "", boost::python::no_init);
    class_d18357d4989850ac8979919f8d89f004.def("__call__", method_pointer_fb2afd65d6f85537b726f733d933bb58, "");
    class_d18357d4989850ac8979919f8d89f004.def("__len__", method_pointer_5fdbd9685aff5414bc841294863b5f7c, "");
    class_d18357d4989850ac8979919f8d89f004.def("get_estimator", method_pointer_747cc55d300758478764613f0e3327a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_d18357d4989850ac8979919f8d89f004.def("set_estimator", method_pointer_cb2d757734d454e382f572ef472df4f5, "");
    class_d18357d4989850ac8979919f8d89f004.def("add_estimator", method_pointer_d13e6fa26de55060a3e9ffbba7871678, "");
    class_d18357d4989850ac8979919f8d89f004.def("remove_estimator", method_pointer_397e691db761590c9c6d045a49524cea, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d18357d4989850ac8979919f8d89f004 >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > > >();
    }

}