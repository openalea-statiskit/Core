#include "_core.h"



namespace autowig
{

    void method_decorator_35b1eccab4d2587fae7db5c00d702c5c(class ::std::unique_ptr< struct ::statiskit::MixtureSingularDistribution, struct ::std::default_delete< struct ::statiskit::MixtureSingularDistribution > > const & instance, const struct ::statiskit::MixtureSingularDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MixtureSingularDistribution, struct ::std::default_delete< struct ::statiskit::MixtureSingularDistribution > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MixtureSingularDistribution, struct ::std::default_delete< struct ::statiskit::MixtureSingularDistribution > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MixtureSingularDistribution, struct ::std::default_delete< struct ::statiskit::MixtureSingularDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_edd5026b21c95d488e4cbd0b86023367()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_edd5026b21c95d488e4cbd0b86023367_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MixtureSingularDistribution, struct ::std::default_delete< struct ::statiskit::MixtureSingularDistribution > > const & unique_ptr_edd5026b21c95d488e4cbd0b86023367)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MixtureSingularDistribution, struct ::std::default_delete< struct ::statiskit::MixtureSingularDistribution > > & >(unique_ptr_edd5026b21c95d488e4cbd0b86023367).release()).ptr());
            std::shared_ptr< struct ::statiskit::MixtureSingularDistribution  > shared_ptr_edd5026b21c95d488e4cbd0b86023367(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MixtureSingularDistribution, struct ::std::default_delete< struct ::statiskit::MixtureSingularDistribution > > & >(unique_ptr_edd5026b21c95d488e4cbd0b86023367)));
            return boost::python::incref(boost::python::object(shared_ptr_edd5026b21c95d488e4cbd0b86023367).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MixtureSingularDistribution, struct ::std::default_delete< struct ::statiskit::MixtureSingularDistribution > >, unique_ptr_edd5026b21c95d488e4cbd0b86023367_to_python >();
}