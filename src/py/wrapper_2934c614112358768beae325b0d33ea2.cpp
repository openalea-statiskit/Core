#include "_core.h"


namespace autowig
{
}


void wrapper_2934c614112358768beae325b0d33ea2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_36823ab42b0c57b48d903606aa743329 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._poisson_distribution_ml_estimation");
    boost::python::object module_36823ab42b0c57b48d903606aa743329(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_36823ab42b0c57b48d903606aa743329.c_str()))));
    boost::python::scope().attr("_poisson_distribution_ml_estimation") = module_36823ab42b0c57b48d903606aa743329;
    boost::python::scope scope_36823ab42b0c57b48d903606aa743329 = module_36823ab42b0c57b48d903606aa743329;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistributionEstimation >  (::statiskit::PoissonDistributionMLEstimation::Estimator::*method_pointer_230c358e2801526e86d4cd4371df6846)(class ::std::shared_ptr< struct ::statiskit::UnivariateData > const &, bool const &) const = &::statiskit::PoissonDistributionMLEstimation::Estimator::operator();
    boost::python::class_< struct ::statiskit::PoissonDistributionMLEstimation::Estimator, autowig::Held< struct ::statiskit::PoissonDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_2934c614112358768beae325b0d33ea2("Estimator", "", boost::python::no_init);
    class_2934c614112358768beae325b0d33ea2.def("__call__", method_pointer_230c358e2801526e86d4cd4371df6846, "");

    if(autowig::Held< struct ::statiskit::PoissonDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PoissonDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
    }

}