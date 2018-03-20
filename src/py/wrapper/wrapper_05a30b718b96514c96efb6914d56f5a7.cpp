#include "_core.h"



namespace autowig
{

    void method_decorator_49a879811a04531892422d4fcb14b46e(class ::std::unique_ptr< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::DirichletMultinomialSingularDistribution > > const & instance, const class ::statiskit::DirichletMultinomialSingularDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::DirichletMultinomialSingularDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::DirichletMultinomialSingularDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::DirichletMultinomialSingularDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_05a30b718b96514c96efb6914d56f5a7()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_05a30b718b96514c96efb6914d56f5a7_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::DirichletMultinomialSingularDistribution > > const & unique_ptr_05a30b718b96514c96efb6914d56f5a7)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::DirichletMultinomialSingularDistribution > > & >(unique_ptr_05a30b718b96514c96efb6914d56f5a7).release()).ptr());
            std::shared_ptr< class ::statiskit::DirichletMultinomialSingularDistribution  > shared_ptr_05a30b718b96514c96efb6914d56f5a7(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::DirichletMultinomialSingularDistribution > > & >(unique_ptr_05a30b718b96514c96efb6914d56f5a7)));
            return boost::python::incref(boost::python::object(shared_ptr_05a30b718b96514c96efb6914d56f5a7).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::std::default_delete< class ::statiskit::DirichletMultinomialSingularDistribution > >, unique_ptr_05a30b718b96514c96efb6914d56f5a7_to_python >();
}