#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile >(class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d9bf9f15e3585b63b3798522663f828c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::ListSelection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_de4a24e38aa758e8a3b846c0ca3c74a2)() const = &::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::size;
    struct ::statiskit::CategoricalUnivariateDistributionEstimation const * (::statiskit::ListSelection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_97dc1f1b1c5058f88e3da7a2f837d154)(::statiskit::Index const &) const = &::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::get_estimation;
    double const & (::statiskit::ListSelection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_2128cab30a095b3bba37289475c407c9)(::statiskit::Index const &) const = &::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > > class_d9bf9f15e3585b63b3798522663f828c("_ListSelection_d9bf9f15e3585b63b3798522663f828c", "", boost::python::no_init);
    class_d9bf9f15e3585b63b3798522663f828c.def(boost::python::init<  >(""));
    class_d9bf9f15e3585b63b3798522663f828c.def(boost::python::init< struct ::statiskit::UnivariateData const * >(""));
    class_d9bf9f15e3585b63b3798522663f828c.def(boost::python::init< struct ::statiskit::CategoricalUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_d9bf9f15e3585b63b3798522663f828c.def(boost::python::init< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >(""));
    class_d9bf9f15e3585b63b3798522663f828c.def("__len__", method_pointer_de4a24e38aa758e8a3b846c0ca3c74a2, "");
    class_d9bf9f15e3585b63b3798522663f828c.def("get_estimation", method_pointer_97dc1f1b1c5058f88e3da7a2f837d154, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_d9bf9f15e3585b63b3798522663f828c.def("get_score", method_pointer_2128cab30a095b3bba37289475c407c9, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > > >();
    }

}