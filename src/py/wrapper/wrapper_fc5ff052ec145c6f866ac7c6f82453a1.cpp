#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator const volatile * get_pointer<struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator const volatile >(struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fc5ff052ec145c6f866ac7c6f82453a1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_983c8f09302f58288d31a502e9ff8d51 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._multinomial_splitting_operator_estimation");
    boost::python::object module_983c8f09302f58288d31a502e9ff8d51(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_983c8f09302f58288d31a502e9ff8d51.c_str()))));
    boost::python::scope().attr("_multinomial_splitting_operator_estimation") = module_983c8f09302f58288d31a502e9ff8d51;
    boost::python::scope scope_983c8f09302f58288d31a502e9ff8d51 = module_983c8f09302f58288d31a502e9ff8d51;
    boost::python::class_< struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator, autowig::Held< struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::SplittingOperatorEstimation::Estimator > > > class_fc5ff052ec145c6f866ac7c6f82453a1("Estimator", "", boost::python::no_init);
    class_fc5ff052ec145c6f866ac7c6f82453a1.def(boost::python::init<  >(""));
    class_fc5ff052ec145c6f866ac7c6f82453a1.def(boost::python::init< struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::SplittingOperatorEstimation::Estimator > >::Type >();
    }

}