#include "_core.h"


namespace autowig
{
}


void wrapper_49ca84779c315483b61bc3fa2c2221b3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    bool  (::statiskit::RealSampleSpace::*method_pointer_a084cae0ca8157b8845bd75a352fad30)(struct ::statiskit::UnivariateEvent const *) const = &::statiskit::RealSampleSpace::is_compatible;
    double const & (::statiskit::RealSampleSpace::*method_pointer_e45aa72c802953dbb36e6b5455b1259f)() const = &::statiskit::RealSampleSpace::get_lower_bound;
    double const & (::statiskit::RealSampleSpace::*method_pointer_e4cbbd25259f5cc096668eb93a2c4623)() const = &::statiskit::RealSampleSpace::get_upper_bound;
    bool const & (::statiskit::RealSampleSpace::*method_pointer_1b3382c01d7b5a75a6be397193c75a26)() const = &::statiskit::RealSampleSpace::get_left_closed;
    bool const & (::statiskit::RealSampleSpace::*method_pointer_2059defeec565154b2e04dcf45efe891)() const = &::statiskit::RealSampleSpace::get_right_closed;
    class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  (::statiskit::RealSampleSpace::*method_pointer_0ec718c9211b5b6a97ffc5e0589b507c)() const = &::statiskit::RealSampleSpace::copy;
    boost::python::class_< class ::statiskit::RealSampleSpace, autowig::Held< class ::statiskit::RealSampleSpace >::Type, boost::python::bases< struct ::statiskit::ContinuousSampleSpace > > class_49ca84779c315483b61bc3fa2c2221b3("RealSampleSpace", "", boost::python::no_init);
    class_49ca84779c315483b61bc3fa2c2221b3.def(boost::python::init< double const &, double const &, bool const &, bool const & >(""));
    class_49ca84779c315483b61bc3fa2c2221b3.def("is_compatible", method_pointer_a084cae0ca8157b8845bd75a352fad30, "");
    class_49ca84779c315483b61bc3fa2c2221b3.def("get_lower_bound", method_pointer_e45aa72c802953dbb36e6b5455b1259f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_49ca84779c315483b61bc3fa2c2221b3.def("get_upper_bound", method_pointer_e4cbbd25259f5cc096668eb93a2c4623, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_49ca84779c315483b61bc3fa2c2221b3.def("get_left_closed", method_pointer_1b3382c01d7b5a75a6be397193c75a26, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_49ca84779c315483b61bc3fa2c2221b3.def("get_right_closed", method_pointer_2059defeec565154b2e04dcf45efe891, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_49ca84779c315483b61bc3fa2c2221b3.def("copy", method_pointer_0ec718c9211b5b6a97ffc5e0589b507c, "");

    if(autowig::Held< class ::statiskit::RealSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::RealSampleSpace >::Type, autowig::Held< struct ::statiskit::ContinuousSampleSpace >::Type >();
    }

}