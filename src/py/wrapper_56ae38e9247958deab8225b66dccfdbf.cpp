#include "_core.h"



namespace autowig
{
    class Wrap_56ae38e9247958deab8225b66dccfdbf : public ::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_56ae38e9247958deab8225b66dccfdbf const volatile * get_pointer<autowig::Wrap_56ae38e9247958deab8225b66dccfdbf const volatile >(autowig::Wrap_56ae38e9247958deab8225b66dccfdbf const volatile *c) { return c; }
    template <> class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_56ae38e9247958deab8225b66dccfdbf()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_5a00146a763d5fe88b5b9cb9bbcb74b7 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_5a00146a763d5fe88b5b9cb9bbcb74b7");
    boost::python::object module_5a00146a763d5fe88b5b9cb9bbcb74b7(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5a00146a763d5fe88b5b9cb9bbcb74b7.c_str()))));
    boost::python::scope().attr("__list_selection_5a00146a763d5fe88b5b9cb9bbcb74b7") = module_5a00146a763d5fe88b5b9cb9bbcb74b7;
    boost::python::scope scope_5a00146a763d5fe88b5b9cb9bbcb74b7 = module_5a00146a763d5fe88b5b9cb9bbcb74b7;
    class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  (::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_1380402de64d58d3bb5c30d869bf21f3)(struct ::statiskit::MultivariateData const &, bool const &) const = &::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::operator();
    ::statiskit::Index  (::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_b76089da459558e2b87654ed2e379784)() const = &::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::size;
    struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator * (::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_d4dc14ba4e2a5096a4cf5729c93d62c6)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_2245079e998e51b0a94b35e19b9aa528)(::statiskit::Index const &, struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::set_estimator;
    void  (::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_59de5431188557739f33ce071e2a300f)(struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const &) = &::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::add_estimator;
    void  (::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_f4cfb667533b5a2ab6913470a4923d77)(::statiskit::Index const &) = &::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_56ae38e9247958deab8225b66dccfdbf, autowig::Held< autowig::Wrap_56ae38e9247958deab8225b66dccfdbf >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_56ae38e9247958deab8225b66dccfdbf("Estimator", "", boost::python::no_init);
    class_56ae38e9247958deab8225b66dccfdbf.def("__call__", method_pointer_1380402de64d58d3bb5c30d869bf21f3, "");
    class_56ae38e9247958deab8225b66dccfdbf.def("__len__", method_pointer_b76089da459558e2b87654ed2e379784, "");
    class_56ae38e9247958deab8225b66dccfdbf.def("get_estimator", method_pointer_d4dc14ba4e2a5096a4cf5729c93d62c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_56ae38e9247958deab8225b66dccfdbf.def("set_estimator", method_pointer_2245079e998e51b0a94b35e19b9aa528, "");
    class_56ae38e9247958deab8225b66dccfdbf.def("add_estimator", method_pointer_59de5431188557739f33ce071e2a300f, "");
    class_56ae38e9247958deab8225b66dccfdbf.def("remove_estimator", method_pointer_f4cfb667533b5a2ab6913470a4923d77, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_56ae38e9247958deab8225b66dccfdbf >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > > >();
    }

}