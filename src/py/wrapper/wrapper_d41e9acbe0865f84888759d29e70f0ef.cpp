#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d41e9acbe0865f84888759d29e70f0ef()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::MultinomialSplittingOperator, ::statiskit::SplittingOperatorEstimation >::*method_pointer_bfcca6698a7253f8896ad5bde4d58c39)() const = &::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > > > class_d41e9acbe0865f84888759d29e70f0ef("_ActiveEstimation_d41e9acbe0865f84888759d29e70f0ef", "", boost::python::no_init);
    class_d41e9acbe0865f84888759d29e70f0ef.def(boost::python::init<  >(""));
    class_d41e9acbe0865f84888759d29e70f0ef.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_d41e9acbe0865f84888759d29e70f0ef.def(boost::python::init< class ::statiskit::MultinomialSplittingOperator const *, struct ::statiskit::MultivariateData const * >(""));
    class_d41e9acbe0865f84888759d29e70f0ef.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const & >(""));
    class_d41e9acbe0865f84888759d29e70f0ef.def("get_data", method_pointer_bfcca6698a7253f8896ad5bde4d58c39, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type >();
    }

}