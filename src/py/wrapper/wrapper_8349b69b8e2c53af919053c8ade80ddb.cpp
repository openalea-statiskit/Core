#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NaturalCovarianceMatrixEstimation const volatile * get_pointer<class ::statiskit::NaturalCovarianceMatrixEstimation const volatile >(class ::statiskit::NaturalCovarianceMatrixEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8349b69b8e2c53af919053c8ade80ddb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    bool const & (::statiskit::NaturalCovarianceMatrixEstimation::*method_pointer_05f0594b1a145a7aab37c23a3c893fab)() const = &::statiskit::NaturalCovarianceMatrixEstimation::get_bias;
    boost::python::class_< class ::statiskit::NaturalCovarianceMatrixEstimation, autowig::Held< class ::statiskit::NaturalCovarianceMatrixEstimation >::Type, boost::python::bases< class ::statiskit::CovarianceMatrixEstimation > > class_8349b69b8e2c53af919053c8ade80ddb("NaturalCovarianceMatrixEstimation", "", boost::python::no_init);
    class_8349b69b8e2c53af919053c8ade80ddb.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, bool const & >(""));
    class_8349b69b8e2c53af919053c8ade80ddb.def(boost::python::init< class ::statiskit::NaturalCovarianceMatrixEstimation const & >(""));
    class_8349b69b8e2c53af919053c8ade80ddb.def("get_bias", method_pointer_05f0594b1a145a7aab37c23a3c893fab, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::NaturalCovarianceMatrixEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NaturalCovarianceMatrixEstimation >::Type, autowig::Held< class ::statiskit::CovarianceMatrixEstimation >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::NaturalCovarianceMatrixEstimation >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::NaturalCovarianceMatrixEstimation, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::NaturalCovarianceMatrixEstimation >::Type, class ::statiskit::NaturalCovarianceMatrixEstimation > > >();
    }

}