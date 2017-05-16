#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile >(class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5b1444f7a44054459e5adff18c81bbfb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_dc50791e84d858309ea9d18d7a6a8593)() const = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::size;
    struct ::statiskit::CategoricalMultivariateDistributionEstimation const * (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_c466036c7d4c5997977c58ba3df72e52)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_estimation;
    double const & (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_c70a2a8ff99657d09028c289a32546a8)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > > class_5b1444f7a44054459e5adff18c81bbfb("_Selection_5b1444f7a44054459e5adff18c81bbfb", "", boost::python::no_init);
    class_5b1444f7a44054459e5adff18c81bbfb.def(boost::python::init<  >(""));
    class_5b1444f7a44054459e5adff18c81bbfb.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_5b1444f7a44054459e5adff18c81bbfb.def(boost::python::init< struct ::statiskit::CategoricalMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_5b1444f7a44054459e5adff18c81bbfb.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >(""));
    class_5b1444f7a44054459e5adff18c81bbfb.def("__len__", method_pointer_dc50791e84d858309ea9d18d7a6a8593, "");
    class_5b1444f7a44054459e5adff18c81bbfb.def("get_estimation", method_pointer_c466036c7d4c5997977c58ba3df72e52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5b1444f7a44054459e5adff18c81bbfb.def("get_score", method_pointer_c70a2a8ff99657d09028c289a32546a8, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > > >();
    }

}