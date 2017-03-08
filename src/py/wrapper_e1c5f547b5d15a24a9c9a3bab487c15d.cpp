#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_e1c5f547b5d15a24a9c9a3bab487c15d const volatile * get_pointer<autowig::Wrap_e1c5f547b5d15a24a9c9a3bab487c15d const volatile >(autowig::Wrap_e1c5f547b5d15a24a9c9a3bab487c15d const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    class Wrap_e1c5f547b5d15a24a9c9a3bab487c15d : public ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >
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


void wrapper_e1c5f547b5d15a24a9c9a3bab487c15d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_ae5ffcb5f4c75f5cbb01e288fa5a986d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._discrete_univariate_distribution_estimation");
    boost::python::object module_ae5ffcb5f4c75f5cbb01e288fa5a986d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_ae5ffcb5f4c75f5cbb01e288fa5a986d.c_str()))));
    boost::python::scope().attr("_discrete_univariate_distribution_estimation") = module_ae5ffcb5f4c75f5cbb01e288fa5a986d;
    boost::python::scope scope_ae5ffcb5f4c75f5cbb01e288fa5a986d = module_ae5ffcb5f4c75f5cbb01e288fa5a986d;
    boost::python::class_< autowig::Wrap_e1c5f547b5d15a24a9c9a3bab487c15d, autowig::Held< autowig::Wrap_e1c5f547b5d15a24a9c9a3bab487c15d >::Type, boost::python::bases< struct ::statiskit::UnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_e1c5f547b5d15a24a9c9a3bab487c15d("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation::Estimator >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e1c5f547b5d15a24a9c9a3bab487c15d >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
    }

}