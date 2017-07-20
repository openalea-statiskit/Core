#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::SplittingMixtureOperator const volatile * get_pointer<struct ::statiskit::SplittingMixtureOperator const volatile >(struct ::statiskit::SplittingMixtureOperator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_45efe90da2e2543a88aef38d9f631654()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::SplittingMixtureOperator, autowig::Held< struct ::statiskit::SplittingMixtureOperator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingMixtureOperator, class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > > > > class_45efe90da2e2543a88aef38d9f631654("SplittingMixtureOperator", "", boost::python::no_init);
    class_45efe90da2e2543a88aef38d9f631654.def(boost::python::init< class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_45efe90da2e2543a88aef38d9f631654.def(boost::python::init< struct ::statiskit::SplittingMixtureOperator const & >(""));

    if(autowig::Held< struct ::statiskit::SplittingMixtureOperator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::SplittingMixtureOperator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingMixtureOperator, class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > > >::Type >();
    }

}