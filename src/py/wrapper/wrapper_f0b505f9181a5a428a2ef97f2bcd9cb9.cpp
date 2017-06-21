#include "_core.h"



namespace autowig
{

    void method_decorator_b075535c6bc95311adcc6e024aee22b2(class ::std::unique_ptr< class ::statiskit::UnivariateDataFrame, struct ::std::default_delete< class ::statiskit::UnivariateDataFrame > > const & instance, class ::statiskit::UnivariateDataFrame & param_out)     { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::UnivariateDataFrame, struct ::std::default_delete< class ::statiskit::UnivariateDataFrame > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::UnivariateDataFrame, struct ::std::default_delete< class ::statiskit::UnivariateDataFrame > > const volatile >(class ::std::unique_ptr< class ::statiskit::UnivariateDataFrame, struct ::std::default_delete< class ::statiskit::UnivariateDataFrame > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f0b505f9181a5a428a2ef97f2bcd9cb9()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_f0b505f9181a5a428a2ef97f2bcd9cb9_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::UnivariateDataFrame, struct ::std::default_delete< class ::statiskit::UnivariateDataFrame > > const & unique_ptr_f0b505f9181a5a428a2ef97f2bcd9cb9)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::UnivariateDataFrame, struct ::std::default_delete< class ::statiskit::UnivariateDataFrame > > & >(unique_ptr_f0b505f9181a5a428a2ef97f2bcd9cb9).release()).ptr());
            std::shared_ptr< class ::statiskit::UnivariateDataFrame  > shared_ptr_f0b505f9181a5a428a2ef97f2bcd9cb9(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::UnivariateDataFrame, struct ::std::default_delete< class ::statiskit::UnivariateDataFrame > > & >(unique_ptr_f0b505f9181a5a428a2ef97f2bcd9cb9)));
            return boost::python::incref(boost::python::object(shared_ptr_f0b505f9181a5a428a2ef97f2bcd9cb9).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::UnivariateDataFrame, struct ::std::default_delete< class ::statiskit::UnivariateDataFrame > >, unique_ptr_f0b505f9181a5a428a2ef97f2bcd9cb9_to_python >();
}