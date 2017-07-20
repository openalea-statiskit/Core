#include "_core.h"



namespace autowig
{

    void method_decorator_09eb5e96a9225a67a58c6b44038a925a(class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > > & instance, ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::size_type  param_in_0, const ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::reference  param_out) { instance.at(param_in_0) = param_out; }
    void method_decorator_85242572869d5891bb8f79a74bcc7f81(class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > > & instance, const ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::reference  param_out) { instance.front() = param_out; }
    void method_decorator_24f99289a2895a7e8bae7283150e71d3(class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > > & instance, const ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::reference  param_out) { instance.back() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > > const volatile * get_pointer<class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > > const volatile >(class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6cedb8d0b37f5b64b10d8d1a3b4563fe()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_14ce343d0f8f5507852ca7adf66de0a6)(::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::size_type , ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::value_type const &) = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::assign;
    ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::size_type  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_a2b31e350aab5365905ff65a41e0e203)() const = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::size;
    ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::size_type  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_b71068dafc0a5866a13c7dd98b90b653)() const = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::max_size;
    ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::size_type  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_be0ee006ba6c5fd68dad49b19ea33e7f)() const = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::capacity;
    bool  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_f9ab67023a61569392fbf0b77ce0a6b1)() const = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::empty;
    void  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_27f1ea80b92651e7b87b8a5182c612bb)(::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::size_type ) = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::reserve;
    ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::reference  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_09eb5e96a9225a67a58c6b44038a925a)(::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::size_type ) = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::at;
    ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::const_reference  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_7de7f715833553b69b76fee7cc31db44)(::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::size_type ) const = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::at;
    ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::reference  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_85242572869d5891bb8f79a74bcc7f81)() = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::front;
    ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::const_reference  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_58957e123a705b86a87c1d16b5e85fec)() const = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::front;
    ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::reference  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_24f99289a2895a7e8bae7283150e71d3)() = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::back;
    ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::const_reference  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_6220d871bec4525d99ee4095fa7fbcab)() const = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::back;
    void  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_936d58a7830758c2b0df0e0da6424378)(::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::value_type const &) = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::push_back;
    void  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_7aea3992a207560d9d73e2ef84626a1b)() = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::pop_back;
    void  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_da1ee203912e54eea7603dbfab76ec10)(class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > > &) = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::swap;
    void  (::std::vector< ::statiskit::SplittingOperator *, ::std::allocator< ::statiskit::SplittingOperator * > >::*method_pointer_075ced14ef5f561aaea3c9474e89c746)() = &::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >::clear;
    boost::python::class_< class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >, autowig::Held< class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > > >::Type > class_6cedb8d0b37f5b64b10d8d1a3b4563fe("_Vector_6cedb8d0b37f5b64b10d8d1a3b4563fe", "", boost::python::no_init);
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def(boost::python::init<  >(""));
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def(boost::python::init< class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > > const & >(""));
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("assign", method_pointer_14ce343d0f8f5507852ca7adf66de0a6, "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("__len__", method_pointer_a2b31e350aab5365905ff65a41e0e203, "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("max_size", method_pointer_b71068dafc0a5866a13c7dd98b90b653, "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("capacity", method_pointer_be0ee006ba6c5fd68dad49b19ea33e7f, "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("empty", method_pointer_f9ab67023a61569392fbf0b77ce0a6b1, "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("reserve", method_pointer_27f1ea80b92651e7b87b8a5182c612bb, "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("at", method_pointer_09eb5e96a9225a67a58c6b44038a925a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("at", autowig::method_decorator_09eb5e96a9225a67a58c6b44038a925a);
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("at", method_pointer_7de7f715833553b69b76fee7cc31db44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("front", method_pointer_85242572869d5891bb8f79a74bcc7f81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("front", autowig::method_decorator_85242572869d5891bb8f79a74bcc7f81);
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("front", method_pointer_58957e123a705b86a87c1d16b5e85fec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("back", method_pointer_24f99289a2895a7e8bae7283150e71d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("back", autowig::method_decorator_24f99289a2895a7e8bae7283150e71d3);
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("back", method_pointer_6220d871bec4525d99ee4095fa7fbcab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("push_back", method_pointer_936d58a7830758c2b0df0e0da6424378, "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("pop_back", method_pointer_7aea3992a207560d9d73e2ef84626a1b, "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("swap", method_pointer_da1ee203912e54eea7603dbfab76ec10, "");
    class_6cedb8d0b37f5b64b10d8d1a3b4563fe.def("clear", method_pointer_075ced14ef5f561aaea3c9474e89c746, "");

    struct vector_6cedb8d0b37f5b64b10d8d1a3b4563fe_from_python
    {
        vector_6cedb8d0b37f5b64b10d8d1a3b4563fe_from_python()
        {
            boost::python::converter::registry::push_back(
                &convertible,
                &construct,
                boost::python::type_id< class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > > >*)data)->storage.bytes;
            new (storage) class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >();
            data->convertible = storage;
            class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >& result = *((class ::std::vector< struct ::statiskit::SplittingOperator *, class ::std::allocator< struct ::statiskit::SplittingOperator * > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.push_back(boost::python::extract< struct ::statiskit::SplittingOperator * >(py_elem_obj));
            }
        }
    };

    vector_6cedb8d0b37f5b64b10d8d1a3b4563fe_from_python();
}