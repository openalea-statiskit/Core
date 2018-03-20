#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::DirichletDistribution const volatile * get_pointer<class ::statiskit::DirichletDistribution const volatile >(class ::statiskit::DirichletDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cd5e5c2c8f40591793aafe753277bfe3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::DirichletDistribution::*method_pointer_9d4b74e774e7503b91ea1e3d3bbda991)() const = &::statiskit::DirichletDistribution::get_nb_components;
    unsigned int  (::statiskit::DirichletDistribution::*method_pointer_978980f9f0985fa0be161c7da2bf903c)() const = &::statiskit::DirichletDistribution::get_nb_parameters;
    double  (::statiskit::DirichletDistribution::*method_pointer_112f7763573c582c968f3a4230f8e4f9)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::DirichletDistribution::probability;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::DirichletDistribution::*method_pointer_403bf963ff385d7dbcbff335b19feed0)() const = &::statiskit::DirichletDistribution::simulate;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::DirichletDistribution::*method_pointer_8b3cd98182555b0ba6f7e67b9468a0f8)() const = &::statiskit::DirichletDistribution::get_alpha;
    void  (::statiskit::DirichletDistribution::*method_pointer_3aa0b41c15235d3eacbc5a2da94febc1)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::DirichletDistribution::set_alpha;
    boost::python::class_< class ::statiskit::DirichletDistribution, autowig::Held< class ::statiskit::DirichletDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::DirichletDistribution, struct ::statiskit::ContinuousMultivariateDistribution > > > class_cd5e5c2c8f40591793aafe753277bfe3("DirichletDistribution", "", boost::python::no_init);
    class_cd5e5c2c8f40591793aafe753277bfe3.def(boost::python::init< ::statiskit::Index const & >(""));
    class_cd5e5c2c8f40591793aafe753277bfe3.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_cd5e5c2c8f40591793aafe753277bfe3.def(boost::python::init< class ::statiskit::DirichletDistribution const & >(""));
    class_cd5e5c2c8f40591793aafe753277bfe3.def("get_nb_components", method_pointer_9d4b74e774e7503b91ea1e3d3bbda991, "");
    class_cd5e5c2c8f40591793aafe753277bfe3.def("get_nb_parameters", method_pointer_978980f9f0985fa0be161c7da2bf903c, "");
    class_cd5e5c2c8f40591793aafe753277bfe3.def("probability", method_pointer_112f7763573c582c968f3a4230f8e4f9, "");
    class_cd5e5c2c8f40591793aafe753277bfe3.def("simulate", method_pointer_403bf963ff385d7dbcbff335b19feed0, "");
    class_cd5e5c2c8f40591793aafe753277bfe3.def("get_alpha", method_pointer_8b3cd98182555b0ba6f7e67b9468a0f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cd5e5c2c8f40591793aafe753277bfe3.def("set_alpha", method_pointer_3aa0b41c15235d3eacbc5a2da94febc1, "");

    if(autowig::Held< class ::statiskit::DirichletDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::DirichletDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::DirichletDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
    }

}