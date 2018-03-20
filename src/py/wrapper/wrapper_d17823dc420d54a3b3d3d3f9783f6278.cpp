#include "_core.h"



namespace autowig
{

    void method_decorator_c8723047ae5e5577aeb01d69da4fc8dd(class ::std::unique_ptr< class ::statiskit::ExponentialSchedule, struct ::std::default_delete< class ::statiskit::ExponentialSchedule > > const & instance, const class ::statiskit::ExponentialSchedule & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::ExponentialSchedule, struct ::std::default_delete< class ::statiskit::ExponentialSchedule > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::ExponentialSchedule, struct ::std::default_delete< class ::statiskit::ExponentialSchedule > > const volatile >(class ::std::unique_ptr< class ::statiskit::ExponentialSchedule, struct ::std::default_delete< class ::statiskit::ExponentialSchedule > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d17823dc420d54a3b3d3d3f9783f6278()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_d17823dc420d54a3b3d3d3f9783f6278_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::ExponentialSchedule, struct ::std::default_delete< class ::statiskit::ExponentialSchedule > > const & unique_ptr_d17823dc420d54a3b3d3d3f9783f6278)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::ExponentialSchedule, struct ::std::default_delete< class ::statiskit::ExponentialSchedule > > & >(unique_ptr_d17823dc420d54a3b3d3d3f9783f6278).release()).ptr());
            std::shared_ptr< class ::statiskit::ExponentialSchedule  > shared_ptr_d17823dc420d54a3b3d3d3f9783f6278(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::ExponentialSchedule, struct ::std::default_delete< class ::statiskit::ExponentialSchedule > > & >(unique_ptr_d17823dc420d54a3b3d3d3f9783f6278)));
            return boost::python::incref(boost::python::object(shared_ptr_d17823dc420d54a3b3d3d3f9783f6278).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::ExponentialSchedule, struct ::std::default_delete< class ::statiskit::ExponentialSchedule > >, unique_ptr_d17823dc420d54a3b3d3d3f9783f6278_to_python >();
}