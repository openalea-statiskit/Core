#include "_core.h"



namespace autowig
{

    void method_decorator_a3e1f1f48f1f59b5a7fe5b1e5b4412d0(class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > & instance, ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::size_type  param_in_0, const ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::reference  param_out) { instance.at(param_in_0) = param_out; }
    void method_decorator_f982e613acff515a8fcc98352b4968bf(class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > & instance, const ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::reference  param_out) { instance.front() = param_out; }
    void method_decorator_8ea495054de354ba80ef5bd7f54ab433(class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > & instance, const ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::reference  param_out) { instance.back() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > const volatile * get_pointer<class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > const volatile >(class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a138b226412951b38a64aaad8bc549ac()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_40e12584a7ad579a962221dcb6bceed4)(::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::size_type , ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::value_type const &) = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::assign;
    ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::size_type  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_6e8ebb15ca6f5e7d852644873b525f06)() const = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::size;
    ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::size_type  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_68923ecd3744520db8340f5af42c541b)() const = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::max_size;
    ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::size_type  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_cbb14788304d58068f29270cbd708aae)() const = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::capacity;
    bool  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_e5967d11d2df50fda18ba395b8838487)() const = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::empty;
    void  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_a6c0ef5f9061516ab2a4572d6fce148c)(::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::size_type ) = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::reserve;
    ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::reference  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_a3e1f1f48f1f59b5a7fe5b1e5b4412d0)(::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::size_type ) = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::at;
    ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::const_reference  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_767506a126d850b991da5fdd9f16561b)(::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::size_type ) const = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::at;
    ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::reference  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_f982e613acff515a8fcc98352b4968bf)() = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::front;
    ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::const_reference  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_be6875c31eef59af85ae833244837729)() const = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::front;
    ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::reference  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_8ea495054de354ba80ef5bd7f54ab433)() = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::back;
    ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::const_reference  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_33a3199281d752178e9ad32c8df185e6)() const = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::back;
    void  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_97273c6c8c1d5cd0af8574595b777d5d)(::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::value_type const &) = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::push_back;
    void  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_3e5ba935f30d5ef1860290633b9a8822)() = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::pop_back;
    void  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_9588521e587751d6bba0dfef62de599d)(class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > &) = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::swap;
    void  (::std::vector< ::statiskit::SingularDistribution *, ::std::allocator< ::statiskit::SingularDistribution * > >::*method_pointer_edf28629da1b5fd9bca8ccc7f889fe1c)() = &::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >::clear;
    boost::python::class_< class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >, autowig::Held< class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > >::Type > class_a138b226412951b38a64aaad8bc549ac("_Vector_a138b226412951b38a64aaad8bc549ac", "", boost::python::no_init);
    class_a138b226412951b38a64aaad8bc549ac.def(boost::python::init<  >(""));
    class_a138b226412951b38a64aaad8bc549ac.def(boost::python::init< class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > const & >(""));
    class_a138b226412951b38a64aaad8bc549ac.def("assign", method_pointer_40e12584a7ad579a962221dcb6bceed4, "");
    class_a138b226412951b38a64aaad8bc549ac.def("__len__", method_pointer_6e8ebb15ca6f5e7d852644873b525f06, "");
    class_a138b226412951b38a64aaad8bc549ac.def("max_size", method_pointer_68923ecd3744520db8340f5af42c541b, "");
    class_a138b226412951b38a64aaad8bc549ac.def("capacity", method_pointer_cbb14788304d58068f29270cbd708aae, "");
    class_a138b226412951b38a64aaad8bc549ac.def("empty", method_pointer_e5967d11d2df50fda18ba395b8838487, "");
    class_a138b226412951b38a64aaad8bc549ac.def("reserve", method_pointer_a6c0ef5f9061516ab2a4572d6fce148c, "");
    class_a138b226412951b38a64aaad8bc549ac.def("at", method_pointer_a3e1f1f48f1f59b5a7fe5b1e5b4412d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a138b226412951b38a64aaad8bc549ac.def("at", autowig::method_decorator_a3e1f1f48f1f59b5a7fe5b1e5b4412d0);
    class_a138b226412951b38a64aaad8bc549ac.def("at", method_pointer_767506a126d850b991da5fdd9f16561b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a138b226412951b38a64aaad8bc549ac.def("front", method_pointer_f982e613acff515a8fcc98352b4968bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a138b226412951b38a64aaad8bc549ac.def("front", autowig::method_decorator_f982e613acff515a8fcc98352b4968bf);
    class_a138b226412951b38a64aaad8bc549ac.def("front", method_pointer_be6875c31eef59af85ae833244837729, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a138b226412951b38a64aaad8bc549ac.def("back", method_pointer_8ea495054de354ba80ef5bd7f54ab433, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a138b226412951b38a64aaad8bc549ac.def("back", autowig::method_decorator_8ea495054de354ba80ef5bd7f54ab433);
    class_a138b226412951b38a64aaad8bc549ac.def("back", method_pointer_33a3199281d752178e9ad32c8df185e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a138b226412951b38a64aaad8bc549ac.def("push_back", method_pointer_97273c6c8c1d5cd0af8574595b777d5d, "");
    class_a138b226412951b38a64aaad8bc549ac.def("pop_back", method_pointer_3e5ba935f30d5ef1860290633b9a8822, "");
    class_a138b226412951b38a64aaad8bc549ac.def("swap", method_pointer_9588521e587751d6bba0dfef62de599d, "");
    class_a138b226412951b38a64aaad8bc549ac.def("clear", method_pointer_edf28629da1b5fd9bca8ccc7f889fe1c, "");

    struct vector_a138b226412951b38a64aaad8bc549ac_from_python
    {
        vector_a138b226412951b38a64aaad8bc549ac_from_python()
        {
            boost::python::converter::registry::push_back(
                &convertible,
                &construct,
                boost::python::type_id< class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > >*)data)->storage.bytes;
            new (storage) class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >();
            data->convertible = storage;
            class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >& result = *((class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.push_back(boost::python::extract< struct ::statiskit::SingularDistribution * >(py_elem_obj));
            }
        }
    };

    vector_a138b226412951b38a64aaad8bc549ac_from_python();
}