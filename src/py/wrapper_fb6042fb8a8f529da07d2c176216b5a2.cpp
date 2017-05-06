#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NaturalCovarianceMatrixEstimation::Estimator const volatile * get_pointer<class ::statiskit::NaturalCovarianceMatrixEstimation::Estimator const volatile >(class ::statiskit::NaturalCovarianceMatrixEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fb6042fb8a8f529da07d2c176216b5a2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_8349b69b8e2c53af919053c8ade80ddb = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._natural_covariance_matrix_estimation");
    boost::python::object module_8349b69b8e2c53af919053c8ade80ddb(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_8349b69b8e2c53af919053c8ade80ddb.c_str()))));
    boost::python::scope().attr("_natural_covariance_matrix_estimation") = module_8349b69b8e2c53af919053c8ade80ddb;
    boost::python::scope scope_8349b69b8e2c53af919053c8ade80ddb = module_8349b69b8e2c53af919053c8ade80ddb;
    bool const & (::statiskit::NaturalCovarianceMatrixEstimation::Estimator::*method_pointer_d5bfdb0a82ba5cb7b4de9ac8eaf31fe7)() const = &::statiskit::NaturalCovarianceMatrixEstimation::Estimator::get_bias;
    void  (::statiskit::NaturalCovarianceMatrixEstimation::Estimator::*method_pointer_6da0bb5b59585073bf2e378be694acf9)(bool const &) = &::statiskit::NaturalCovarianceMatrixEstimation::Estimator::set_bias;
    boost::python::class_< class ::statiskit::NaturalCovarianceMatrixEstimation::Estimator, autowig::Held< class ::statiskit::NaturalCovarianceMatrixEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::CovarianceMatrixEstimation::Estimator > > class_fb6042fb8a8f529da07d2c176216b5a2("Estimator", "", boost::python::no_init);
    class_fb6042fb8a8f529da07d2c176216b5a2.def(boost::python::init<  >(""));
    class_fb6042fb8a8f529da07d2c176216b5a2.def(boost::python::init< bool const & >(""));
    class_fb6042fb8a8f529da07d2c176216b5a2.def(boost::python::init< class ::statiskit::NaturalCovarianceMatrixEstimation::Estimator const & >(""));
    class_fb6042fb8a8f529da07d2c176216b5a2.def("get_bias", method_pointer_d5bfdb0a82ba5cb7b4de9ac8eaf31fe7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fb6042fb8a8f529da07d2c176216b5a2.def("set_bias", method_pointer_6da0bb5b59585073bf2e378be694acf9, "");

    if(autowig::Held< class ::statiskit::NaturalCovarianceMatrixEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NaturalCovarianceMatrixEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::CovarianceMatrixEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::NaturalCovarianceMatrixEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::NaturalCovarianceMatrixEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::NaturalCovarianceMatrixEstimation::Estimator >::Type, class ::statiskit::NaturalCovarianceMatrixEstimation::Estimator > > >();
    }

}