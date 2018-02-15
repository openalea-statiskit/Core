#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultivariateMeanEstimation::Estimator const volatile * get_pointer<struct ::statiskit::MultivariateMeanEstimation::Estimator const volatile >(struct ::statiskit::MultivariateMeanEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_49bd08872be751c291082c55ce0677e3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_bac6b66586be52859b259d0c4440e387 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._multivariate_mean_estimation");
    boost::python::object module_bac6b66586be52859b259d0c4440e387(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_bac6b66586be52859b259d0c4440e387.c_str()))));
    boost::python::scope().attr("_multivariate_mean_estimation") = module_bac6b66586be52859b259d0c4440e387;
    boost::python::scope scope_bac6b66586be52859b259d0c4440e387 = module_bac6b66586be52859b259d0c4440e387;
    class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > >  (::statiskit::MultivariateMeanEstimation::Estimator::*method_pointer_57327e854bf6548697bbb3fd6cad4e85)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MultivariateMeanEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > >  (::statiskit::MultivariateMeanEstimation::Estimator::*method_pointer_454eba19d53d5a7cba64a22215e89442)() const = &::statiskit::MultivariateMeanEstimation::Estimator::copy;
    boost::python::class_< struct ::statiskit::MultivariateMeanEstimation::Estimator, autowig::Held< struct ::statiskit::MultivariateMeanEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::MultivariateLocationEstimation::Estimator > > class_49bd08872be751c291082c55ce0677e3("Estimator", "", boost::python::no_init);
    class_49bd08872be751c291082c55ce0677e3.def(boost::python::init<  >(""));
    class_49bd08872be751c291082c55ce0677e3.def(boost::python::init< struct ::statiskit::MultivariateMeanEstimation::Estimator const & >(""));
    class_49bd08872be751c291082c55ce0677e3.def("__call__", method_pointer_57327e854bf6548697bbb3fd6cad4e85, "");
    class_49bd08872be751c291082c55ce0677e3.def("copy", method_pointer_454eba19d53d5a7cba64a22215e89442, "");

    if(autowig::Held< struct ::statiskit::MultivariateMeanEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultivariateMeanEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateLocationEstimation::Estimator >::Type >();
    }

}