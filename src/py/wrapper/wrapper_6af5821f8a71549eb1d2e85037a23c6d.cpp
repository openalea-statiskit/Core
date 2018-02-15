#include "_core.h"



namespace autowig
{

    void method_decorator_df7dfdd4e54a520697762cdcb67a68bd(class ::std::unique_ptr< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::CategoricalUnivariateMixtureDistribution > > const & instance, const struct ::statiskit::CategoricalUnivariateMixtureDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::CategoricalUnivariateMixtureDistribution > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::CategoricalUnivariateMixtureDistribution > > const volatile >(class ::std::unique_ptr< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::CategoricalUnivariateMixtureDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6af5821f8a71549eb1d2e85037a23c6d()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_6af5821f8a71549eb1d2e85037a23c6d_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::CategoricalUnivariateMixtureDistribution > > const & unique_ptr_6af5821f8a71549eb1d2e85037a23c6d)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::CategoricalUnivariateMixtureDistribution > > & >(unique_ptr_6af5821f8a71549eb1d2e85037a23c6d).release()).ptr());
            std::shared_ptr< struct ::statiskit::CategoricalUnivariateMixtureDistribution  > shared_ptr_6af5821f8a71549eb1d2e85037a23c6d(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::CategoricalUnivariateMixtureDistribution > > & >(unique_ptr_6af5821f8a71549eb1d2e85037a23c6d)));
            return boost::python::incref(boost::python::object(shared_ptr_6af5821f8a71549eb1d2e85037a23c6d).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::std::default_delete< struct ::statiskit::CategoricalUnivariateMixtureDistribution > >, unique_ptr_6af5821f8a71549eb1d2e85037a23c6d_to_python >();
}