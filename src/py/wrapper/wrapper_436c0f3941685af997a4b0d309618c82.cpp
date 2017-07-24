#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile * get_pointer<class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile >(class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_436c0f3941685af997a4b0d309618c82()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_696d8519751c50b58e564a3e1037f5f0 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__mixture_distribution_em_estimation_696d8519751c50b58e564a3e1037f5f0");
    boost::python::object module_696d8519751c50b58e564a3e1037f5f0(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_696d8519751c50b58e564a3e1037f5f0.c_str()))));
    boost::python::scope().attr("__mixture_distribution_em_estimation_696d8519751c50b58e564a3e1037f5f0") = module_696d8519751c50b58e564a3e1037f5f0;
    boost::python::scope scope_696d8519751c50b58e564a3e1037f5f0 = module_696d8519751c50b58e564a3e1037f5f0;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_bb63222022e3531eacf0ae44e24109a7)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::get_pi;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_cd20d3ecc9cc56a498689896891161de)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::set_pi;
    struct ::statiskit::SplittingOperatorEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_caf870f858405fe6be4e99bd9ffdb9ac)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::get_default_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_cb181a55aade58fb9f5e23a36f32f8dd)(struct ::statiskit::SplittingOperatorEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::set_default_estimator;
    struct ::statiskit::SplittingOperatorEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_d8b28e76f1115483a4e065191bfaae91)(::statiskit::Index const &) const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::get_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_4108cd20eb63575e81c0242915251f7c)(::statiskit::Index const &, struct ::statiskit::SplittingOperatorEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::set_estimator;
    struct ::statiskit::SplittingMixtureOperator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_552cdbb08b435af1af456f9914c44418)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::get_initializator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_90fa541be84f558593b8018254b31fdd)(struct ::statiskit::SplittingMixtureOperator const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::set_initializator;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_f5cbe07473345083858be5943c1a77dc)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::get_limit;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_199f9c6e5070536fb97327d70822da55)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::set_limit;
    boost::python::class_< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator, autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > > class_436c0f3941685af997a4b0d309618c82("Estimator", "", boost::python::no_init);
    class_436c0f3941685af997a4b0d309618c82.def(boost::python::init<  >(""));
    class_436c0f3941685af997a4b0d309618c82.def(boost::python::init< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const & >(""));
    class_436c0f3941685af997a4b0d309618c82.def("get_pi", method_pointer_bb63222022e3531eacf0ae44e24109a7, "");
    class_436c0f3941685af997a4b0d309618c82.def("set_pi", method_pointer_cd20d3ecc9cc56a498689896891161de, "");
    class_436c0f3941685af997a4b0d309618c82.def("get_default_estimator", method_pointer_caf870f858405fe6be4e99bd9ffdb9ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_436c0f3941685af997a4b0d309618c82.def("set_default_estimator", method_pointer_cb181a55aade58fb9f5e23a36f32f8dd, "");
    class_436c0f3941685af997a4b0d309618c82.def("get_estimator", method_pointer_d8b28e76f1115483a4e065191bfaae91, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_436c0f3941685af997a4b0d309618c82.def("set_estimator", method_pointer_4108cd20eb63575e81c0242915251f7c, "");
    class_436c0f3941685af997a4b0d309618c82.def("get_initializator", method_pointer_552cdbb08b435af1af456f9914c44418, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_436c0f3941685af997a4b0d309618c82.def("set_initializator", method_pointer_90fa541be84f558593b8018254b31fdd, "");
    class_436c0f3941685af997a4b0d309618c82.def("get_limit", method_pointer_f5cbe07473345083858be5943c1a77dc, "");
    class_436c0f3941685af997a4b0d309618c82.def("set_limit", method_pointer_199f9c6e5070536fb97327d70822da55, "");

    if(autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type >();
    }

}