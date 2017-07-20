#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile >(class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a58b6395bb7b5e8bba701a6f6bb93abb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::SplittingMixtureOperator, ::statiskit::SplittingOperatorEstimation >::*method_pointer_e1a8250c93d8518083b7cbd6d4dcbf93)() const = &::statiskit::ActiveEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > > > class_a58b6395bb7b5e8bba701a6f6bb93abb("_ActiveEstimation_a58b6395bb7b5e8bba701a6f6bb93abb", "", boost::python::no_init);
    class_a58b6395bb7b5e8bba701a6f6bb93abb.def(boost::python::init<  >(""));
    class_a58b6395bb7b5e8bba701a6f6bb93abb.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_a58b6395bb7b5e8bba701a6f6bb93abb.def(boost::python::init< struct ::statiskit::SplittingMixtureOperator const *, struct ::statiskit::MultivariateData const * >(""));
    class_a58b6395bb7b5e8bba701a6f6bb93abb.def(boost::python::init< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const & >(""));
    class_a58b6395bb7b5e8bba701a6f6bb93abb.def("get_data", method_pointer_e1a8250c93d8518083b7cbd6d4dcbf93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type >();
    }

}