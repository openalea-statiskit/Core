#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const volatile >(struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_c08067855baa5ebea605270776020990()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c4726473069d576fbb9e53aacbf298ea = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._categorical_univariate_distribution_estimation");
    boost::python::object module_c4726473069d576fbb9e53aacbf298ea(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c4726473069d576fbb9e53aacbf298ea.c_str()))));
    boost::python::scope().attr("_categorical_univariate_distribution_estimation") = module_c4726473069d576fbb9e53aacbf298ea;
    boost::python::scope scope_c4726473069d576fbb9e53aacbf298ea = module_c4726473069d576fbb9e53aacbf298ea;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::CategoricalUnivariateDistributionEstimation::Estimator::*method_pointer_8bc5ea7ddc38507e9ee134a19adc2ef6)(struct ::statiskit::UnivariateData const &, bool const &) const = &::statiskit::CategoricalUnivariateDistributionEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  (::statiskit::CategoricalUnivariateDistributionEstimation::Estimator::*method_pointer_217dfb0ca4fa5215b0825f96ef9498a2)() const = &::statiskit::CategoricalUnivariateDistributionEstimation::Estimator::copy;
    boost::python::class_< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > class_c08067855baa5ebea605270776020990("Estimator", "", boost::python::no_init);
    class_c08067855baa5ebea605270776020990.def(boost::python::init<  >(""));
    class_c08067855baa5ebea605270776020990.def(boost::python::init< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const & >(""));
    class_c08067855baa5ebea605270776020990.def("__call__", method_pointer_8bc5ea7ddc38507e9ee134a19adc2ef6, "");
    class_c08067855baa5ebea605270776020990.def("copy", method_pointer_217dfb0ca4fa5215b0825f96ef9498a2, "");

    if(autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation::Estimator >::Type >();
    }

}