#include "_core.h"



namespace autowig
{

    void method_decorator_9f5242b5cfc2556991194fe481bad070(class ::std::unique_ptr< class ::statiskit::BetaBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaBinomialDistribution > > const & instance, const class ::statiskit::BetaBinomialDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::BetaBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaBinomialDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::BetaBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaBinomialDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::BetaBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaBinomialDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f0fbe30571df5660b1d0ff68556b5800()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_f0fbe30571df5660b1d0ff68556b5800_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::BetaBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaBinomialDistribution > > const & unique_ptr_f0fbe30571df5660b1d0ff68556b5800)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::BetaBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaBinomialDistribution > > & >(unique_ptr_f0fbe30571df5660b1d0ff68556b5800).release()).ptr());
            std::shared_ptr< class ::statiskit::BetaBinomialDistribution  > shared_ptr_f0fbe30571df5660b1d0ff68556b5800(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::BetaBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaBinomialDistribution > > & >(unique_ptr_f0fbe30571df5660b1d0ff68556b5800)));
            return boost::python::incref(boost::python::object(shared_ptr_f0fbe30571df5660b1d0ff68556b5800).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::BetaBinomialDistribution, struct ::std::default_delete< class ::statiskit::BetaBinomialDistribution > >, unique_ptr_f0fbe30571df5660b1d0ff68556b5800_to_python >();
}