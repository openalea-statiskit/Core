#include "_core.h"



namespace autowig
{

    void method_decorator_2c127c42d9e258dba3e46a16a8122f1d(class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > const & instance, const class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > const volatile >(class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_822a8238d49459ac9cdebe5568d19cd0()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_822a8238d49459ac9cdebe5568d19cd0_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > const & unique_ptr_822a8238d49459ac9cdebe5568d19cd0)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > & >(unique_ptr_822a8238d49459ac9cdebe5568d19cd0).release()).ptr());
            std::shared_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >  > shared_ptr_822a8238d49459ac9cdebe5568d19cd0(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > & >(unique_ptr_822a8238d49459ac9cdebe5568d19cd0)));
            return boost::python::incref(boost::python::object(shared_ptr_822a8238d49459ac9cdebe5568d19cd0).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > >, unique_ptr_822a8238d49459ac9cdebe5568d19cd0_to_python >();
}