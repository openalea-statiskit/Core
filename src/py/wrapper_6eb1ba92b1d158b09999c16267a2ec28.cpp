#include "_core.h"



namespace autowig
{
    class Wrap_6eb1ba92b1d158b09999c16267a2ec28 : public ::statiskit::MultivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::MultivariateDistributionEstimation::Estimator >
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
    template <> autowig::Wrap_6eb1ba92b1d158b09999c16267a2ec28 const volatile * get_pointer<autowig::Wrap_6eb1ba92b1d158b09999c16267a2ec28 const volatile >(autowig::Wrap_6eb1ba92b1d158b09999c16267a2ec28 const volatile *c) { return c; }
    template <> struct ::statiskit::MultivariateDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::MultivariateDistributionEstimation::Estimator const volatile >(struct ::statiskit::MultivariateDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6eb1ba92b1d158b09999c16267a2ec28()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_43ff7c79dcd15ad9995fd0d0ccc6d440 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._multivariate_distribution_estimation");
    boost::python::object module_43ff7c79dcd15ad9995fd0d0ccc6d440(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_43ff7c79dcd15ad9995fd0d0ccc6d440.c_str()))));
    boost::python::scope().attr("_multivariate_distribution_estimation") = module_43ff7c79dcd15ad9995fd0d0ccc6d440;
    boost::python::scope scope_43ff7c79dcd15ad9995fd0d0ccc6d440 = module_43ff7c79dcd15ad9995fd0d0ccc6d440;
    class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  (::statiskit::MultivariateDistributionEstimation::Estimator::*method_pointer_0cfbeb46728f5e3393b2f59c4a91a99d)(::statiskit::MultivariateDistributionEstimation::data_type const &, bool const &) const = &::statiskit::MultivariateDistributionEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  (::statiskit::MultivariateDistributionEstimation::Estimator::*method_pointer_20397b66478a59f481c4e33cec98b652)() const = &::statiskit::MultivariateDistributionEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_6eb1ba92b1d158b09999c16267a2ec28, autowig::Held< autowig::Wrap_6eb1ba92b1d158b09999c16267a2ec28 >::Type, boost::noncopyable > class_6eb1ba92b1d158b09999c16267a2ec28("Estimator", "", boost::python::no_init);
    class_6eb1ba92b1d158b09999c16267a2ec28.def("__call__", boost::python::pure_virtual(method_pointer_0cfbeb46728f5e3393b2f59c4a91a99d), "");
    class_6eb1ba92b1d158b09999c16267a2ec28.def("copy", boost::python::pure_virtual(method_pointer_20397b66478a59f481c4e33cec98b652), "");
    if(autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_6eb1ba92b1d158b09999c16267a2ec28 >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::MultivariateDistributionEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type, struct ::statiskit::MultivariateDistributionEstimation::Estimator > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_6eb1ba92b1d158b09999c16267a2ec28 >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type >();
    }    

}