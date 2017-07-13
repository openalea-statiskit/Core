#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::DirichletMultinomialSplittingOperator const volatile * get_pointer<class ::statiskit::DirichletMultinomialSplittingOperator const volatile >(class ::statiskit::DirichletMultinomialSplittingOperator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b4c3c65bc3e15db88659def75394c754()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::DirichletMultinomialSplittingOperator::*method_pointer_1b429c5172ec5a03be7ae69ba56f06b7)() const = &::statiskit::DirichletMultinomialSplittingOperator::get_alpha;
    void  (::statiskit::DirichletMultinomialSplittingOperator::*method_pointer_8616a0faa729556a88018ab9f9c4183d)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::DirichletMultinomialSplittingOperator::set_alpha;
    boost::python::class_< class ::statiskit::DirichletMultinomialSplittingOperator, autowig::Held< class ::statiskit::DirichletMultinomialSplittingOperator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperator > > > class_b4c3c65bc3e15db88659def75394c754("DirichletMultinomialSplittingOperator", "", boost::python::no_init);
    class_b4c3c65bc3e15db88659def75394c754.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_b4c3c65bc3e15db88659def75394c754.def(boost::python::init< class ::statiskit::DirichletMultinomialSplittingOperator const & >(""));
    class_b4c3c65bc3e15db88659def75394c754.def("get_alpha", method_pointer_1b429c5172ec5a03be7ae69ba56f06b7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b4c3c65bc3e15db88659def75394c754.def("set_alpha", method_pointer_8616a0faa729556a88018ab9f9c4183d, "");

    if(autowig::Held< class ::statiskit::DirichletMultinomialSplittingOperator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::DirichletMultinomialSplittingOperator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperator > >::Type >();
    }

}