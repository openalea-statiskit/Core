#include "_core.h"



namespace autowig
{
    class Wrap_f81a8ee127995b0890ddd9786aab755d : public ::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >, public boost::python::wrapper< class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >
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
    template <> autowig::Wrap_f81a8ee127995b0890ddd9786aab755d const volatile * get_pointer<autowig::Wrap_f81a8ee127995b0890ddd9786aab755d const volatile >(autowig::Wrap_f81a8ee127995b0890ddd9786aab755d const volatile *c) { return c; }
    template <> class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > const volatile >(class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f81a8ee127995b0890ddd9786aab755d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_317b55cf2f095441a90761b585894a2b)() const = &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_aded8a75326850b0acbd175d00c01d1d)(double const &) = &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_91242b0124445c0b8e7b72267c81d545)() const = &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_5e32f2df117a5ee8b63adef68de2c3b4)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_b5dbfd41b6465487af36b9a482ed6aa9)() const = &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::*method_pointer_7a8db1f4d8665a20a3e3664348f116e6)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::set_maxits;
    boost::python::class_< autowig::Wrap_f81a8ee127995b0890ddd9786aab755d, autowig::Held< autowig::Wrap_f81a8ee127995b0890ddd9786aab755d >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_f81a8ee127995b0890ddd9786aab755d("_Optimization_f81a8ee127995b0890ddd9786aab755d", "", boost::python::no_init);
    class_f81a8ee127995b0890ddd9786aab755d.def("get_mindiff", method_pointer_317b55cf2f095441a90761b585894a2b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f81a8ee127995b0890ddd9786aab755d.def("set_mindiff", method_pointer_aded8a75326850b0acbd175d00c01d1d, "");
    class_f81a8ee127995b0890ddd9786aab755d.def("get_minits", method_pointer_91242b0124445c0b8e7b72267c81d545, "");
    class_f81a8ee127995b0890ddd9786aab755d.def("set_minits", method_pointer_5e32f2df117a5ee8b63adef68de2c3b4, "");
    class_f81a8ee127995b0890ddd9786aab755d.def("get_maxits", method_pointer_b5dbfd41b6465487af36b9a482ed6aa9, "");
    class_f81a8ee127995b0890ddd9786aab755d.def("set_maxits", method_pointer_7a8db1f4d8665a20a3e3664348f116e6, "");

    if(autowig::Held< class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_f81a8ee127995b0890ddd9786aab755d >::Type, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
    }

}