#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile >(class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_bfd0af0710215b30a7afa5127166b334()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::SplittingOperator, ::statiskit::SplittingOperatorEstimation >::*method_pointer_c06cf2bfa43e5ebd87d27bf5419566fb)() const = &::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::size;
    struct ::statiskit::SplittingOperatorEstimation const * (::statiskit::Selection< ::statiskit::SplittingOperator, ::statiskit::SplittingOperatorEstimation >::*method_pointer_64a7a9e5fe5f5324ac7e86c31d35f5cb)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::get_estimation;
    double const & (::statiskit::Selection< ::statiskit::SplittingOperator, ::statiskit::SplittingOperatorEstimation >::*method_pointer_0733093e8ce35b78a9d31a1d2c990269)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::get_score;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >, autowig::Held< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > > > class_bfd0af0710215b30a7afa5127166b334("_Selection_bfd0af0710215b30a7afa5127166b334", "", boost::python::no_init);
    class_bfd0af0710215b30a7afa5127166b334.def(boost::python::init<  >(""));
    class_bfd0af0710215b30a7afa5127166b334.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_bfd0af0710215b30a7afa5127166b334.def(boost::python::init< struct ::statiskit::SplittingOperator const *, struct ::statiskit::MultivariateData const * >(""));
    class_bfd0af0710215b30a7afa5127166b334.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > const & >(""));
    class_bfd0af0710215b30a7afa5127166b334.def("__len__", method_pointer_c06cf2bfa43e5ebd87d27bf5419566fb, "");
    class_bfd0af0710215b30a7afa5127166b334.def("get_estimation", method_pointer_64a7a9e5fe5f5324ac7e86c31d35f5cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_bfd0af0710215b30a7afa5127166b334.def("get_score", method_pointer_0733093e8ce35b78a9d31a1d2c990269, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type >();
    }

}