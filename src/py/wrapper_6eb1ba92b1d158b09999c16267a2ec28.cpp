#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultivariateDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::MultivariateDistributionEstimation::Estimator const volatile >(struct ::statiskit::MultivariateDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


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
    boost::python::class_< struct ::statiskit::MultivariateDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type, boost::noncopyable > class_6eb1ba92b1d158b09999c16267a2ec28("Estimator", "", boost::python::no_init);
    class_6eb1ba92b1d158b09999c16267a2ec28.def("__call__", method_pointer_0cfbeb46728f5e3393b2f59c4a91a99d, "");
    class_6eb1ba92b1d158b09999c16267a2ec28.def("copy", method_pointer_20397b66478a59f481c4e33cec98b652, "");

}