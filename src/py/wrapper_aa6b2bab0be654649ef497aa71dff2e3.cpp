#include "_core.h"


namespace autowig
{
}


void wrapper_aa6b2bab0be654649ef497aa71dff2e3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::outcome_type  (::statiskit::ContinuousSampleSpace::*method_pointer_ce443c4aefe55cf5b2debe02d45c58ed)() const = &::statiskit::ContinuousSampleSpace::get_outcome;
    enum ::statiskit::ordering_type  (::statiskit::ContinuousSampleSpace::*method_pointer_dd35b002873d50f698c1c0f5e685daf1)() const = &::statiskit::ContinuousSampleSpace::get_ordering;
    boost::python::class_< struct ::statiskit::ContinuousSampleSpace, autowig::Held< struct ::statiskit::ContinuousSampleSpace >::Type, boost::python::bases< struct ::statiskit::UnivariateSampleSpace >, boost::noncopyable > class_aa6b2bab0be654649ef497aa71dff2e3("ContinuousSampleSpace", "", boost::python::no_init);
    class_aa6b2bab0be654649ef497aa71dff2e3.def("get_outcome", method_pointer_ce443c4aefe55cf5b2debe02d45c58ed, "");
    class_aa6b2bab0be654649ef497aa71dff2e3.def("get_ordering", method_pointer_dd35b002873d50f698c1c0f5e685daf1, "");

    if(autowig::Held< struct ::statiskit::ContinuousSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousSampleSpace >::Type, autowig::Held< struct ::statiskit::UnivariateSampleSpace >::Type >();
    }

}