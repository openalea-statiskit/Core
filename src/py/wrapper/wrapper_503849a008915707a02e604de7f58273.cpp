#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile >(class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_503849a008915707a02e604de7f58273()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_0de45a973ac950faaca5e355509387a5)() const = &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::size;
    struct ::statiskit::SingularDistributionEstimation const * (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_12557a639d545aa0ab998aafb61048dd)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_estimation;
    double const & (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_d1c0f88f0cc75e1eacc8a731732f12ed)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::Held< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > > > class_503849a008915707a02e604de7f58273("_Selection_503849a008915707a02e604de7f58273", "", boost::python::no_init);
    class_503849a008915707a02e604de7f58273.def(boost::python::init<  >(""));
    class_503849a008915707a02e604de7f58273.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_503849a008915707a02e604de7f58273.def(boost::python::init< struct ::statiskit::SingularDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_503849a008915707a02e604de7f58273.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >(""));
    class_503849a008915707a02e604de7f58273.def("__len__", method_pointer_0de45a973ac950faaca5e355509387a5, "");
    class_503849a008915707a02e604de7f58273.def("get_estimation", method_pointer_12557a639d545aa0ab998aafb61048dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_503849a008915707a02e604de7f58273.def("get_score", method_pointer_d1c0f88f0cc75e1eacc8a731732f12ed, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type >();
    }

}