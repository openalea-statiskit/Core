#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4aadfd4ed968565d96538f5ee967a12d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MixtureSingularDistribution const * (::statiskit::LazyEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::MixtureDistributionEMEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation > >::*method_pointer_b6dc515704c4539d9277d1c207666090)() const = &::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > >::Type, boost::python::bases< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > > class_4aadfd4ed968565d96538f5ee967a12d("_LazyEstimation_4aadfd4ed968565d96538f5ee967a12d", "", boost::python::no_init);
    class_4aadfd4ed968565d96538f5ee967a12d.def(boost::python::init<  >(""));
    class_4aadfd4ed968565d96538f5ee967a12d.def(boost::python::init< struct ::statiskit::MixtureSingularDistribution const * >(""));
    class_4aadfd4ed968565d96538f5ee967a12d.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > const & >(""));
    class_4aadfd4ed968565d96538f5ee967a12d.def("get_estimated", method_pointer_b6dc515704c4539d9277d1c207666090, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > >::Type, autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type >();
    }

}