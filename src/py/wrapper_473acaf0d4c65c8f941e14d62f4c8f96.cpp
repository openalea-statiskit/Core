#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultinomialSplittingDistribution const volatile * get_pointer<class ::statiskit::MultinomialSplittingDistribution const volatile >(class ::statiskit::MultinomialSplittingDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_473acaf0d4c65c8f941e14d62f4c8f96()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::DiscreteUnivariateDistribution const * (::statiskit::MultinomialSplittingDistribution::*method_pointer_2a67dd4e83865fd59238cb9c999a4861)() const = &::statiskit::MultinomialSplittingDistribution::get_sum;
    void  (::statiskit::MultinomialSplittingDistribution::*method_pointer_fee64128b072591b9691b2f41aed39e2)(struct ::statiskit::DiscreteUnivariateDistribution const &) = &::statiskit::MultinomialSplittingDistribution::set_sum;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MultinomialSplittingDistribution::*method_pointer_7c7f0a41fe1f5982af43d8c680bba308)() const = &::statiskit::MultinomialSplittingDistribution::get_pi;
    void  (::statiskit::MultinomialSplittingDistribution::*method_pointer_a7903b8b95f45ed0bbc3f46a3ff337b3)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MultinomialSplittingDistribution::set_pi;
    boost::python::class_< class ::statiskit::MultinomialSplittingDistribution, autowig::Held< class ::statiskit::MultinomialSplittingDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > > > class_473acaf0d4c65c8f941e14d62f4c8f96("MultinomialSplittingDistribution", "", boost::python::no_init);
    class_473acaf0d4c65c8f941e14d62f4c8f96.def(boost::python::init< struct ::statiskit::DiscreteUnivariateDistribution const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_473acaf0d4c65c8f941e14d62f4c8f96.def(boost::python::init< class ::statiskit::MultinomialSplittingDistribution const & >(""));
    class_473acaf0d4c65c8f941e14d62f4c8f96.def("get_sum", method_pointer_2a67dd4e83865fd59238cb9c999a4861, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_473acaf0d4c65c8f941e14d62f4c8f96.def("set_sum", method_pointer_fee64128b072591b9691b2f41aed39e2, "");
    class_473acaf0d4c65c8f941e14d62f4c8f96.def("get_pi", method_pointer_7c7f0a41fe1f5982af43d8c680bba308, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_473acaf0d4c65c8f941e14d62f4c8f96.def("set_pi", method_pointer_a7903b8b95f45ed0bbc3f46a3ff337b3, "");

    if(autowig::Held< class ::statiskit::MultinomialSplittingDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MultinomialSplittingDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::MultinomialSplittingDistribution >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::MultinomialSplittingDistribution, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::MultinomialSplittingDistribution >::Type, class ::statiskit::MultinomialSplittingDistribution > > >();
    }

}