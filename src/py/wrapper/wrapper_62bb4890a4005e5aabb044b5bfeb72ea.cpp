#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::BinaryDistribution const volatile * get_pointer<struct ::statiskit::BinaryDistribution const volatile >(struct ::statiskit::BinaryDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_62bb4890a4005e5aabb044b5bfeb72ea()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::BinaryDistribution::*method_pointer_8634b7e6df395a9aa301b671659b0dbb)() const = &::statiskit::BinaryDistribution::get_pi;
    void  (::statiskit::BinaryDistribution::*method_pointer_3775c9d36e385c5f9b67919e72f13a7b)(double const &) = &::statiskit::BinaryDistribution::set_pi;
    boost::python::class_< struct ::statiskit::BinaryDistribution, autowig::Held< struct ::statiskit::BinaryDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::BinaryDistribution, struct ::statiskit::CategoricalUnivariateDistribution > > > class_62bb4890a4005e5aabb044b5bfeb72ea("BinaryDistribution", "", boost::python::no_init);
    class_62bb4890a4005e5aabb044b5bfeb72ea.def(boost::python::init<  >(""));
    class_62bb4890a4005e5aabb044b5bfeb72ea.def(boost::python::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & >(""));
    class_62bb4890a4005e5aabb044b5bfeb72ea.def(boost::python::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, double const & >(""));
    class_62bb4890a4005e5aabb044b5bfeb72ea.def(boost::python::init< struct ::statiskit::BinaryDistribution const & >(""));
    class_62bb4890a4005e5aabb044b5bfeb72ea.def("get_pi", method_pointer_8634b7e6df395a9aa301b671659b0dbb, "");
    class_62bb4890a4005e5aabb044b5bfeb72ea.def("set_pi", method_pointer_3775c9d36e385c5f9b67919e72f13a7b, "");

    if(autowig::Held< struct ::statiskit::BinaryDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::BinaryDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::BinaryDistribution, struct ::statiskit::CategoricalUnivariateDistribution > >::Type >();
    }

}