#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7815e44baa9c505681db76fc0d0c7fd6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_6c695d2ebbf45d4ba94609396fcb05f3)() const = &::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > > > class_7815e44baa9c505681db76fc0d0c7fd6("_ActiveEstimation_7815e44baa9c505681db76fc0d0c7fd6", "", boost::python::no_init);
    class_7815e44baa9c505681db76fc0d0c7fd6.def(boost::python::init<  >(""));
    class_7815e44baa9c505681db76fc0d0c7fd6.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_7815e44baa9c505681db76fc0d0c7fd6.def(boost::python::init< struct ::statiskit::SingularDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_7815e44baa9c505681db76fc0d0c7fd6.def(boost::python::init< class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >(""));
    class_7815e44baa9c505681db76fc0d0c7fd6.def("get_data", method_pointer_6c695d2ebbf45d4ba94609396fcb05f3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type >();
    }

}