#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::UnivariateDataFrame const volatile * get_pointer<class ::statiskit::UnivariateDataFrame const volatile >(class ::statiskit::UnivariateDataFrame const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5678c4d7ca565a7d9dbc239c27111073()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >  (::statiskit::UnivariateDataFrame::*method_pointer_11c9562ddc765f7b8924280f0bee5f38)() const = &::statiskit::UnivariateDataFrame::generator;
    struct ::statiskit::UnivariateSampleSpace const * (::statiskit::UnivariateDataFrame::*method_pointer_072b76b0842455d4b80cd594e9f7f683)() const = &::statiskit::UnivariateDataFrame::get_sample_space;
    void  (::statiskit::UnivariateDataFrame::*method_pointer_b2b45040751857d9942654209dd4fdac)(struct ::statiskit::UnivariateSampleSpace const &) = &::statiskit::UnivariateDataFrame::set_sample_space;
    class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  (::statiskit::UnivariateDataFrame::*method_pointer_e3125d321eff52ec8739bb1394a7a392)() const = &::statiskit::UnivariateDataFrame::copy;
    ::std::size_t  (::statiskit::UnivariateDataFrame::*method_pointer_ec123cb9662359159705d2b9db63dcaf)() const = &::statiskit::UnivariateDataFrame::get_nb_events;
    struct ::statiskit::UnivariateEvent const * (::statiskit::UnivariateDataFrame::*method_pointer_acfaaecaae6e563198d7e451796407a2)(::std::size_t const &) const = &::statiskit::UnivariateDataFrame::get_event;
    void  (::statiskit::UnivariateDataFrame::*method_pointer_ce7b8fa1ade75b408b8f489683745f15)(::std::size_t const &, struct ::statiskit::UnivariateEvent const *) = &::statiskit::UnivariateDataFrame::set_event;
    void  (::statiskit::UnivariateDataFrame::*method_pointer_09c311d9e4475939affd9d4717d290fb)(struct ::statiskit::UnivariateEvent const *) = &::statiskit::UnivariateDataFrame::add_event;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateDataFrame::*method_pointer_a77777c59a785c7cb264ac4c74d865ac)() = &::statiskit::UnivariateDataFrame::pop_event;
    void  (::statiskit::UnivariateDataFrame::*method_pointer_fc1013be18f0593e9a96b8a03e5b4823)(::std::size_t const &, struct ::statiskit::UnivariateEvent const *) = &::statiskit::UnivariateDataFrame::insert_event;
    void  (::statiskit::UnivariateDataFrame::*method_pointer_0f508f8076e95e299ce71667166fb56e)(::std::size_t const &) = &::statiskit::UnivariateDataFrame::remove_event;
    boost::python::class_< class ::statiskit::UnivariateDataFrame, autowig::Held< class ::statiskit::UnivariateDataFrame >::Type, boost::python::bases< struct ::statiskit::UnivariateData, class ::statiskit::NamedData > > class_5678c4d7ca565a7d9dbc239c27111073("UnivariateDataFrame", "", boost::python::no_init);
    class_5678c4d7ca565a7d9dbc239c27111073.def(boost::python::init< struct ::statiskit::UnivariateSampleSpace const & >(""));
    class_5678c4d7ca565a7d9dbc239c27111073.def(boost::python::init< class ::statiskit::UnivariateDataFrame const & >(""));
    class_5678c4d7ca565a7d9dbc239c27111073.def("__iter__", method_pointer_11c9562ddc765f7b8924280f0bee5f38, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("get_sample_space", method_pointer_072b76b0842455d4b80cd594e9f7f683, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("set_sample_space", method_pointer_b2b45040751857d9942654209dd4fdac, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("copy", method_pointer_e3125d321eff52ec8739bb1394a7a392, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("get_nb_events", method_pointer_ec123cb9662359159705d2b9db63dcaf, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("get_event", method_pointer_acfaaecaae6e563198d7e451796407a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("set_event", method_pointer_ce7b8fa1ade75b408b8f489683745f15, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("add_event", method_pointer_09c311d9e4475939affd9d4717d290fb, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("pop_event", method_pointer_a77777c59a785c7cb264ac4c74d865ac, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("insert_event", method_pointer_fc1013be18f0593e9a96b8a03e5b4823, "");
    class_5678c4d7ca565a7d9dbc239c27111073.def("remove_event", method_pointer_0f508f8076e95e299ce71667166fb56e, "");

    if(autowig::Held< class ::statiskit::UnivariateDataFrame >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UnivariateDataFrame >::Type, autowig::Held< struct ::statiskit::UnivariateData >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UnivariateDataFrame >::Type, autowig::Held< class ::statiskit::NamedData >::Type >();
    }

}