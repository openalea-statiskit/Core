#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile * get_pointer<class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile >(class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_85102754beff532db66ca292ea3a6486()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_f13241949d8750b09bf4cc1506be92e7)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_nb_parameters;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_631f0021bff1521cb07edab7b7b67e89)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::simulate;
    double  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_f4fb86e5effe5a47a89f9eec46ca5fb2)(int const &) const = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::ldf;
    double  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_9179df97aef25c9f807ae06b9cca1a87)(int const &) const = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::pdf;
    double  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_522d1b5ec27e589fb6edb62ce754d7fe)(int const &) const = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::cdf;
    int  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_5653771d6f6b509abaf5759ccee6cbcb)(double const &) const = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::quantile;
    double  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_eb53edf430bb527bb777ec1dd6b5b52f)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_mean;
    double  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_930a776790e150c68b5bc1ef78375f95)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_variance;
    int const & (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_79ecaaf3284e534fbcf899fbbc0fd104)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_shift;
    void  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_2eda684e77215972afb88b49ca57feaf)(int const &) = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::set_shift;
    struct ::statiskit::DiscreteUnivariateDistribution const * (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_1af1d1186ab55b50aa305ae608cec380)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_distribution;
    void  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_260f8141d2b0502b852fab135b7fb186)(struct ::statiskit::DiscreteUnivariateDistribution const &) = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::set_distribution;
    boost::python::class_< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistribution > > > class_85102754beff532db66ca292ea3a6486("_ShiftedDistribution_85102754beff532db66ca292ea3a6486", "", boost::python::no_init);
    class_85102754beff532db66ca292ea3a6486.def(boost::python::init< struct ::statiskit::DiscreteUnivariateDistribution const &, int const & >(""));
    class_85102754beff532db66ca292ea3a6486.def(boost::python::init< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const & >(""));
    class_85102754beff532db66ca292ea3a6486.def("get_nb_parameters", method_pointer_f13241949d8750b09bf4cc1506be92e7, "");
    class_85102754beff532db66ca292ea3a6486.def("simulate", method_pointer_631f0021bff1521cb07edab7b7b67e89, "");
    class_85102754beff532db66ca292ea3a6486.def("ldf", method_pointer_f4fb86e5effe5a47a89f9eec46ca5fb2, "");
    class_85102754beff532db66ca292ea3a6486.def("pdf", method_pointer_9179df97aef25c9f807ae06b9cca1a87, "");
    class_85102754beff532db66ca292ea3a6486.def("cdf", method_pointer_522d1b5ec27e589fb6edb62ce754d7fe, "");
    class_85102754beff532db66ca292ea3a6486.def("quantile", method_pointer_5653771d6f6b509abaf5759ccee6cbcb, "");
    class_85102754beff532db66ca292ea3a6486.def("get_mean", method_pointer_eb53edf430bb527bb777ec1dd6b5b52f, "");
    class_85102754beff532db66ca292ea3a6486.def("get_variance", method_pointer_930a776790e150c68b5bc1ef78375f95, "");
    class_85102754beff532db66ca292ea3a6486.def("get_shift", method_pointer_79ecaaf3284e534fbcf899fbbc0fd104, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_85102754beff532db66ca292ea3a6486.def("set_shift", method_pointer_2eda684e77215972afb88b49ca57feaf, "");
    class_85102754beff532db66ca292ea3a6486.def("get_distribution", method_pointer_1af1d1186ab55b50aa305ae608cec380, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_85102754beff532db66ca292ea3a6486.def("set_distribution", method_pointer_260f8141d2b0502b852fab135b7fb186, "");

    if(autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > >();
    }

}