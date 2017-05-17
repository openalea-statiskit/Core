#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NaturalVarianceEstimation const volatile * get_pointer<class ::statiskit::NaturalVarianceEstimation const volatile >(class ::statiskit::NaturalVarianceEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_52a96e7b6d23543982ff67d6b77fe98e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    bool const & (::statiskit::NaturalVarianceEstimation::*method_pointer_86b4b2d36e545de7af9896148b2afb22)() const = &::statiskit::NaturalVarianceEstimation::get_bias;
    boost::python::class_< class ::statiskit::NaturalVarianceEstimation, autowig::Held< class ::statiskit::NaturalVarianceEstimation >::Type, boost::python::bases< class ::statiskit::VarianceEstimation > > class_52a96e7b6d23543982ff67d6b77fe98e("NaturalVarianceEstimation", "", boost::python::no_init);
    class_52a96e7b6d23543982ff67d6b77fe98e.def(boost::python::init< double const &, bool const &, double const & >(""));
    class_52a96e7b6d23543982ff67d6b77fe98e.def(boost::python::init< class ::statiskit::NaturalVarianceEstimation const & >(""));
    class_52a96e7b6d23543982ff67d6b77fe98e.def("get_bias", method_pointer_86b4b2d36e545de7af9896148b2afb22, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::NaturalVarianceEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NaturalVarianceEstimation >::Type, autowig::Held< class ::statiskit::VarianceEstimation >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::NaturalVarianceEstimation >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::NaturalVarianceEstimation, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::NaturalVarianceEstimation >::Type, class ::statiskit::NaturalVarianceEstimation > > >();
    }

}