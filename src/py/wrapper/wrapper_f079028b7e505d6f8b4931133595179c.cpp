#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::StudentDistribution const volatile * get_pointer<class ::statiskit::StudentDistribution const volatile >(class ::statiskit::StudentDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f079028b7e505d6f8b4931133595179c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::StudentDistribution::*method_pointer_9e4bcc10128e5d208dad4579a06435e5)() const = &::statiskit::StudentDistribution::get_nu;
    void  (::statiskit::StudentDistribution::*method_pointer_75cf996cb5e9565b8a6c219c6e42dc27)(double const &) = &::statiskit::StudentDistribution::set_nu;
    boost::python::class_< class ::statiskit::StudentDistribution, autowig::Held< class ::statiskit::StudentDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::StudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_f079028b7e505d6f8b4931133595179c("StudentDistribution", "This class NonStandardStudentDistribution represents a Student\ndistribution.\n\nThe Student distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_f079028b7e505d6f8b4931133595179c.def(boost::python::init<  >(""));
    class_f079028b7e505d6f8b4931133595179c.def(boost::python::init< double const & >(""));
    class_f079028b7e505d6f8b4931133595179c.def(boost::python::init< class ::statiskit::StudentDistribution const & >(""));
    class_f079028b7e505d6f8b4931133595179c.def("get_nu", method_pointer_9e4bcc10128e5d208dad4579a06435e5, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the shape parameter nu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_f079028b7e505d6f8b4931133595179c.def("set_nu", method_pointer_75cf996cb5e9565b8a6c219c6e42dc27, "Set the value of the shape parameter nu.\n\n:Parameter:\n    `nu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::StudentDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::StudentDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::StudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}