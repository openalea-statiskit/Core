#include "_core.h"


namespace autowig
{
}


void wrapper_295ece6953a856c8b865758b0a34795c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::CategoricalUnivariateConditionalDistribution, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type, boost::python::bases< struct ::statiskit::UnivariateConditionalDistribution >, boost::noncopyable > class_295ece6953a856c8b865758b0a34795c("CategoricalUnivariateConditionalDistribution", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistribution >::Type >();
    }

}