#include "_core.h"



namespace autowig
{
    class Wrap_2ceeaed1cf735ad581f7399910bf5819 : public ::statiskit::CovarianceMatrixEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::CovarianceMatrixEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::CovarianceMatrixEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::CovarianceMatrixEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::CovarianceMatrixEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< class ::statiskit::CovarianceMatrixEstimation, struct ::std::default_delete< class ::statiskit::CovarianceMatrixEstimation > >  operator()(struct ::statiskit::MultivariateData const & param_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_1) const
            {
                 ::std::unique_ptr< class ::statiskit::CovarianceMatrixEstimation, struct ::std::default_delete< class ::statiskit::CovarianceMatrixEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< class ::statiskit::CovarianceMatrixEstimation, struct ::std::default_delete< class ::statiskit::CovarianceMatrixEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_2ceeaed1cf735ad581f7399910bf5819 const volatile * get_pointer<autowig::Wrap_2ceeaed1cf735ad581f7399910bf5819 const volatile >(autowig::Wrap_2ceeaed1cf735ad581f7399910bf5819 const volatile *c) { return c; }
    template <> struct ::statiskit::CovarianceMatrixEstimation::Estimator const volatile * get_pointer<struct ::statiskit::CovarianceMatrixEstimation::Estimator const volatile >(struct ::statiskit::CovarianceMatrixEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2ceeaed1cf735ad581f7399910bf5819()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_b1dc4aedfdc854738e1f4aeecbcbce9b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._covariance_matrix_estimation");
    boost::python::object module_b1dc4aedfdc854738e1f4aeecbcbce9b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b1dc4aedfdc854738e1f4aeecbcbce9b.c_str()))));
    boost::python::scope().attr("_covariance_matrix_estimation") = module_b1dc4aedfdc854738e1f4aeecbcbce9b;
    boost::python::scope scope_b1dc4aedfdc854738e1f4aeecbcbce9b = module_b1dc4aedfdc854738e1f4aeecbcbce9b;
    class ::std::unique_ptr< class ::statiskit::CovarianceMatrixEstimation, struct ::std::default_delete< class ::statiskit::CovarianceMatrixEstimation > >  (::statiskit::CovarianceMatrixEstimation::Estimator::*method_pointer_54e6c23aec5b573daebe9c5e0e4ee04f)(struct ::statiskit::MultivariateData const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::CovarianceMatrixEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::CovarianceMatrixEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::CovarianceMatrixEstimation::Estimator > >  (::statiskit::CovarianceMatrixEstimation::Estimator::*method_pointer_4e4f2d9aa5f25ef4960303781859f6c2)() const = &::statiskit::CovarianceMatrixEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_2ceeaed1cf735ad581f7399910bf5819, autowig::Held< autowig::Wrap_2ceeaed1cf735ad581f7399910bf5819 >::Type, boost::noncopyable > class_2ceeaed1cf735ad581f7399910bf5819("Estimator", "", boost::python::no_init);
    class_2ceeaed1cf735ad581f7399910bf5819.def("__call__", boost::python::pure_virtual(method_pointer_54e6c23aec5b573daebe9c5e0e4ee04f), "");
    class_2ceeaed1cf735ad581f7399910bf5819.def("copy", boost::python::pure_virtual(method_pointer_4e4f2d9aa5f25ef4960303781859f6c2), "");
    if(autowig::Held< struct ::statiskit::CovarianceMatrixEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_2ceeaed1cf735ad581f7399910bf5819 >::Type, autowig::Held< struct ::statiskit::CovarianceMatrixEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::CovarianceMatrixEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::CovarianceMatrixEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::CovarianceMatrixEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::CovarianceMatrixEstimation::Estimator >::Type, struct ::statiskit::CovarianceMatrixEstimation::Estimator > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_2ceeaed1cf735ad581f7399910bf5819 >::Type, autowig::Held< struct ::statiskit::CovarianceMatrixEstimation::Estimator >::Type >();
    }    

}