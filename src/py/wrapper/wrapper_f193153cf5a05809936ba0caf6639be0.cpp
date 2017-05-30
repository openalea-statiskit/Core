#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NaturalMeanEstimation const volatile * get_pointer<class ::statiskit::NaturalMeanEstimation const volatile >(class ::statiskit::NaturalMeanEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f193153cf5a05809936ba0caf6639be0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::NaturalMeanEstimation, autowig::Held< class ::statiskit::NaturalMeanEstimation >::Type, boost::python::bases< struct ::statiskit::MeanEstimation > > class_f193153cf5a05809936ba0caf6639be0("NaturalMeanEstimation", "", boost::python::no_init);
    class_f193153cf5a05809936ba0caf6639be0.def(boost::python::init< double const & >(""));
    class_f193153cf5a05809936ba0caf6639be0.def(boost::python::init< class ::statiskit::NaturalMeanEstimation const & >(""));

    if(autowig::Held< class ::statiskit::NaturalMeanEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NaturalMeanEstimation >::Type, autowig::Held< struct ::statiskit::MeanEstimation >::Type >();
    }

}