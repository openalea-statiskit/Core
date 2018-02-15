#include "_core.h"



namespace autowig
{

    void method_decorator_9c02879b500855cc8adb67fc063c44c4(class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > const & instance, const class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > const volatile >(class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_aa463408ad6e5acdabf893b271c82910()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_aa463408ad6e5acdabf893b271c82910_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > const & unique_ptr_aa463408ad6e5acdabf893b271c82910)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > & >(unique_ptr_aa463408ad6e5acdabf893b271c82910).release()).ptr());
            std::shared_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >  > shared_ptr_aa463408ad6e5acdabf893b271c82910(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > & >(unique_ptr_aa463408ad6e5acdabf893b271c82910)));
            return boost::python::incref(boost::python::object(shared_ptr_aa463408ad6e5acdabf893b271c82910).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::std::default_delete< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >, unique_ptr_aa463408ad6e5acdabf893b271c82910_to_python >();
}