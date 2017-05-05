#include "_core.h"



namespace autowig
{

    void method_decorator_a6c072f3d22452a0a03fc2e7fa32a0b5(class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > & instance, ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::size_type  param_in_0, ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::reference  param_out)     { instance.at(param_in_0) = param_out; }
    void method_decorator_9d231f8feb5a530a9be6a0a456258b64(class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > & instance, ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::reference  param_out)     { instance.front() = param_out; }
    void method_decorator_8c90f6a1688451bd89c1bacee415a70a(class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > & instance, ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::reference  param_out)     { instance.back() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > const volatile * get_pointer<class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > const volatile >(class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_160b713997e259caa9b19848803d29f1()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_88b3f016ae7d54418cc2f3e637e852b7)(::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::size_type , ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::value_type const &) = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::assign;
    ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::size_type  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_416a49a53c945efab7a05694f8508f2b)() const = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::size;
    ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::size_type  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_20809c8856da5a2cb900d5ea69ba5926)() const = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::max_size;
    ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::size_type  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_63a02ad8628155bb89f3c0beb49939d6)() const = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::capacity;
    bool  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_23bbf8bbbe785923b2cd3a729bc4a017)() const = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::empty;
    void  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_194c577c5cd35a0b80783b1498f2630d)(::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::size_type ) = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::reserve;
    ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::reference  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_a6c072f3d22452a0a03fc2e7fa32a0b5)(::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::size_type ) = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::at;
    ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::const_reference  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_50c00d9b0dc555b9bd24a3e19b878c0f)(::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::size_type ) const = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::at;
    ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::reference  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_9d231f8feb5a530a9be6a0a456258b64)() = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::front;
    ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::const_reference  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_6c1fde779c945331a3ab3a0bed679126)() const = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::front;
    ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::reference  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_8c90f6a1688451bd89c1bacee415a70a)() = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::back;
    ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::const_reference  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_b61282a763c159ea94f8df472929c885)() const = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::back;
    void  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_d05a9c7cb0855e82bc34594cfe000a83)(::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::value_type const &) = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::push_back;
    void  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_db96833773745c3eb6bd54a488de10fc)() = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::pop_back;
    void  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_67f11f1c4d795cacbf8d147e8a905489)(class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > &) = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::swap;
    void  (::std::vector< ::statiskit::UnivariateSampleSpace *, ::std::allocator< ::statiskit::UnivariateSampleSpace * > >::*method_pointer_e369802a9da05ac29ed7095037595b2d)() = &::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >::clear;
    boost::python::class_< class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >, autowig::Held< class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > >::Type > class_160b713997e259caa9b19848803d29f1("_Vector_160b713997e259caa9b19848803d29f1", "", boost::python::no_init);
    class_160b713997e259caa9b19848803d29f1.def(boost::python::init<  >(""));
    class_160b713997e259caa9b19848803d29f1.def(boost::python::init< class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > const & >(""));
    class_160b713997e259caa9b19848803d29f1.def("assign", method_pointer_88b3f016ae7d54418cc2f3e637e852b7, "");
    class_160b713997e259caa9b19848803d29f1.def("__len__", method_pointer_416a49a53c945efab7a05694f8508f2b, "");
    class_160b713997e259caa9b19848803d29f1.def("max_size", method_pointer_20809c8856da5a2cb900d5ea69ba5926, "");
    class_160b713997e259caa9b19848803d29f1.def("capacity", method_pointer_63a02ad8628155bb89f3c0beb49939d6, "");
    class_160b713997e259caa9b19848803d29f1.def("empty", method_pointer_23bbf8bbbe785923b2cd3a729bc4a017, "");
    class_160b713997e259caa9b19848803d29f1.def("reserve", method_pointer_194c577c5cd35a0b80783b1498f2630d, "");
    class_160b713997e259caa9b19848803d29f1.def("at", method_pointer_a6c072f3d22452a0a03fc2e7fa32a0b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_160b713997e259caa9b19848803d29f1.def("at", autowig::method_decorator_a6c072f3d22452a0a03fc2e7fa32a0b5);
    class_160b713997e259caa9b19848803d29f1.def("at", method_pointer_50c00d9b0dc555b9bd24a3e19b878c0f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_160b713997e259caa9b19848803d29f1.def("front", method_pointer_9d231f8feb5a530a9be6a0a456258b64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_160b713997e259caa9b19848803d29f1.def("front", autowig::method_decorator_9d231f8feb5a530a9be6a0a456258b64);
    class_160b713997e259caa9b19848803d29f1.def("front", method_pointer_6c1fde779c945331a3ab3a0bed679126, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_160b713997e259caa9b19848803d29f1.def("back", method_pointer_8c90f6a1688451bd89c1bacee415a70a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_160b713997e259caa9b19848803d29f1.def("back", autowig::method_decorator_8c90f6a1688451bd89c1bacee415a70a);
    class_160b713997e259caa9b19848803d29f1.def("back", method_pointer_b61282a763c159ea94f8df472929c885, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_160b713997e259caa9b19848803d29f1.def("push_back", method_pointer_d05a9c7cb0855e82bc34594cfe000a83, "");
    class_160b713997e259caa9b19848803d29f1.def("pop_back", method_pointer_db96833773745c3eb6bd54a488de10fc, "");
    class_160b713997e259caa9b19848803d29f1.def("swap", method_pointer_67f11f1c4d795cacbf8d147e8a905489, "");
    class_160b713997e259caa9b19848803d29f1.def("clear", method_pointer_e369802a9da05ac29ed7095037595b2d, "");

    struct vector_160b713997e259caa9b19848803d29f1_from_python
    {
        vector_160b713997e259caa9b19848803d29f1_from_python()
        {
            boost::python::converter::registry::push_back(
                &convertible,
                &construct,
                boost::python::type_id< class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > >*)data)->storage.bytes;
            new (storage) class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >();
            data->convertible = storage;
            class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >& result = *((class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.push_back((struct ::statiskit::UnivariateSampleSpace *)(boost::python::extract< struct ::statiskit::UnivariateSampleSpace * >(py_elem_obj)));
            }
        }
    };

    vector_160b713997e259caa9b19848803d29f1_from_python();
}