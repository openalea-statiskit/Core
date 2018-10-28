#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ExponentialDistribution const volatile * get_pointer<class ::statiskit::ExponentialDistribution const volatile >(class ::statiskit::ExponentialDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6100283fa34c5dc5af23228c1af7758a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::ExponentialDistribution::*method_pointer_95a6955fae0753f7b5fb24d84fa5adc2)() const = &::statiskit::ExponentialDistribution::get_lambda;
    void  (::statiskit::ExponentialDistribution::*method_pointer_de22be959cc150958e19f74a17e140f1)(double const &) = &::statiskit::ExponentialDistribution::set_lambda;
    boost::python::class_< class ::statiskit::ExponentialDistribution, autowig::Held< class ::statiskit::ExponentialDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::ExponentialDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_6100283fa34c5dc5af23228c1af7758a("ExponentialDistribution", "This class represents a exponential distribution.\n\nThe exponential distribution is an univariate continuous distribution.\nThe support is the set of positive real values :math:`\\mathbb{R}_+^*`.\n\n", boost::python::no_init);
    class_6100283fa34c5dc5af23228c1af7758a.def(boost::python::init<  >(""));
    class_6100283fa34c5dc5af23228c1af7758a.def(boost::python::init< double const & >(""));
    class_6100283fa34c5dc5af23228c1af7758a.def(boost::python::init< class ::statiskit::ExponentialDistribution const & >(""));
    class_6100283fa34c5dc5af23228c1af7758a.def("get_lambda", method_pointer_95a6955fae0753f7b5fb24d84fa5adc2, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter :math:`\\lambda`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_6100283fa34c5dc5af23228c1af7758a.def("set_lambda", method_pointer_de22be959cc150958e19f74a17e140f1, "Set the value of the scale parameter :math:`\\lambda`.\n\n:Parameter:\n    `lambda` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::ExponentialDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ExponentialDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::ExponentialDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}