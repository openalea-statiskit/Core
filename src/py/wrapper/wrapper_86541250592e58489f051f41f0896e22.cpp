#include "_core.h"



namespace autowig
{
    class Wrap_86541250592e58489f051f41f0896e22 : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > >
    {
        public:
            

        protected:
            
            virtual double  scoring(struct ::statiskit::UnivariateConditionalDistribution const * param_0, class ::statiskit::UnivariateConditionalData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_86541250592e58489f051f41f0896e22 const volatile * get_pointer<autowig::Wrap_86541250592e58489f051f41f0896e22 const volatile >(autowig::Wrap_86541250592e58489f051f41f0896e22 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_86541250592e58489f051f41f0896e22()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  (::statiskit::PolymorphicCopy< ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, ::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::*method_pointer_5ff7db9761e15a5f9e6244d676d443a8)() const = &::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::copy;
    boost::python::class_< autowig::Wrap_86541250592e58489f051f41f0896e22, autowig::Held< autowig::Wrap_86541250592e58489f051f41f0896e22 >::Type, boost::python::bases< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >, boost::noncopyable > class_86541250592e58489f051f41f0896e22("_PolymorphicCopy_86541250592e58489f051f41f0896e22", "", boost::python::no_init);
    class_86541250592e58489f051f41f0896e22.def("copy", method_pointer_5ff7db9761e15a5f9e6244d676d443a8, "");

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_86541250592e58489f051f41f0896e22 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
    }

}