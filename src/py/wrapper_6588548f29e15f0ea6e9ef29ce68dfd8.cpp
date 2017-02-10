#include "_core.h"


namespace autowig
{
}


void wrapper_6588548f29e15f0ea6e9ef29ce68dfd8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::outcome_type  (::statiskit::DiscreteSampleSpace::*method_pointer_ef088c60e12c52ca84b4af897e2a354b)() const = &::statiskit::DiscreteSampleSpace::get_outcome;
    enum ::statiskit::ordering_type  (::statiskit::DiscreteSampleSpace::*method_pointer_1c79f8878a485dcf8ba547f4277ceac9)() const = &::statiskit::DiscreteSampleSpace::get_ordering;
    boost::python::class_< struct ::statiskit::DiscreteSampleSpace, autowig::Held< struct ::statiskit::DiscreteSampleSpace >::Type, boost::python::bases< struct ::statiskit::UnivariateSampleSpace >, boost::noncopyable > class_6588548f29e15f0ea6e9ef29ce68dfd8("DiscreteSampleSpace", "", boost::python::no_init);
    class_6588548f29e15f0ea6e9ef29ce68dfd8.def("get_outcome", method_pointer_ef088c60e12c52ca84b4af897e2a354b, "");
    class_6588548f29e15f0ea6e9ef29ce68dfd8.def("get_ordering", method_pointer_1c79f8878a485dcf8ba547f4277ceac9, "");

    if(autowig::Held< struct ::statiskit::DiscreteSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteSampleSpace >::Type, autowig::Held< struct ::statiskit::UnivariateSampleSpace >::Type >();
    }

}