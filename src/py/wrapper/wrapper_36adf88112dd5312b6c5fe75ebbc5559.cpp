#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile * get_pointer<class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile >(class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_36adf88112dd5312b6c5fe75ebbc5559()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_ad3f96c7202950b49f2dec114d36c9cd)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_nb_parameters;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_2c093f7f6cf75df1902124e5269468f7)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::simulate;
    double  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_971162f552dc5740b9c0c3a585a34d0d)(double const &) const = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::ldf;
    double  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_a176056e414957ad8294695ab93992f0)(double const &) const = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::pdf;
    double  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_6f0b5357617e566ca3007e9bd8c19e2b)(double const &) const = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::cdf;
    double  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_4c774de5ec4154d682f008fa09557291)(double const &) const = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::quantile;
    double  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_7298047bc96b5a58bba18f0ddca921ac)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_mean;
    double  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_9d6d0435e46a5f85944f5bb5e86fe0d1)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_variance;
    double const & (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_d31c0f8ae5c6576ab7341adafae58204)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_shift;
    void  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_3829f8cabc7a5081ba815a079cec005a)(double const &) = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::set_shift;
    struct ::statiskit::ContinuousUnivariateDistribution const * (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_eb0fdbe131005691a64c86bae8006d56)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_distribution;
    void  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_9ca523943e8652e0a38ae46c2875b593)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::set_distribution;
    boost::python::class_< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistribution > > > class_36adf88112dd5312b6c5fe75ebbc5559("_ShiftedDistribution_36adf88112dd5312b6c5fe75ebbc5559", "", boost::python::no_init);
    class_36adf88112dd5312b6c5fe75ebbc5559.def(boost::python::init< struct ::statiskit::ContinuousUnivariateDistribution const &, double const & >(""));
    class_36adf88112dd5312b6c5fe75ebbc5559.def(boost::python::init< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const & >(""));
    class_36adf88112dd5312b6c5fe75ebbc5559.def("get_nb_parameters", method_pointer_ad3f96c7202950b49f2dec114d36c9cd, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("simulate", method_pointer_2c093f7f6cf75df1902124e5269468f7, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("ldf", method_pointer_971162f552dc5740b9c0c3a585a34d0d, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("pdf", method_pointer_a176056e414957ad8294695ab93992f0, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("cdf", method_pointer_6f0b5357617e566ca3007e9bd8c19e2b, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("quantile", method_pointer_4c774de5ec4154d682f008fa09557291, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("get_mean", method_pointer_7298047bc96b5a58bba18f0ddca921ac, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("get_variance", method_pointer_9d6d0435e46a5f85944f5bb5e86fe0d1, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("get_shift", method_pointer_d31c0f8ae5c6576ab7341adafae58204, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("set_shift", method_pointer_3829f8cabc7a5081ba815a079cec005a, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("get_distribution", method_pointer_eb0fdbe131005691a64c86bae8006d56, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("set_distribution", method_pointer_9ca523943e8652e0a38ae46c2875b593, "");

    if(autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}