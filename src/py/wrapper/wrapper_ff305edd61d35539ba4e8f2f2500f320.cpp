#include "_core.h"



namespace autowig
{

    void method_decorator_58460dcb53645456a950b9442194970c(class ::std::unique_ptr< class ::statiskit::BinomialDistribution, struct ::std::default_delete< class ::statiskit::BinomialDistribution > > const & instance, const class ::statiskit::BinomialDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::BinomialDistribution, struct ::std::default_delete< class ::statiskit::BinomialDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::BinomialDistribution, struct ::std::default_delete< class ::statiskit::BinomialDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::BinomialDistribution, struct ::std::default_delete< class ::statiskit::BinomialDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ff305edd61d35539ba4e8f2f2500f320()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_ff305edd61d35539ba4e8f2f2500f320_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::BinomialDistribution, struct ::std::default_delete< class ::statiskit::BinomialDistribution > > const & unique_ptr_ff305edd61d35539ba4e8f2f2500f320)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::BinomialDistribution, struct ::std::default_delete< class ::statiskit::BinomialDistribution > > & >(unique_ptr_ff305edd61d35539ba4e8f2f2500f320).release()).ptr());
            std::shared_ptr< class ::statiskit::BinomialDistribution  > shared_ptr_ff305edd61d35539ba4e8f2f2500f320(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::BinomialDistribution, struct ::std::default_delete< class ::statiskit::BinomialDistribution > > & >(unique_ptr_ff305edd61d35539ba4e8f2f2500f320)));
            return boost::python::incref(boost::python::object(shared_ptr_ff305edd61d35539ba4e8f2f2500f320).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::BinomialDistribution, struct ::std::default_delete< class ::statiskit::BinomialDistribution > >, unique_ptr_ff305edd61d35539ba4e8f2f2500f320_to_python >();
}