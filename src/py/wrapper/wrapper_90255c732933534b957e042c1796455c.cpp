#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NonStandardStudentDistribution const volatile * get_pointer<class ::statiskit::NonStandardStudentDistribution const volatile >(class ::statiskit::NonStandardStudentDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_90255c732933534b957e042c1796455c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::NonStandardStudentDistribution::*method_pointer_b49bbe5d23ef531097f5fc8aeed6ce8b)() const = &::statiskit::NonStandardStudentDistribution::get_mu;
    void  (::statiskit::NonStandardStudentDistribution::*method_pointer_34426514b3da565fbd076b2679558cec)(double const &) = &::statiskit::NonStandardStudentDistribution::set_mu;
    double const & (::statiskit::NonStandardStudentDistribution::*method_pointer_4755b2a0d2f9554a8ee3fdc2b97ecaa8)() const = &::statiskit::NonStandardStudentDistribution::get_sigma;
    void  (::statiskit::NonStandardStudentDistribution::*method_pointer_c6997f2e033852d59d9fb70b5ec2d2c3)(double const &) = &::statiskit::NonStandardStudentDistribution::set_sigma;
    boost::python::class_< class ::statiskit::NonStandardStudentDistribution, autowig::Held< class ::statiskit::NonStandardStudentDistribution >::Type, boost::python::bases< class ::statiskit::StudentDistribution > > class_90255c732933534b957e042c1796455c("NonStandardStudentDistribution", "This class NonStandardStudentDistribution represents a non standardized\nStudent distribution.\n\nThe non-standardized Student distribution is an univariate continuous\ndistribution. The support is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_90255c732933534b957e042c1796455c.def(boost::python::init<  >(""));
    class_90255c732933534b957e042c1796455c.def(boost::python::init< double const &, double const &, double const & >(""));
    class_90255c732933534b957e042c1796455c.def(boost::python::init< class ::statiskit::NonStandardStudentDistribution const & >(""));
    class_90255c732933534b957e042c1796455c.def("get_mu", method_pointer_b49bbe5d23ef531097f5fc8aeed6ce8b, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("set_mu", method_pointer_34426514b3da565fbd076b2679558cec, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_90255c732933534b957e042c1796455c.def("get_sigma", method_pointer_4755b2a0d2f9554a8ee3fdc2b97ecaa8, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("set_sigma", method_pointer_c6997f2e033852d59d9fb70b5ec2d2c3, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::NonStandardStudentDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NonStandardStudentDistribution >::Type, autowig::Held< class ::statiskit::StudentDistribution >::Type >();
    }

}