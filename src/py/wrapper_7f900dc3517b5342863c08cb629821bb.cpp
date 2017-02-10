#include "_core.h"


namespace autowig
{
}


void wrapper_7f900dc3517b5342863c08cb629821bb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >  (::statiskit::WeightedUnivariateDataFrame::*method_pointer_a87feae0b3c55b61bd6278200c639a40)() const = &::statiskit::WeightedUnivariateDataFrame::generator;
    class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  (::statiskit::WeightedUnivariateDataFrame::*method_pointer_87074468296b5901b79216a9be2133b2)() const = &::statiskit::WeightedUnivariateDataFrame::copy;
    void  (::statiskit::WeightedUnivariateDataFrame::*method_pointer_81223f17f2a5523291a037e27e1cb60a)(struct ::statiskit::UnivariateEvent const *) = &::statiskit::WeightedUnivariateDataFrame::add_event;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::WeightedUnivariateDataFrame::*method_pointer_d2708b57e96e595db940b19db207598b)() = &::statiskit::WeightedUnivariateDataFrame::pop_event;
    void  (::statiskit::WeightedUnivariateDataFrame::*method_pointer_d4626bd7c5c85613952f7d300a46d149)(::std::size_t const &, struct ::statiskit::UnivariateEvent const *) = &::statiskit::WeightedUnivariateDataFrame::insert_event;
    void  (::statiskit::WeightedUnivariateDataFrame::*method_pointer_5529d75f626a5dd799fdbfa79de9aa96)(::std::size_t const &) = &::statiskit::WeightedUnivariateDataFrame::remove_event;
    double  (::statiskit::WeightedUnivariateDataFrame::*method_pointer_aaec3f4645e25be5a849ec49c4098f8b)(::std::size_t const &) const = &::statiskit::WeightedUnivariateDataFrame::get_weight;
    void  (::statiskit::WeightedUnivariateDataFrame::*method_pointer_fe2e0d5ab3a95d599f4f2d0de9f64421)(::std::size_t const &, double const &) = &::statiskit::WeightedUnivariateDataFrame::set_weight;
    boost::python::class_< class ::statiskit::WeightedUnivariateDataFrame, autowig::Held< class ::statiskit::WeightedUnivariateDataFrame >::Type, boost::python::bases< class ::statiskit::UnivariateDataFrame > > class_7f900dc3517b5342863c08cb629821bb("WeightedUnivariateDataFrame", "", boost::python::no_init);
    class_7f900dc3517b5342863c08cb629821bb.def(boost::python::init< struct ::statiskit::UnivariateSampleSpace const & >(""));
    class_7f900dc3517b5342863c08cb629821bb.def(boost::python::init< class ::statiskit::WeightedUnivariateDataFrame const & >(""));
    class_7f900dc3517b5342863c08cb629821bb.def("__iter__", method_pointer_a87feae0b3c55b61bd6278200c639a40, "");
    class_7f900dc3517b5342863c08cb629821bb.def("copy", method_pointer_87074468296b5901b79216a9be2133b2, "");
    class_7f900dc3517b5342863c08cb629821bb.def("add_event", method_pointer_81223f17f2a5523291a037e27e1cb60a, "");
    class_7f900dc3517b5342863c08cb629821bb.def("pop_event", method_pointer_d2708b57e96e595db940b19db207598b, "");
    class_7f900dc3517b5342863c08cb629821bb.def("insert_event", method_pointer_d4626bd7c5c85613952f7d300a46d149, "");
    class_7f900dc3517b5342863c08cb629821bb.def("remove_event", method_pointer_5529d75f626a5dd799fdbfa79de9aa96, "");
    class_7f900dc3517b5342863c08cb629821bb.def("get_weight", method_pointer_aaec3f4645e25be5a849ec49c4098f8b, "");
    class_7f900dc3517b5342863c08cb629821bb.def("set_weight", method_pointer_fe2e0d5ab3a95d599f4f2d0de9f64421, "");

    if(autowig::Held< class ::statiskit::WeightedUnivariateDataFrame >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::WeightedUnivariateDataFrame >::Type, autowig::Held< class ::statiskit::UnivariateDataFrame >::Type >();
    }

}