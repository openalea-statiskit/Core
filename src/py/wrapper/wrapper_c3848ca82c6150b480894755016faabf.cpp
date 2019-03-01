#include "_core.h"

void  (::statiskit::MultivariateDataFrame::*method_pointer_ceb65df6fb445fa2846e8bb4a96abc30)(struct ::statiskit::MultivariateSampleSpace const &)= &::statiskit::MultivariateDataFrame::set_sample_space;
::statiskit::Index  (::statiskit::MultivariateDataFrame::*method_pointer_3d40300675955653b701c20d2aa3e360)()const= &::statiskit::MultivariateDataFrame::get_nb_components;
class ::statiskit::UnivariateDataFrame const * (::statiskit::MultivariateDataFrame::*method_pointer_b9d069c00f5c563587cb7bb977d07267)(::statiskit::Index const &)const= &::statiskit::MultivariateDataFrame::get_component;
void  (::statiskit::MultivariateDataFrame::*method_pointer_bd6f29af832854fd90b48c846aef5083)(::statiskit::Index const &, class ::statiskit::UnivariateDataFrame const &)= &::statiskit::MultivariateDataFrame::set_component;
void  (::statiskit::MultivariateDataFrame::*method_pointer_e10b9c47f5cd51a68b8b0640eb4af2a4)(class ::statiskit::UnivariateDataFrame const &)= &::statiskit::MultivariateDataFrame::add_component;
class ::std::unique_ptr< class ::statiskit::UnivariateDataFrame, struct ::std::default_delete< class ::statiskit::UnivariateDataFrame > >  (::statiskit::MultivariateDataFrame::*method_pointer_0e36cd3c6b7554bb8faab5320f147d49)()= &::statiskit::MultivariateDataFrame::pop_component;
void  (::statiskit::MultivariateDataFrame::*method_pointer_fc707ff04a2653ea8e21bf6a890a5abb)(::statiskit::Index const &, class ::statiskit::UnivariateDataFrame const &)= &::statiskit::MultivariateDataFrame::insert_component;
void  (::statiskit::MultivariateDataFrame::*method_pointer_600b4f5b6cc15bb1b7a8e0601af0e7f9)(::statiskit::Index const &)= &::statiskit::MultivariateDataFrame::remove_component;
::statiskit::Index  (::statiskit::MultivariateDataFrame::*method_pointer_10ac8325c1085cec9a39efd69ba41c3c)()const= &::statiskit::MultivariateDataFrame::get_nb_events;
class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateDataFrame::*method_pointer_6ad6e1f3747d5172b5d3ab1dcc010a9f)(::statiskit::Index const &)const= &::statiskit::MultivariateDataFrame::get_event;
void  (::statiskit::MultivariateDataFrame::*method_pointer_b0f5e788fdc65ce699e64f98105b4c7c)(::statiskit::Index const &, struct ::statiskit::MultivariateEvent const *)= &::statiskit::MultivariateDataFrame::set_event;
void  (::statiskit::MultivariateDataFrame::*method_pointer_b555b7b0972754ac85cab0703f97447f)(struct ::statiskit::MultivariateEvent const *)= &::statiskit::MultivariateDataFrame::add_event;
class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateDataFrame::*method_pointer_82e95a12a3db599eb1d0d88a3d521a65)()= &::statiskit::MultivariateDataFrame::pop_event;
void  (::statiskit::MultivariateDataFrame::*method_pointer_014f7c47848152659ad0201bd69f0ab5)(::statiskit::Index const &, struct ::statiskit::MultivariateEvent const *)= &::statiskit::MultivariateDataFrame::insert_event;
void  (::statiskit::MultivariateDataFrame::*method_pointer_ce2cebc7034858dabbda327fb270350c)(::statiskit::Index const &)= &::statiskit::MultivariateDataFrame::remove_event;

namespace autowig {
}

void wrapper_c3848ca82c6150b480894755016faabf(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MultivariateDataFrame, autowig::HolderType< class ::statiskit::MultivariateDataFrame >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > > class_c3848ca82c6150b480894755016faabf(module, "MultivariateDataFrame", "");
    class_c3848ca82c6150b480894755016faabf.def(pybind11::init<  >());
    class_c3848ca82c6150b480894755016faabf.def(pybind11::init< class ::statiskit::MultivariateDataFrame const & >());
    class_c3848ca82c6150b480894755016faabf.def("set_sample_space", method_pointer_ceb65df6fb445fa2846e8bb4a96abc30, "");
    class_c3848ca82c6150b480894755016faabf.def("get_nb_components", method_pointer_3d40300675955653b701c20d2aa3e360, "");
    class_c3848ca82c6150b480894755016faabf.def("get_component", method_pointer_b9d069c00f5c563587cb7bb977d07267, pybind11::return_value_policy::reference_internal, "");
    class_c3848ca82c6150b480894755016faabf.def("set_component", method_pointer_bd6f29af832854fd90b48c846aef5083, "");
    class_c3848ca82c6150b480894755016faabf.def("add_component", method_pointer_e10b9c47f5cd51a68b8b0640eb4af2a4, "");
    class_c3848ca82c6150b480894755016faabf.def("pop_component", method_pointer_0e36cd3c6b7554bb8faab5320f147d49, "");
    class_c3848ca82c6150b480894755016faabf.def("insert_component", method_pointer_fc707ff04a2653ea8e21bf6a890a5abb, "");
    class_c3848ca82c6150b480894755016faabf.def("remove_component", method_pointer_600b4f5b6cc15bb1b7a8e0601af0e7f9, "");
    class_c3848ca82c6150b480894755016faabf.def("get_nb_events", method_pointer_10ac8325c1085cec9a39efd69ba41c3c, "");
    class_c3848ca82c6150b480894755016faabf.def("get_event", method_pointer_6ad6e1f3747d5172b5d3ab1dcc010a9f, "");
    class_c3848ca82c6150b480894755016faabf.def("set_event", method_pointer_b0f5e788fdc65ce699e64f98105b4c7c, "");
    class_c3848ca82c6150b480894755016faabf.def("add_event", method_pointer_b555b7b0972754ac85cab0703f97447f, "");
    class_c3848ca82c6150b480894755016faabf.def("pop_event", method_pointer_82e95a12a3db599eb1d0d88a3d521a65, "");
    class_c3848ca82c6150b480894755016faabf.def("insert_event", method_pointer_014f7c47848152659ad0201bd69f0ab5, "");
    class_c3848ca82c6150b480894755016faabf.def("remove_event", method_pointer_ce2cebc7034858dabbda327fb270350c, "");

}