#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::GeometricDistribution const volatile * get_pointer<class ::statiskit::GeometricDistribution const volatile >(class ::statiskit::GeometricDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_39eaaa358ce655d08615c947c949eb83()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::GeometricDistribution::*method_pointer_21fbda6d38ac5b5fa53eb9bbdca5bc3e)() const = &::statiskit::GeometricDistribution::get_nb_parameters;
    double const & (::statiskit::GeometricDistribution::*method_pointer_d37fe93f16df5735affce3768ab15f63)() const = &::statiskit::GeometricDistribution::get_pi;
    void  (::statiskit::GeometricDistribution::*method_pointer_1175d83596a053eca629694bc51b2278)(double const &) = &::statiskit::GeometricDistribution::set_pi;
    double  (::statiskit::GeometricDistribution::*method_pointer_84587e7517965a1397180f7bd42601f8)(int const &) const = &::statiskit::GeometricDistribution::ldf;
    double  (::statiskit::GeometricDistribution::*method_pointer_79f2cf8abcd858afbdacc52cdb9a2d02)(int const &) const = &::statiskit::GeometricDistribution::pdf;
    double  (::statiskit::GeometricDistribution::*method_pointer_80dbc226fc3658a7a1d74062a1c9e7a9)(int const &) const = &::statiskit::GeometricDistribution::cdf;
    int  (::statiskit::GeometricDistribution::*method_pointer_f3d614e0284851e6973d14510b60be36)(double const &) const = &::statiskit::GeometricDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::GeometricDistribution::*method_pointer_3561059d6c0b5ed2ae0895c685b48dcb)() const = &::statiskit::GeometricDistribution::simulate;
    double  (::statiskit::GeometricDistribution::*method_pointer_00ae3aecbd335c0d8a19937bf0d556ce)() const = &::statiskit::GeometricDistribution::get_mean;
    double  (::statiskit::GeometricDistribution::*method_pointer_7567bf9ab45b5c3ba1d98f08eee79468)() const = &::statiskit::GeometricDistribution::get_variance;
    boost::python::class_< class ::statiskit::GeometricDistribution, autowig::Held< class ::statiskit::GeometricDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistribution > > > class_39eaaa358ce655d08615c947c949eb83("GeometricDistribution", "", boost::python::no_init);
    class_39eaaa358ce655d08615c947c949eb83.def(boost::python::init<  >(""));
    class_39eaaa358ce655d08615c947c949eb83.def(boost::python::init< double const & >(""));
    class_39eaaa358ce655d08615c947c949eb83.def(boost::python::init< class ::statiskit::GeometricDistribution const & >(""));
    class_39eaaa358ce655d08615c947c949eb83.def("get_nb_parameters", method_pointer_21fbda6d38ac5b5fa53eb9bbdca5bc3e, "");
    class_39eaaa358ce655d08615c947c949eb83.def("get_pi", method_pointer_d37fe93f16df5735affce3768ab15f63, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of pi\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_39eaaa358ce655d08615c947c949eb83.def("set_pi", method_pointer_1175d83596a053eca629694bc51b2278, "Set the value of pi\n\n:Parameter:\n    `pi` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_39eaaa358ce655d08615c947c949eb83.def("ldf", method_pointer_84587e7517965a1397180f7bd42601f8, "");
    class_39eaaa358ce655d08615c947c949eb83.def("pdf", method_pointer_79f2cf8abcd858afbdacc52cdb9a2d02, "");
    class_39eaaa358ce655d08615c947c949eb83.def("cdf", method_pointer_80dbc226fc3658a7a1d74062a1c9e7a9, "");
    class_39eaaa358ce655d08615c947c949eb83.def("quantile", method_pointer_f3d614e0284851e6973d14510b60be36, "");
    class_39eaaa358ce655d08615c947c949eb83.def("simulate", method_pointer_3561059d6c0b5ed2ae0895c685b48dcb, "");
    class_39eaaa358ce655d08615c947c949eb83.def("get_mean", method_pointer_00ae3aecbd335c0d8a19937bf0d556ce, "");
    class_39eaaa358ce655d08615c947c949eb83.def("get_variance", method_pointer_7567bf9ab45b5c3ba1d98f08eee79468, "");

    if(autowig::Held< class ::statiskit::GeometricDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::GeometricDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
    }

}