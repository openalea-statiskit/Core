#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{

    void method_decorator_19b11ff018055f1e87eedbca79354c36(class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > const & instance, struct ::statiskit::MultivariateSampleSpace & param_out)     { instance.operator*() = param_out; }
}


void wrapper_bf466ef5cbd6539bbde8028bd459b6cb()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_bf466ef5cbd6539bbde8028bd459b6cb_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > const & unique_ptr_bf466ef5cbd6539bbde8028bd459b6cb)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > & >(unique_ptr_bf466ef5cbd6539bbde8028bd459b6cb).release()).ptr());
            std::shared_ptr< struct ::statiskit::MultivariateSampleSpace  > shared_ptr_bf466ef5cbd6539bbde8028bd459b6cb(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > & >(unique_ptr_bf466ef5cbd6539bbde8028bd459b6cb)));
            return boost::python::incref(boost::python::object(shared_ptr_bf466ef5cbd6539bbde8028bd459b6cb).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > >, unique_ptr_bf466ef5cbd6539bbde8028bd459b6cb_to_python >();
}