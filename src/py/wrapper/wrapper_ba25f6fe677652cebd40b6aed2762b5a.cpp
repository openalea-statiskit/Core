#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultinomialSingularDistribution const volatile * get_pointer<class ::statiskit::MultinomialSingularDistribution const volatile >(class ::statiskit::MultinomialSingularDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ba25f6fe677652cebd40b6aed2762b5a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MultinomialSingularDistribution::*method_pointer_42e9fa0aed04588e9cddbb5b19a4bd16)() const = &::statiskit::MultinomialSingularDistribution::get_nb_components;
    unsigned int  (::statiskit::MultinomialSingularDistribution::*method_pointer_257ce855de9b5aa4a2420e8ea5ae7681)() const = &::statiskit::MultinomialSingularDistribution::get_nb_parameters;
    double  (::statiskit::MultinomialSingularDistribution::*method_pointer_04dd4bb7234453a8a83249a171f90c90)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::MultinomialSingularDistribution::probability;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultinomialSingularDistribution::*method_pointer_1d80e687b33f567ba152d02d5154d36b)(unsigned int ) const = &::statiskit::MultinomialSingularDistribution::simulate;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MultinomialSingularDistribution::*method_pointer_0eb2e57f88f7522cbd8ce57df2a18a31)() const = &::statiskit::MultinomialSingularDistribution::get_pi;
    void  (::statiskit::MultinomialSingularDistribution::*method_pointer_9fb5327edbc756a6979e8572e7fc6e90)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MultinomialSingularDistribution::set_pi;
    boost::python::class_< class ::statiskit::MultinomialSingularDistribution, autowig::Held< class ::statiskit::MultinomialSingularDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > > > class_ba25f6fe677652cebd40b6aed2762b5a("MultinomialSingularDistribution", "", boost::python::no_init);
    class_ba25f6fe677652cebd40b6aed2762b5a.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_ba25f6fe677652cebd40b6aed2762b5a.def(boost::python::init< class ::statiskit::MultinomialSingularDistribution const & >(""));
    class_ba25f6fe677652cebd40b6aed2762b5a.def("get_nb_components", method_pointer_42e9fa0aed04588e9cddbb5b19a4bd16, "");
    class_ba25f6fe677652cebd40b6aed2762b5a.def("get_nb_parameters", method_pointer_257ce855de9b5aa4a2420e8ea5ae7681, "");
    class_ba25f6fe677652cebd40b6aed2762b5a.def("probability", method_pointer_04dd4bb7234453a8a83249a171f90c90, "");
    class_ba25f6fe677652cebd40b6aed2762b5a.def("simulate", method_pointer_1d80e687b33f567ba152d02d5154d36b, "");
    class_ba25f6fe677652cebd40b6aed2762b5a.def("get_pi", method_pointer_0eb2e57f88f7522cbd8ce57df2a18a31, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ba25f6fe677652cebd40b6aed2762b5a.def("set_pi", method_pointer_9fb5327edbc756a6979e8572e7fc6e90, "");

    if(autowig::Held< class ::statiskit::MultinomialSingularDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MultinomialSingularDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >::Type >();
    }

}