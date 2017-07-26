#include "_core.h"



namespace autowig
{

    void method_decorator_81e2ae5867985e8db398608b700cf76c(class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > > const & instance, const struct ::statiskit::Schedule & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > > const volatile >(class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_efb22dd89dfc592fbbbda15aec725121()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_efb22dd89dfc592fbbbda15aec725121_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > > const & unique_ptr_efb22dd89dfc592fbbbda15aec725121)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > > & >(unique_ptr_efb22dd89dfc592fbbbda15aec725121).release()).ptr());
            std::shared_ptr< struct ::statiskit::Schedule  > shared_ptr_efb22dd89dfc592fbbbda15aec725121(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > > & >(unique_ptr_efb22dd89dfc592fbbbda15aec725121)));
            return boost::python::incref(boost::python::object(shared_ptr_efb22dd89dfc592fbbbda15aec725121).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >, unique_ptr_efb22dd89dfc592fbbbda15aec725121_to_python >();
}