#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile >(class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c7a00ade76085b6880eb426f8cf04c22()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::SplittingOperator, ::statiskit::SplittingOperatorEstimation >::*method_pointer_7872dce2c442529e9c06a64f4841a118)() const = &::statiskit::ActiveEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > > > class_c7a00ade76085b6880eb426f8cf04c22("_ActiveEstimation_c7a00ade76085b6880eb426f8cf04c22", "", boost::python::no_init);
    class_c7a00ade76085b6880eb426f8cf04c22.def(boost::python::init<  >(""));
    class_c7a00ade76085b6880eb426f8cf04c22.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_c7a00ade76085b6880eb426f8cf04c22.def(boost::python::init< struct ::statiskit::SplittingOperator const *, struct ::statiskit::MultivariateData const * >(""));
    class_c7a00ade76085b6880eb426f8cf04c22.def(boost::python::init< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const & >(""));
    class_c7a00ade76085b6880eb426f8cf04c22.def("get_data", method_pointer_7872dce2c442529e9c06a64f4841a118, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type >();
    }

}