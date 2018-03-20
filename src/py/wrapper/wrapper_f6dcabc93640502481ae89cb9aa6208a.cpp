#include "_core.h"



namespace autowig
{

    void method_decorator_42743cca767a5664b33cdf6b5f28b588(class ::std::unique_ptr< class ::statiskit::DirichletDistribution, struct ::std::default_delete< class ::statiskit::DirichletDistribution > > const & instance, const class ::statiskit::DirichletDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::DirichletDistribution, struct ::std::default_delete< class ::statiskit::DirichletDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::DirichletDistribution, struct ::std::default_delete< class ::statiskit::DirichletDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::DirichletDistribution, struct ::std::default_delete< class ::statiskit::DirichletDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f6dcabc93640502481ae89cb9aa6208a()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_f6dcabc93640502481ae89cb9aa6208a_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::DirichletDistribution, struct ::std::default_delete< class ::statiskit::DirichletDistribution > > const & unique_ptr_f6dcabc93640502481ae89cb9aa6208a)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::DirichletDistribution, struct ::std::default_delete< class ::statiskit::DirichletDistribution > > & >(unique_ptr_f6dcabc93640502481ae89cb9aa6208a).release()).ptr());
            std::shared_ptr< class ::statiskit::DirichletDistribution  > shared_ptr_f6dcabc93640502481ae89cb9aa6208a(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::DirichletDistribution, struct ::std::default_delete< class ::statiskit::DirichletDistribution > > & >(unique_ptr_f6dcabc93640502481ae89cb9aa6208a)));
            return boost::python::incref(boost::python::object(shared_ptr_f6dcabc93640502481ae89cb9aa6208a).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::DirichletDistribution, struct ::std::default_delete< class ::statiskit::DirichletDistribution > >, unique_ptr_f6dcabc93640502481ae89cb9aa6208a_to_python >();
}