#include "_core.h"


namespace autowig
{
}


void wrapper_db760ff53e0e5dca8e558b09ed12163c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistribution >  (::statiskit::LazyEstimation< ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_0a3e5f0fa62c5495a1e8afe2285181f7)() const = &::statiskit::LazyEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_db760ff53e0e5dca8e558b09ed12163c("_LazyEstimation_db760ff53e0e5dca8e558b09ed12163c", "", boost::python::no_init);
    class_db760ff53e0e5dca8e558b09ed12163c.def(boost::python::init<  >(""));
    class_db760ff53e0e5dca8e558b09ed12163c.def(boost::python::init< class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > const & >(""));
    class_db760ff53e0e5dca8e558b09ed12163c.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_db760ff53e0e5dca8e558b09ed12163c.def("get_estimated", method_pointer_0a3e5f0fa62c5495a1e8afe2285181f7, "");

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type >();
    }

}