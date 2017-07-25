#include "_core.h"



namespace autowig
{
    class Wrap_3d6a15edb2225daba874c2b80defe6b4 : public ::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >, public boost::python::wrapper< class ::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >
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
    template <> autowig::Wrap_3d6a15edb2225daba874c2b80defe6b4 const volatile * get_pointer<autowig::Wrap_3d6a15edb2225daba874c2b80defe6b4 const volatile >(autowig::Wrap_3d6a15edb2225daba874c2b80defe6b4 const volatile *c) { return c; }
    template <> class ::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > const volatile >(class ::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3d6a15edb2225daba874c2b80defe6b4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_35a1d72c2afe50abae544c7b85e81bf1)() const = &::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_99ae7dd9f31d5974bde957949a5035c4)(double const &) = &::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_83064646869d5d85a9ac96b3e9c8a59a)() const = &::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_da042cc8718c58c5b1f93c727825184b)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_b163c4dfab725029a48aa0aacfca11b8)() const = &::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::*method_pointer_499fd696e18e520599ff940988b0bcb7)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::set_maxits;
    boost::python::class_< autowig::Wrap_3d6a15edb2225daba874c2b80defe6b4, autowig::Held< autowig::Wrap_3d6a15edb2225daba874c2b80defe6b4 >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_3d6a15edb2225daba874c2b80defe6b4("_Optimization_3d6a15edb2225daba874c2b80defe6b4", "", boost::python::no_init);
    class_3d6a15edb2225daba874c2b80defe6b4.def("get_mindiff", method_pointer_35a1d72c2afe50abae544c7b85e81bf1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3d6a15edb2225daba874c2b80defe6b4.def("set_mindiff", method_pointer_99ae7dd9f31d5974bde957949a5035c4, "");
    class_3d6a15edb2225daba874c2b80defe6b4.def("get_minits", method_pointer_83064646869d5d85a9ac96b3e9c8a59a, "");
    class_3d6a15edb2225daba874c2b80defe6b4.def("set_minits", method_pointer_da042cc8718c58c5b1f93c727825184b, "");
    class_3d6a15edb2225daba874c2b80defe6b4.def("get_maxits", method_pointer_b163c4dfab725029a48aa0aacfca11b8, "");
    class_3d6a15edb2225daba874c2b80defe6b4.def("set_maxits", method_pointer_499fd696e18e520599ff940988b0bcb7, "");

    if(autowig::Held< class ::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_3d6a15edb2225daba874c2b80defe6b4 >::Type, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type >();
    }

}