#include "_core.h"



namespace autowig
{
    class Wrap_b65e2bfb02355375b92295f460fb1b15 : public ::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >, public boost::python::wrapper< class ::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >
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
    template <> autowig::Wrap_b65e2bfb02355375b92295f460fb1b15 const volatile * get_pointer<autowig::Wrap_b65e2bfb02355375b92295f460fb1b15 const volatile >(autowig::Wrap_b65e2bfb02355375b92295f460fb1b15 const volatile *c) { return c; }
    template <> class ::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator > const volatile >(class ::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b65e2bfb02355375b92295f460fb1b15()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::*method_pointer_c36d3177a65a55a2891c280bde267727)() const = &::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::*method_pointer_e16b7e51e2515da1900fc2a11cb70114)(double const &) = &::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::*method_pointer_2526bfe105a853a8abc9cf0014cb291e)() const = &::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::*method_pointer_caeeefd3cde85048a1b7379ab78dfaca)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::*method_pointer_97799b3aec3e54c9a8650d8cf945ef67)() const = &::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::MultivariateDistributionEstimation::Estimator >::*method_pointer_2c031f7512535592a19998e88f178059)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::set_maxits;
    boost::python::class_< autowig::Wrap_b65e2bfb02355375b92295f460fb1b15, autowig::Held< autowig::Wrap_b65e2bfb02355375b92295f460fb1b15 >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_b65e2bfb02355375b92295f460fb1b15("_Optimization_b65e2bfb02355375b92295f460fb1b15", "", boost::python::no_init);
    class_b65e2bfb02355375b92295f460fb1b15.def("get_mindiff", method_pointer_c36d3177a65a55a2891c280bde267727, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b65e2bfb02355375b92295f460fb1b15.def("set_mindiff", method_pointer_e16b7e51e2515da1900fc2a11cb70114, "");
    class_b65e2bfb02355375b92295f460fb1b15.def("get_minits", method_pointer_2526bfe105a853a8abc9cf0014cb291e, "");
    class_b65e2bfb02355375b92295f460fb1b15.def("set_minits", method_pointer_caeeefd3cde85048a1b7379ab78dfaca, "");
    class_b65e2bfb02355375b92295f460fb1b15.def("get_maxits", method_pointer_97799b3aec3e54c9a8650d8cf945ef67, "");
    class_b65e2bfb02355375b92295f460fb1b15.def("set_maxits", method_pointer_2c031f7512535592a19998e88f178059, "");

    if(autowig::Held< class ::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b65e2bfb02355375b92295f460fb1b15 >::Type, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type >();
    }

}