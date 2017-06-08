#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NaturalMeanVectorEstimation::Estimator const volatile * get_pointer<struct ::statiskit::NaturalMeanVectorEstimation::Estimator const volatile >(struct ::statiskit::NaturalMeanVectorEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_bdd259b2d5ad54b4a1fc91e4f7c9e020()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_8728c0bdc0675dd3b46407255215388c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._natural_mean_vector_estimation");
    boost::python::object module_8728c0bdc0675dd3b46407255215388c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_8728c0bdc0675dd3b46407255215388c.c_str()))));
    boost::python::scope().attr("_natural_mean_vector_estimation") = module_8728c0bdc0675dd3b46407255215388c;
    boost::python::scope scope_8728c0bdc0675dd3b46407255215388c = module_8728c0bdc0675dd3b46407255215388c;
    boost::python::class_< struct ::statiskit::NaturalMeanVectorEstimation::Estimator, autowig::Held< struct ::statiskit::NaturalMeanVectorEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::MeanVectorEstimation::Estimator > > class_bdd259b2d5ad54b4a1fc91e4f7c9e020("Estimator", "", boost::python::no_init);
    class_bdd259b2d5ad54b4a1fc91e4f7c9e020.def(boost::python::init<  >(""));
    class_bdd259b2d5ad54b4a1fc91e4f7c9e020.def(boost::python::init< struct ::statiskit::NaturalMeanVectorEstimation::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::NaturalMeanVectorEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NaturalMeanVectorEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MeanVectorEstimation::Estimator >::Type >();
    }

}