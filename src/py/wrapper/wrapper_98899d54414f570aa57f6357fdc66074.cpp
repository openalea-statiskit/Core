#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_98899d54414f570aa57f6357fdc66074()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_180321696f555b70b46c79f809e1d58b)() const = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::size;
    struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation const * (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_6df08aa67d2a56b7bdf32ed30b0bf1d0)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_estimation;
    double const & (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_6a54b42ab3d65292a338e9e8102df431)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > > class_98899d54414f570aa57f6357fdc66074("_Selection_98899d54414f570aa57f6357fdc66074", "", boost::python::no_init);
    class_98899d54414f570aa57f6357fdc66074.def(boost::python::init<  >(""));
    class_98899d54414f570aa57f6357fdc66074.def(boost::python::init< class ::statiskit::UnivariateConditionalData const * >(""));
    class_98899d54414f570aa57f6357fdc66074.def(boost::python::init< struct ::statiskit::CategoricalUnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_98899d54414f570aa57f6357fdc66074.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >(""));
    class_98899d54414f570aa57f6357fdc66074.def("__len__", method_pointer_180321696f555b70b46c79f809e1d58b, "");
    class_98899d54414f570aa57f6357fdc66074.def("get_estimation", method_pointer_6df08aa67d2a56b7bdf32ed30b0bf1d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_98899d54414f570aa57f6357fdc66074.def("get_score", method_pointer_6a54b42ab3d65292a338e9e8102df431, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type >();
    }

}