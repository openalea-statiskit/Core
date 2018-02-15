#include "_core.h"



namespace autowig
{

    void method_decorator_41018329c1155dd59c1a1f675ca618ec(class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > > const & instance, const struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0aa290de318f5f179ae1be1958221d1a()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_0aa290de318f5f179ae1be1958221d1a_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > > const & unique_ptr_0aa290de318f5f179ae1be1958221d1a)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > > & >(unique_ptr_0aa290de318f5f179ae1be1958221d1a).release()).ptr());
            std::shared_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >  > shared_ptr_0aa290de318f5f179ae1be1958221d1a(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > > & >(unique_ptr_0aa290de318f5f179ae1be1958221d1a)));
            return boost::python::incref(boost::python::object(shared_ptr_0aa290de318f5f179ae1be1958221d1a).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::std::default_delete< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > >, unique_ptr_0aa290de318f5f179ae1be1958221d1a_to_python >();
}