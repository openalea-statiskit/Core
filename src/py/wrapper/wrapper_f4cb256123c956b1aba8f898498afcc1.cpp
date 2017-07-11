#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::DirichletMultinomialSplittingDistribution const volatile * get_pointer<class ::statiskit::DirichletMultinomialSplittingDistribution const volatile >(class ::statiskit::DirichletMultinomialSplittingDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f4cb256123c956b1aba8f898498afcc1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::DiscreteUnivariateDistribution const * (::statiskit::DirichletMultinomialSplittingDistribution::*method_pointer_d5256aa2d4a25a0497c3d9864762f673)() const = &::statiskit::DirichletMultinomialSplittingDistribution::get_sum;
    void  (::statiskit::DirichletMultinomialSplittingDistribution::*method_pointer_0107db66b0ef5b16891a88c5b166a3c5)(struct ::statiskit::DiscreteUnivariateDistribution const &) = &::statiskit::DirichletMultinomialSplittingDistribution::set_sum;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::DirichletMultinomialSplittingDistribution::*method_pointer_27d6005845c0516ea6c612329874fb49)() const = &::statiskit::DirichletMultinomialSplittingDistribution::get_alpha;
    void  (::statiskit::DirichletMultinomialSplittingDistribution::*method_pointer_417153dfe38157369ce6e430a3a9510c)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::DirichletMultinomialSplittingDistribution::set_alpha;
    boost::python::class_< class ::statiskit::DirichletMultinomialSplittingDistribution, autowig::Held< class ::statiskit::DirichletMultinomialSplittingDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > > > class_f4cb256123c956b1aba8f898498afcc1("DirichletMultinomialSplittingDistribution", "", boost::python::no_init);
    class_f4cb256123c956b1aba8f898498afcc1.def(boost::python::init< struct ::statiskit::DiscreteUnivariateDistribution const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_f4cb256123c956b1aba8f898498afcc1.def(boost::python::init< class ::statiskit::DirichletMultinomialSplittingDistribution const & >(""));
    class_f4cb256123c956b1aba8f898498afcc1.def("get_sum", method_pointer_d5256aa2d4a25a0497c3d9864762f673, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f4cb256123c956b1aba8f898498afcc1.def("set_sum", method_pointer_0107db66b0ef5b16891a88c5b166a3c5, "");
    class_f4cb256123c956b1aba8f898498afcc1.def("get_alpha", method_pointer_27d6005845c0516ea6c612329874fb49, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f4cb256123c956b1aba8f898498afcc1.def("set_alpha", method_pointer_417153dfe38157369ce6e430a3a9510c, "");

    if(autowig::Held< class ::statiskit::DirichletMultinomialSplittingDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::DirichletMultinomialSplittingDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > >::Type >();
    }

}