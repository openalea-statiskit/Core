#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultivariateVarianceEstimation::Estimator const volatile * get_pointer<class ::statiskit::MultivariateVarianceEstimation::Estimator const volatile >(class ::statiskit::MultivariateVarianceEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2b57b3b9280e5071b728b923da9d2c0a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_8f6b8d601b265537abfca5a924ae495d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._multivariate_variance_estimation");
    boost::python::object module_8f6b8d601b265537abfca5a924ae495d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_8f6b8d601b265537abfca5a924ae495d.c_str()))));
    boost::python::scope().attr("_multivariate_variance_estimation") = module_8f6b8d601b265537abfca5a924ae495d;
    boost::python::scope scope_8f6b8d601b265537abfca5a924ae495d = module_8f6b8d601b265537abfca5a924ae495d;
    class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > >  (::statiskit::MultivariateVarianceEstimation::Estimator::*method_pointer_f72f0ad2d720598e9d9135fd3462018d)(struct ::statiskit::MultivariateData const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::MultivariateVarianceEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > >  (::statiskit::MultivariateVarianceEstimation::Estimator::*method_pointer_3d95d64a844a551593d22a853ab9ecf0)() const = &::statiskit::MultivariateVarianceEstimation::Estimator::copy;
    bool const & (::statiskit::MultivariateVarianceEstimation::Estimator::*method_pointer_19e6c9732f0a5e80856982835a8040e3)() const = &::statiskit::MultivariateVarianceEstimation::Estimator::get_bias;
    void  (::statiskit::MultivariateVarianceEstimation::Estimator::*method_pointer_36ba447492c953dc8de6309288836092)(bool const &) = &::statiskit::MultivariateVarianceEstimation::Estimator::set_bias;
    boost::python::class_< class ::statiskit::MultivariateVarianceEstimation::Estimator, autowig::Held< class ::statiskit::MultivariateVarianceEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::MultivariateDispersionEstimation::Estimator > > class_2b57b3b9280e5071b728b923da9d2c0a("Estimator", "", boost::python::no_init);
    class_2b57b3b9280e5071b728b923da9d2c0a.def(boost::python::init<  >(""));
    class_2b57b3b9280e5071b728b923da9d2c0a.def(boost::python::init< bool const & >(""));
    class_2b57b3b9280e5071b728b923da9d2c0a.def(boost::python::init< class ::statiskit::MultivariateVarianceEstimation::Estimator const & >(""));
    class_2b57b3b9280e5071b728b923da9d2c0a.def("__call__", method_pointer_f72f0ad2d720598e9d9135fd3462018d, "");
    class_2b57b3b9280e5071b728b923da9d2c0a.def("copy", method_pointer_3d95d64a844a551593d22a853ab9ecf0, "");
    class_2b57b3b9280e5071b728b923da9d2c0a.def("get_bias", method_pointer_19e6c9732f0a5e80856982835a8040e3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2b57b3b9280e5071b728b923da9d2c0a.def("set_bias", method_pointer_36ba447492c953dc8de6309288836092, "");

    if(autowig::Held< class ::statiskit::MultivariateVarianceEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MultivariateVarianceEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateDispersionEstimation::Estimator >::Type >();
    }

}