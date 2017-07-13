#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SplittingDistribution const volatile * get_pointer<class ::statiskit::SplittingDistribution const volatile >(class ::statiskit::SplittingDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f27aa86956235ad3ac8f08855c2b8820()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::DiscreteUnivariateDistribution const * (::statiskit::SplittingDistribution::*method_pointer_3d0a5e25401d5a02a6b475d9f5ce084d)() const = &::statiskit::SplittingDistribution::get_sum;
    void  (::statiskit::SplittingDistribution::*method_pointer_208168851a265e90878b4dbc88e72100)(struct ::statiskit::DiscreteUnivariateDistribution const &) = &::statiskit::SplittingDistribution::set_sum;
    struct ::statiskit::SplittingOperator * (::statiskit::SplittingDistribution::*method_pointer_8c4eac32fac9579780371ffb5ecfb4ee)() const = &::statiskit::SplittingDistribution::get_splitting;
    void  (::statiskit::SplittingDistribution::*method_pointer_473b16e313c5509dacae47c498851f63)(struct ::statiskit::SplittingOperator const &) = &::statiskit::SplittingDistribution::set_splitting;
    boost::python::class_< class ::statiskit::SplittingDistribution, autowig::Held< class ::statiskit::SplittingDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > > > class_f27aa86956235ad3ac8f08855c2b8820("SplittingDistribution", "", boost::python::no_init);
    class_f27aa86956235ad3ac8f08855c2b8820.def(boost::python::init< struct ::statiskit::DiscreteUnivariateDistribution const &, struct ::statiskit::SplittingOperator const & >(""));
    class_f27aa86956235ad3ac8f08855c2b8820.def(boost::python::init< class ::statiskit::SplittingDistribution const & >(""));
    class_f27aa86956235ad3ac8f08855c2b8820.def("get_sum", method_pointer_3d0a5e25401d5a02a6b475d9f5ce084d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f27aa86956235ad3ac8f08855c2b8820.def("set_sum", method_pointer_208168851a265e90878b4dbc88e72100, "");
    class_f27aa86956235ad3ac8f08855c2b8820.def("get_splitting", method_pointer_8c4eac32fac9579780371ffb5ecfb4ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f27aa86956235ad3ac8f08855c2b8820.def("set_splitting", method_pointer_473b16e313c5509dacae47c498851f63, "");

    if(autowig::Held< class ::statiskit::SplittingDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SplittingDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > >::Type >();
    }

}