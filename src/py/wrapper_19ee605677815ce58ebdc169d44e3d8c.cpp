#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_19ee605677815ce58ebdc169d44e3d8c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::NormalDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_e955cd2b8e7c5286a371643be63bcf14)() const = &::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > class_19ee605677815ce58ebdc169d44e3d8c("_ActiveEstimation_19ee605677815ce58ebdc169d44e3d8c", "", boost::python::no_init);
    class_19ee605677815ce58ebdc169d44e3d8c.def(boost::python::init<  >(""));
    class_19ee605677815ce58ebdc169d44e3d8c.def(boost::python::init< struct ::statiskit::UnivariateData const * >(""));
    class_19ee605677815ce58ebdc169d44e3d8c.def(boost::python::init< class ::statiskit::NormalDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_19ee605677815ce58ebdc169d44e3d8c.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >(""));
    class_19ee605677815ce58ebdc169d44e3d8c.def("get_data", method_pointer_e955cd2b8e7c5286a371643be63bcf14, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > >();
    }

}