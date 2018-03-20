#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultinomialSingularDistributionEstimation const volatile * get_pointer<struct ::statiskit::MultinomialSingularDistributionEstimation const volatile >(struct ::statiskit::MultinomialSingularDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b487f4fc27725338b969ff43c4c8f4e4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MultinomialSingularDistributionEstimation, autowig::Held< struct ::statiskit::MultinomialSingularDistributionEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > > class_b487f4fc27725338b969ff43c4c8f4e4("MultinomialSingularDistributionEstimation", "", boost::python::no_init);
    class_b487f4fc27725338b969ff43c4c8f4e4.def(boost::python::init< class ::statiskit::MultinomialSingularDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_b487f4fc27725338b969ff43c4c8f4e4.def(boost::python::init< struct ::statiskit::MultinomialSingularDistributionEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::MultinomialSingularDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultinomialSingularDistributionEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type >();
    }

}