#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::UnivariateDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::UnivariateDistributionEstimation::Estimator const volatile >(struct ::statiskit::UnivariateDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_41e812da3d3654cd9fb33041c3acf25f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_340c5465095052af9d63bdb8d9799d79 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._univariate_distribution_estimation");
    boost::python::object module_340c5465095052af9d63bdb8d9799d79(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_340c5465095052af9d63bdb8d9799d79.c_str()))));
    boost::python::scope().attr("_univariate_distribution_estimation") = module_340c5465095052af9d63bdb8d9799d79;
    boost::python::scope scope_340c5465095052af9d63bdb8d9799d79 = module_340c5465095052af9d63bdb8d9799d79;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::UnivariateDistributionEstimation::Estimator::*method_pointer_47877b68ac8c5802b57686bea7f9f547)(struct ::statiskit::MultivariateData const &, ::std::size_t const &) const = &::statiskit::UnivariateDistributionEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::UnivariateDistributionEstimation::Estimator::*method_pointer_163f6bff094c5658b1290a9b2b3a9d26)(::statiskit::UnivariateDistributionEstimation::data_type const &, bool const &) const = &::statiskit::UnivariateDistributionEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  (::statiskit::UnivariateDistributionEstimation::Estimator::*method_pointer_97c0dcb4b9a55407beb1affee63e5b47)() const = &::statiskit::UnivariateDistributionEstimation::Estimator::copy;
    boost::python::class_< struct ::statiskit::UnivariateDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation::Estimator >::Type, boost::noncopyable > class_41e812da3d3654cd9fb33041c3acf25f("Estimator", "", boost::python::no_init);
    class_41e812da3d3654cd9fb33041c3acf25f.def("__call__", method_pointer_47877b68ac8c5802b57686bea7f9f547, "");
    class_41e812da3d3654cd9fb33041c3acf25f.def("__call__", method_pointer_163f6bff094c5658b1290a9b2b3a9d26, "");
    class_41e812da3d3654cd9fb33041c3acf25f.def("copy", method_pointer_97c0dcb4b9a55407beb1affee63e5b47, "");

}