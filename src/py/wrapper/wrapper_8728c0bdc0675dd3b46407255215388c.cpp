#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NaturalMeanVectorEstimation const volatile * get_pointer<class ::statiskit::NaturalMeanVectorEstimation const volatile >(class ::statiskit::NaturalMeanVectorEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8728c0bdc0675dd3b46407255215388c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::NaturalMeanVectorEstimation, autowig::Held< class ::statiskit::NaturalMeanVectorEstimation >::Type, boost::python::bases< struct ::statiskit::MeanVectorEstimation > > class_8728c0bdc0675dd3b46407255215388c("NaturalMeanVectorEstimation", "", boost::python::no_init);
    class_8728c0bdc0675dd3b46407255215388c.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_8728c0bdc0675dd3b46407255215388c.def(boost::python::init< class ::statiskit::NaturalMeanVectorEstimation const & >(""));

    if(autowig::Held< class ::statiskit::NaturalMeanVectorEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NaturalMeanVectorEstimation >::Type, autowig::Held< struct ::statiskit::MeanVectorEstimation >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::NaturalMeanVectorEstimation >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::NaturalMeanVectorEstimation, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::NaturalMeanVectorEstimation >::Type, class ::statiskit::NaturalMeanVectorEstimation > > >();
    }

}