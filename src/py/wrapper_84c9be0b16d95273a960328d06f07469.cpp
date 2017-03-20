#include "_core.h"



namespace autowig
{
    class Wrap_84c9be0b16d95273a960328d06f07469 : public ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  operator()(::statiskit::UnivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_84c9be0b16d95273a960328d06f07469 const volatile * get_pointer<autowig::Wrap_84c9be0b16d95273a960328d06f07469 const volatile >(autowig::Wrap_84c9be0b16d95273a960328d06f07469 const volatile *c) { return c; }
    template <> class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_84c9be0b16d95273a960328d06f07469()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_48bb93ba41cb566d971639633c42258d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_48bb93ba41cb566d971639633c42258d");
    boost::python::object module_48bb93ba41cb566d971639633c42258d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_48bb93ba41cb566d971639633c42258d.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_48bb93ba41cb566d971639633c42258d") = module_48bb93ba41cb566d971639633c42258d;
    boost::python::scope scope_48bb93ba41cb566d971639633c42258d = module_48bb93ba41cb566d971639633c42258d;
    double const & (::statiskit::OptimizationEstimationImpl< unsigned int, ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_4976ec0dde5f59cfb3713deb00fe2464)() const = &::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_mindiff;
    void  (::statiskit::OptimizationEstimationImpl< unsigned int, ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_05a50c158a3b5b80b022b003d3e4484b)(double const &) = &::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_mindiff;
    unsigned int  (::statiskit::OptimizationEstimationImpl< unsigned int, ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_75e6352e38125b30bc4a98c519dc8f58)() const = &::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_minits;
    void  (::statiskit::OptimizationEstimationImpl< unsigned int, ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_d3ecbdbe024d505e91ba47645e1b59dc)(unsigned int const &) = &::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_minits;
    unsigned int  (::statiskit::OptimizationEstimationImpl< unsigned int, ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_c09487cfc9fd52e7857f3d0d84321753)() const = &::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_maxits;
    void  (::statiskit::OptimizationEstimationImpl< unsigned int, ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_ccd63776596d5d79a8fa475684c9b1eb)(unsigned int const &) = &::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_maxits;
    boost::python::class_< autowig::Wrap_84c9be0b16d95273a960328d06f07469, autowig::Held< autowig::Wrap_84c9be0b16d95273a960328d06f07469 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_84c9be0b16d95273a960328d06f07469("Estimator", "", boost::python::no_init);
    class_84c9be0b16d95273a960328d06f07469.def("get_mindiff", method_pointer_4976ec0dde5f59cfb3713deb00fe2464, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_84c9be0b16d95273a960328d06f07469.def("set_mindiff", method_pointer_05a50c158a3b5b80b022b003d3e4484b, "");
    class_84c9be0b16d95273a960328d06f07469.def("get_minits", method_pointer_75e6352e38125b30bc4a98c519dc8f58, "");
    class_84c9be0b16d95273a960328d06f07469.def("set_minits", method_pointer_d3ecbdbe024d505e91ba47645e1b59dc, "");
    class_84c9be0b16d95273a960328d06f07469.def("get_maxits", method_pointer_c09487cfc9fd52e7857f3d0d84321753, "");
    class_84c9be0b16d95273a960328d06f07469.def("set_maxits", method_pointer_ccd63776596d5d79a8fa475684c9b1eb, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_84c9be0b16d95273a960328d06f07469 >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > >();
    }

}