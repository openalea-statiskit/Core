#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::DirichletMultinomialSingularDistribution const volatile * get_pointer<class ::statiskit::DirichletMultinomialSingularDistribution const volatile >(class ::statiskit::DirichletMultinomialSingularDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d7aaae9c78655d9f870d5f017126833f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::DirichletMultinomialSingularDistribution::*method_pointer_53cdb7b6bdfa5b52a5a7388f16ce3660)() const = &::statiskit::DirichletMultinomialSingularDistribution::get_nb_components;
    unsigned int  (::statiskit::DirichletMultinomialSingularDistribution::*method_pointer_a1406732d9a6551189f12c0c4038acf0)() const = &::statiskit::DirichletMultinomialSingularDistribution::get_nb_parameters;
    double  (::statiskit::DirichletMultinomialSingularDistribution::*method_pointer_fa08ff8bc42f5e939535c80832e30b9f)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::DirichletMultinomialSingularDistribution::probability;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::DirichletMultinomialSingularDistribution::*method_pointer_fbd0744ace815fe993f4be6df7484eaf)(unsigned int ) const = &::statiskit::DirichletMultinomialSingularDistribution::simulate;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::DirichletMultinomialSingularDistribution::*method_pointer_06bd867c93c85c6f87717fbc2be04a50)() const = &::statiskit::DirichletMultinomialSingularDistribution::get_alpha;
    void  (::statiskit::DirichletMultinomialSingularDistribution::*method_pointer_6834eea566225a72a1dba7a36998e76a)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::DirichletMultinomialSingularDistribution::set_alpha;
    boost::python::class_< class ::statiskit::DirichletMultinomialSingularDistribution, autowig::Held< class ::statiskit::DirichletMultinomialSingularDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > > > class_d7aaae9c78655d9f870d5f017126833f("DirichletMultinomialSingularDistribution", "", boost::python::no_init);
    class_d7aaae9c78655d9f870d5f017126833f.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_d7aaae9c78655d9f870d5f017126833f.def(boost::python::init< class ::statiskit::DirichletMultinomialSingularDistribution const & >(""));
    class_d7aaae9c78655d9f870d5f017126833f.def("get_nb_components", method_pointer_53cdb7b6bdfa5b52a5a7388f16ce3660, "");
    class_d7aaae9c78655d9f870d5f017126833f.def("get_nb_parameters", method_pointer_a1406732d9a6551189f12c0c4038acf0, "");
    class_d7aaae9c78655d9f870d5f017126833f.def("probability", method_pointer_fa08ff8bc42f5e939535c80832e30b9f, "");
    class_d7aaae9c78655d9f870d5f017126833f.def("simulate", method_pointer_fbd0744ace815fe993f4be6df7484eaf, "");
    class_d7aaae9c78655d9f870d5f017126833f.def("get_alpha", method_pointer_06bd867c93c85c6f87717fbc2be04a50, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d7aaae9c78655d9f870d5f017126833f.def("set_alpha", method_pointer_6834eea566225a72a1dba7a36998e76a, "");

    if(autowig::Held< class ::statiskit::DirichletMultinomialSingularDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::DirichletMultinomialSingularDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >::Type >();
    }

}