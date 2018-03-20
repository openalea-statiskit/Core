#include "_core.h"



namespace autowig
{

    void method_decorator_a061b5a9154f5b5283babe7d4fabbed4(class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > > > const & instance, const struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_909be12d03ae5533945da29d742aea27()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_909be12d03ae5533945da29d742aea27_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > > > const & unique_ptr_909be12d03ae5533945da29d742aea27)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > > > & >(unique_ptr_909be12d03ae5533945da29d742aea27).release()).ptr());
            std::shared_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >  > shared_ptr_909be12d03ae5533945da29d742aea27(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > > > & >(unique_ptr_909be12d03ae5533945da29d742aea27)));
            return boost::python::incref(boost::python::object(shared_ptr_909be12d03ae5533945da29d742aea27).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > > >, unique_ptr_909be12d03ae5533945da29d742aea27_to_python >();
}