#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::PoissonDistributionMLEstimation::Estimator const volatile * get_pointer<struct ::statiskit::PoissonDistributionMLEstimation::Estimator const volatile >(struct ::statiskit::PoissonDistributionMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



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
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::PoissonDistributionMLEstimation::Estimator::*method_pointer_75b735393dde5bc2ae67033aa52efa23)(struct ::statiskit::UnivariateData const &, bool const &) const = &::statiskit::PoissonDistributionMLEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  (::statiskit::PoissonDistributionMLEstimation::Estimator::*method_pointer_3a29b0bc0ca554df90730b8052b620e4)() const = &::statiskit::PoissonDistributionMLEstimation::Estimator::copy;
    boost::python::class_< struct ::statiskit::PoissonDistributionMLEstimation::Estimator, autowig::Held< struct ::statiskit::PoissonDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_2934c614112358768beae325b0d33ea2("Estimator", "", boost::python::no_init);
    class_2934c614112358768beae325b0d33ea2.def(boost::python::init<  >(""));
    class_2934c614112358768beae325b0d33ea2.def(boost::python::init< struct ::statiskit::PoissonDistributionMLEstimation::Estimator const & >(""));
    class_2934c614112358768beae325b0d33ea2.def("__call__", method_pointer_75b735393dde5bc2ae67033aa52efa23, "");
    class_2934c614112358768beae325b0d33ea2.def("copy", method_pointer_3a29b0bc0ca554df90730b8052b620e4, "");

    if(autowig::Held< struct ::statiskit::PoissonDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PoissonDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::PoissonDistributionMLEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::PoissonDistributionMLEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::PoissonDistributionMLEstimation::Estimator >::Type, struct ::statiskit::PoissonDistributionMLEstimation::Estimator > > >();
    }

}