#include "_core.h"



namespace autowig
{
    class Wrap_ccbe80a40ba653d3bf2bdc8fd0b0ad46 : public ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  operator()(::statiskit::UnivariateConditionalDistributionEstimation::data_type const & param_0, ::statiskit::Index const & param_1, bool const & param_2) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1, param_2);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_ccbe80a40ba653d3bf2bdc8fd0b0ad46 const volatile * get_pointer<autowig::Wrap_ccbe80a40ba653d3bf2bdc8fd0b0ad46 const volatile >(autowig::Wrap_ccbe80a40ba653d3bf2bdc8fd0b0ad46 const volatile *c) { return c; }
    template <> struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator const volatile >(struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ccbe80a40ba653d3bf2bdc8fd0b0ad46()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_da164767fc675bd29ae86f87eff482aa = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._discrete_univariate_conditional_distribution_estimation");
    boost::python::object module_da164767fc675bd29ae86f87eff482aa(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_da164767fc675bd29ae86f87eff482aa.c_str()))));
    boost::python::scope().attr("_discrete_univariate_conditional_distribution_estimation") = module_da164767fc675bd29ae86f87eff482aa;
    boost::python::scope scope_da164767fc675bd29ae86f87eff482aa = module_da164767fc675bd29ae86f87eff482aa;
    boost::python::class_< autowig::Wrap_ccbe80a40ba653d3bf2bdc8fd0b0ad46, autowig::Held< autowig::Wrap_ccbe80a40ba653d3bf2bdc8fd0b0ad46 >::Type, boost::python::bases< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_ccbe80a40ba653d3bf2bdc8fd0b0ad46("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ccbe80a40ba653d3bf2bdc8fd0b0ad46 >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::Type, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > > >();
    }

}