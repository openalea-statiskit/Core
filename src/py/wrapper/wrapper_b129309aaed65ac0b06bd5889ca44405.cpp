#include "_core.h"



namespace autowig
{
    class Wrap_b129309aaed65ac0b06bd5889ca44405 : public ::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >, public boost::python::wrapper< class ::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >
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
    template <> autowig::Wrap_b129309aaed65ac0b06bd5889ca44405 const volatile * get_pointer<autowig::Wrap_b129309aaed65ac0b06bd5889ca44405 const volatile >(autowig::Wrap_b129309aaed65ac0b06bd5889ca44405 const volatile *c) { return c; }
    template <> class ::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > const volatile >(class ::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b129309aaed65ac0b06bd5889ca44405()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::*method_pointer_666f7dc552cd5d648c81f79b98fbf641)() const = &::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::*method_pointer_9ae59d8d8dbc5bf19bc5b2c0fb0b1c94)(double const &) = &::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::*method_pointer_1b74e45326c556f9ba3ca66870707899)() const = &::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::*method_pointer_bef75f81b31b5e25ba1f1e1729568f90)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::*method_pointer_4257d4cad6f15438911f7366b56ca1f4)() const = &::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::*method_pointer_f82c3bc1dc025e33833e462f3c4acf0a)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::set_maxits;
    boost::python::class_< autowig::Wrap_b129309aaed65ac0b06bd5889ca44405, autowig::Held< autowig::Wrap_b129309aaed65ac0b06bd5889ca44405 >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_b129309aaed65ac0b06bd5889ca44405("_Optimization_b129309aaed65ac0b06bd5889ca44405", "", boost::python::no_init);
    class_b129309aaed65ac0b06bd5889ca44405.def("get_mindiff", method_pointer_666f7dc552cd5d648c81f79b98fbf641, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b129309aaed65ac0b06bd5889ca44405.def("set_mindiff", method_pointer_9ae59d8d8dbc5bf19bc5b2c0fb0b1c94, "");
    class_b129309aaed65ac0b06bd5889ca44405.def("get_minits", method_pointer_1b74e45326c556f9ba3ca66870707899, "");
    class_b129309aaed65ac0b06bd5889ca44405.def("set_minits", method_pointer_bef75f81b31b5e25ba1f1e1729568f90, "");
    class_b129309aaed65ac0b06bd5889ca44405.def("get_maxits", method_pointer_4257d4cad6f15438911f7366b56ca1f4, "");
    class_b129309aaed65ac0b06bd5889ca44405.def("set_maxits", method_pointer_f82c3bc1dc025e33833e462f3c4acf0a, "");

    if(autowig::Held< class ::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b129309aaed65ac0b06bd5889ca44405 >::Type, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
    }

}