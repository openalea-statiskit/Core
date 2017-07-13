#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultinomialSplittingOperator const volatile * get_pointer<class ::statiskit::MultinomialSplittingOperator const volatile >(class ::statiskit::MultinomialSplittingOperator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_016b65b9654754a3a33e59e0a59581ab()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MultinomialSplittingOperator::*method_pointer_bdbe47d856525c2da0e058d2ed109f03)() const = &::statiskit::MultinomialSplittingOperator::get_pi;
    void  (::statiskit::MultinomialSplittingOperator::*method_pointer_b0fa7e4e10ea5c81b01304af920feabc)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MultinomialSplittingOperator::set_pi;
    boost::python::class_< class ::statiskit::MultinomialSplittingOperator, autowig::Held< class ::statiskit::MultinomialSplittingOperator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperator > > > class_016b65b9654754a3a33e59e0a59581ab("MultinomialSplittingOperator", "", boost::python::no_init);
    class_016b65b9654754a3a33e59e0a59581ab.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_016b65b9654754a3a33e59e0a59581ab.def(boost::python::init< class ::statiskit::MultinomialSplittingOperator const & >(""));
    class_016b65b9654754a3a33e59e0a59581ab.def("get_pi", method_pointer_bdbe47d856525c2da0e058d2ed109f03, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_016b65b9654754a3a33e59e0a59581ab.def("set_pi", method_pointer_b0fa7e4e10ea5c81b01304af920feabc, "");

    if(autowig::Held< class ::statiskit::MultinomialSplittingOperator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MultinomialSplittingOperator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperator > >::Type >();
    }

}