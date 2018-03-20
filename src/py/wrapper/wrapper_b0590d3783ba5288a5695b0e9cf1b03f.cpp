#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b0590d3783ba5288a5695b0e9cf1b03f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::DirichletMultinomialSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_c5ac1ee7064d5664ab40314c3a0d023b)() const = &::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > > class_b0590d3783ba5288a5695b0e9cf1b03f("_ActiveEstimation_b0590d3783ba5288a5695b0e9cf1b03f", "", boost::python::no_init);
    class_b0590d3783ba5288a5695b0e9cf1b03f.def(boost::python::init<  >(""));
    class_b0590d3783ba5288a5695b0e9cf1b03f.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_b0590d3783ba5288a5695b0e9cf1b03f.def(boost::python::init< class ::statiskit::DirichletMultinomialSingularDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_b0590d3783ba5288a5695b0e9cf1b03f.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >(""));
    class_b0590d3783ba5288a5695b0e9cf1b03f.def("get_data", method_pointer_c5ac1ee7064d5664ab40314c3a0d023b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type >();
    }

}