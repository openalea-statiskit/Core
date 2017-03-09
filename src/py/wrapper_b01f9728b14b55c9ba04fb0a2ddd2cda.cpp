#include "_core.h"



namespace autowig
{
    class Wrap_b01f9728b14b55c9ba04fb0a2ddd2cda : public ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >
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
    template <> autowig::Wrap_b01f9728b14b55c9ba04fb0a2ddd2cda const volatile * get_pointer<autowig::Wrap_b01f9728b14b55c9ba04fb0a2ddd2cda const volatile >(autowig::Wrap_b01f9728b14b55c9ba04fb0a2ddd2cda const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b01f9728b14b55c9ba04fb0a2ddd2cda()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_b14b3594a74c5ccc968141047b5145f4 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._discrete_multivariate_distribution_estimation");
    boost::python::object module_b14b3594a74c5ccc968141047b5145f4(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b14b3594a74c5ccc968141047b5145f4.c_str()))));
    boost::python::scope().attr("_discrete_multivariate_distribution_estimation") = module_b14b3594a74c5ccc968141047b5145f4;
    boost::python::scope scope_b14b3594a74c5ccc968141047b5145f4 = module_b14b3594a74c5ccc968141047b5145f4;
    boost::python::class_< autowig::Wrap_b01f9728b14b55c9ba04fb0a2ddd2cda, autowig::Held< autowig::Wrap_b01f9728b14b55c9ba04fb0a2ddd2cda >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_b01f9728b14b55c9ba04fb0a2ddd2cda("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b01f9728b14b55c9ba04fb0a2ddd2cda >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type >();
    }

}