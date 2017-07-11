#include "_core.h"



namespace autowig
{
    class Wrap_73c649526d8a5418ab2497ec2edbbf63 : public ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator, public boost::python::wrapper< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  operator()(::statiskit::MultivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_73c649526d8a5418ab2497ec2edbbf63 const volatile * get_pointer<autowig::Wrap_73c649526d8a5418ab2497ec2edbbf63 const volatile >(autowig::Wrap_73c649526d8a5418ab2497ec2edbbf63 const volatile *c) { return c; }
    template <> class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator const volatile * get_pointer<class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator const volatile >(class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_73c649526d8a5418ab2497ec2edbbf63()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dced6a8944e15d18a882afe8c36dd865 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__splitting_distribution_estimation_dced6a8944e15d18a882afe8c36dd865");
    boost::python::object module_dced6a8944e15d18a882afe8c36dd865(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dced6a8944e15d18a882afe8c36dd865.c_str()))));
    boost::python::scope().attr("__splitting_distribution_estimation_dced6a8944e15d18a882afe8c36dd865") = module_dced6a8944e15d18a882afe8c36dd865;
    boost::python::scope scope_dced6a8944e15d18a882afe8c36dd865 = module_dced6a8944e15d18a882afe8c36dd865;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const * (::statiskit::SplittingDistributionEstimation< ::statiskit::ActiveEstimation< ::statiskit::MultinomialSplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator::*method_pointer_4533c46016c05be2abad201382e62757)() const = &::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator::get_sum;
    void  (::statiskit::SplittingDistributionEstimation< ::statiskit::ActiveEstimation< ::statiskit::MultinomialSplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator::*method_pointer_1c16b9c53fe454af8cd0424c3a62cd89)(struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &) = &::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator::set_sum;
    boost::python::class_< autowig::Wrap_73c649526d8a5418ab2497ec2edbbf63, autowig::Held< autowig::Wrap_73c649526d8a5418ab2497ec2edbbf63 >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_73c649526d8a5418ab2497ec2edbbf63("Estimator", "", boost::python::no_init);
    class_73c649526d8a5418ab2497ec2edbbf63.def("get_sum", method_pointer_4533c46016c05be2abad201382e62757, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_73c649526d8a5418ab2497ec2edbbf63.def("set_sum", method_pointer_1c16b9c53fe454af8cd0424c3a62cd89, "");

    if(autowig::Held< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_73c649526d8a5418ab2497ec2edbbf63 >::Type, autowig::Held< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type >();
    }

}