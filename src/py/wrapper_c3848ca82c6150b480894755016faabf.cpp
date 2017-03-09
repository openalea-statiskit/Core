#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultivariateDataFrame const volatile * get_pointer<class ::statiskit::MultivariateDataFrame const volatile >(class ::statiskit::MultivariateDataFrame const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c3848ca82c6150b480894755016faabf()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  (::statiskit::MultivariateDataFrame::*method_pointer_cb42d7d3c1215410ae8eec0a996355f2)() const = &::statiskit::MultivariateDataFrame::generator;
    struct ::statiskit::MultivariateSampleSpace const * (::statiskit::MultivariateDataFrame::*method_pointer_d0a4ed242b5f5262a3f67c7c65f5d1ed)() const = &::statiskit::MultivariateDataFrame::get_sample_space;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_ceb65df6fb445fa2846e8bb4a96abc30)(struct ::statiskit::MultivariateSampleSpace const &) = &::statiskit::MultivariateDataFrame::set_sample_space;
    class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  (::statiskit::MultivariateDataFrame::*method_pointer_86c4eec981d358ffb89d951709ca042f)(::statiskit::Index const &) const = &::statiskit::MultivariateDataFrame::extract;
    class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  (::statiskit::MultivariateDataFrame::*method_pointer_0ab68ca083ea50fb8331aae3f3cc6f20)(class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const &) const = &::statiskit::MultivariateDataFrame::extract;
    class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  (::statiskit::MultivariateDataFrame::*method_pointer_7e101dc71c4750358ade0510b89d977c)() const = &::statiskit::MultivariateDataFrame::copy;
    ::statiskit::Index  (::statiskit::MultivariateDataFrame::*method_pointer_675858e74804540f867575e4e24f1873)() const = &::statiskit::MultivariateDataFrame::get_nb_variables;
    class ::statiskit::UnivariateDataFrame const * (::statiskit::MultivariateDataFrame::*method_pointer_682c4154102f5c40b36d9216cff2cda1)(::statiskit::Index const &) const = &::statiskit::MultivariateDataFrame::get_variable;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_aa8deeaf32bb5bfdaec1cf6adfaf07e7)(::statiskit::Index const &, class ::statiskit::UnivariateDataFrame const &) = &::statiskit::MultivariateDataFrame::set_variable;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_17b0a5af15e657a9980dadc6f692e531)(class ::statiskit::UnivariateDataFrame const &) = &::statiskit::MultivariateDataFrame::add_variable;
    class ::std::unique_ptr< class ::statiskit::UnivariateDataFrame, struct ::std::default_delete< class ::statiskit::UnivariateDataFrame > >  (::statiskit::MultivariateDataFrame::*method_pointer_62d39d0a827d5d0bb8bf0c862c9a5684)() = &::statiskit::MultivariateDataFrame::pop_variable;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_3eedcca7cb1a5633b9a0c9394b3de631)(::statiskit::Index const &, class ::statiskit::UnivariateDataFrame const &) = &::statiskit::MultivariateDataFrame::insert_variable;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_fa2a4da314ab5578bda0e45a3509407a)(::statiskit::Index const &) = &::statiskit::MultivariateDataFrame::remove_variable;
    ::statiskit::Index  (::statiskit::MultivariateDataFrame::*method_pointer_10ac8325c1085cec9a39efd69ba41c3c)() const = &::statiskit::MultivariateDataFrame::get_nb_events;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateDataFrame::*method_pointer_6ad6e1f3747d5172b5d3ab1dcc010a9f)(::statiskit::Index const &) const = &::statiskit::MultivariateDataFrame::get_event;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_b0f5e788fdc65ce699e64f98105b4c7c)(::statiskit::Index const &, struct ::statiskit::MultivariateEvent const *) = &::statiskit::MultivariateDataFrame::set_event;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_b555b7b0972754ac85cab0703f97447f)(struct ::statiskit::MultivariateEvent const *) = &::statiskit::MultivariateDataFrame::add_event;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateDataFrame::*method_pointer_82e95a12a3db599eb1d0d88a3d521a65)() = &::statiskit::MultivariateDataFrame::pop_event;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_014f7c47848152659ad0201bd69f0ab5)(::statiskit::Index const &, struct ::statiskit::MultivariateEvent const *) = &::statiskit::MultivariateDataFrame::insert_event;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_ce2cebc7034858dabbda327fb270350c)(::statiskit::Index const &) = &::statiskit::MultivariateDataFrame::remove_event;
    boost::python::class_< class ::statiskit::MultivariateDataFrame, autowig::Held< class ::statiskit::MultivariateDataFrame >::Type, boost::python::bases< struct ::statiskit::MultivariateData > > class_c3848ca82c6150b480894755016faabf("MultivariateDataFrame", "", boost::python::no_init);
    class_c3848ca82c6150b480894755016faabf.def(boost::python::init<  >(""));
    class_c3848ca82c6150b480894755016faabf.def(boost::python::init< class ::statiskit::MultivariateDataFrame const & >(""));
    class_c3848ca82c6150b480894755016faabf.def("__iter__", method_pointer_cb42d7d3c1215410ae8eec0a996355f2, "");
    class_c3848ca82c6150b480894755016faabf.def("get_sample_space", method_pointer_d0a4ed242b5f5262a3f67c7c65f5d1ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c3848ca82c6150b480894755016faabf.def("set_sample_space", method_pointer_ceb65df6fb445fa2846e8bb4a96abc30, "");
    class_c3848ca82c6150b480894755016faabf.def("extract", method_pointer_86c4eec981d358ffb89d951709ca042f, "");
    class_c3848ca82c6150b480894755016faabf.def("extract", method_pointer_0ab68ca083ea50fb8331aae3f3cc6f20, "");
    class_c3848ca82c6150b480894755016faabf.def("copy", method_pointer_7e101dc71c4750358ade0510b89d977c, "");
    class_c3848ca82c6150b480894755016faabf.def("get_nb_variables", method_pointer_675858e74804540f867575e4e24f1873, "");
    class_c3848ca82c6150b480894755016faabf.def("get_variable", method_pointer_682c4154102f5c40b36d9216cff2cda1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c3848ca82c6150b480894755016faabf.def("set_variable", method_pointer_aa8deeaf32bb5bfdaec1cf6adfaf07e7, "");
    class_c3848ca82c6150b480894755016faabf.def("add_variable", method_pointer_17b0a5af15e657a9980dadc6f692e531, "");
    class_c3848ca82c6150b480894755016faabf.def("pop_variable", method_pointer_62d39d0a827d5d0bb8bf0c862c9a5684, "");
    class_c3848ca82c6150b480894755016faabf.def("insert_variable", method_pointer_3eedcca7cb1a5633b9a0c9394b3de631, "");
    class_c3848ca82c6150b480894755016faabf.def("remove_variable", method_pointer_fa2a4da314ab5578bda0e45a3509407a, "");
    class_c3848ca82c6150b480894755016faabf.def("get_nb_events", method_pointer_10ac8325c1085cec9a39efd69ba41c3c, "");
    class_c3848ca82c6150b480894755016faabf.def("get_event", method_pointer_6ad6e1f3747d5172b5d3ab1dcc010a9f, "");
    class_c3848ca82c6150b480894755016faabf.def("set_event", method_pointer_b0f5e788fdc65ce699e64f98105b4c7c, "");
    class_c3848ca82c6150b480894755016faabf.def("add_event", method_pointer_b555b7b0972754ac85cab0703f97447f, "");
    class_c3848ca82c6150b480894755016faabf.def("pop_event", method_pointer_82e95a12a3db599eb1d0d88a3d521a65, "");
    class_c3848ca82c6150b480894755016faabf.def("insert_event", method_pointer_014f7c47848152659ad0201bd69f0ab5, "");
    class_c3848ca82c6150b480894755016faabf.def("remove_event", method_pointer_ce2cebc7034858dabbda327fb270350c, "");

    if(autowig::Held< class ::statiskit::MultivariateDataFrame >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MultivariateDataFrame >::Type, autowig::Held< struct ::statiskit::MultivariateData >::Type >();
    }

}