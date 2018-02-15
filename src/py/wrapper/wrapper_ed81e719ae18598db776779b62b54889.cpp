#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator const volatile >(class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ed81e719ae18598db776779b62b54889()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_503849a008915707a02e604de7f58273 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_503849a008915707a02e604de7f58273");
    boost::python::object module_503849a008915707a02e604de7f58273(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_503849a008915707a02e604de7f58273.c_str()))));
    boost::python::scope().attr("__selection_503849a008915707a02e604de7f58273") = module_503849a008915707a02e604de7f58273;
    boost::python::scope scope_503849a008915707a02e604de7f58273 = module_503849a008915707a02e604de7f58273;
    enum ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::CriterionEstimator::*method_pointer_64a07b1218e65bf889a88e3dea8391d9)() const = &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::get_criterion;
    void  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::CriterionEstimator::*method_pointer_e55378b404f25c74b20799ab98e0b99d)(enum ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::criterion_type const &) = &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::set_criterion;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, autowig::Held< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > > > class_ed81e719ae18598db776779b62b54889("CriterionEstimator", "", boost::python::no_init);
    class_ed81e719ae18598db776779b62b54889.def(boost::python::init<  >(""));
    class_ed81e719ae18598db776779b62b54889.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator const & >(""));
    class_ed81e719ae18598db776779b62b54889.def("get_criterion", method_pointer_64a07b1218e65bf889a88e3dea8391d9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed81e719ae18598db776779b62b54889.def("set_criterion", method_pointer_e55378b404f25c74b20799ab98e0b99d, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > >::Type >();
    }

}