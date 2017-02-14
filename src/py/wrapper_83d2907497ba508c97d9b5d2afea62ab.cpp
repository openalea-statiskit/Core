#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > > const volatile * get_pointer<class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > > const volatile >(class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_83d2907497ba508c97d9b5d2afea62ab()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_c0d085183abf5e8fb3701487e9d7bb9e)(class ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > ) = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::assign;
    ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::reverse_iterator  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_125f03fe172857d49a8c9201977e1bd8)() = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::rbegin;
    ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::const_reverse_iterator  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_ed28b3f0305b5036b356c7ff6d2dd1e7)() const = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::rbegin;
    ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::reverse_iterator  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_815f947bd1ff5f98b1902e45036aa011)() = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::rend;
    ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::const_reverse_iterator  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_3a24b65b42805dc3a4d15d709d5c43bd)() const = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::rend;
    ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::const_reverse_iterator  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_3f0b1536b73851c8b1c4918720c51238)() const = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::crbegin;
    ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::const_reverse_iterator  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_dedb544c16f25bc097d5c5f0ebb23fd2)() const = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::crend;
    ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::size_type  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_89d1f88c74345486a8ad24b775c53228)() const = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::size;
    ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::size_type  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_8a3815301e635a5db59950f23a402f0c)() const = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::max_size;
    void  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_1c6532ef0f875db588f9aa6bed7f8f5c)(::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::size_type ) = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::resize;
    void  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_26c002c946c35a39acdba2a5cd39a6f2)() = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::shrink_to_fit;
    ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::size_type  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_67b6547bf51c5de9bf548e735f1d05cf)() const = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::capacity;
    bool  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_4136dbd85e395c8095d3d8652457effc)() const = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::empty;
    void  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_ffaff936641f577fb32e2108480101c8)(::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::size_type ) = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::reserve;
    void  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_0e22e6923ec058fa932a80f757c36d20)() = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::pop_back;
    void  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_ad9fe1f4a80656039467738444dc6817)(class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > > &) = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::swap;
    void  (::std::vector< ::std::shared_ptr< ::statiskit::BinomialDistribution >, ::std::allocator< ::std::shared_ptr< ::statiskit::BinomialDistribution > > >::*method_pointer_f7544652268c5733bc3b7e927da54569)() = &::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::clear;
    boost::python::class_< class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >, autowig::Held< class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > > >::Type > class_83d2907497ba508c97d9b5d2afea62ab("_Vector_83d2907497ba508c97d9b5d2afea62ab", "", boost::python::no_init);
    class_83d2907497ba508c97d9b5d2afea62ab.def(boost::python::init<  >(""));
    class_83d2907497ba508c97d9b5d2afea62ab.def(boost::python::init< class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > > const & >(""));
    class_83d2907497ba508c97d9b5d2afea62ab.def("assign", method_pointer_c0d085183abf5e8fb3701487e9d7bb9e, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("rbegin", method_pointer_125f03fe172857d49a8c9201977e1bd8, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("rbegin", method_pointer_ed28b3f0305b5036b356c7ff6d2dd1e7, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("rend", method_pointer_815f947bd1ff5f98b1902e45036aa011, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("rend", method_pointer_3a24b65b42805dc3a4d15d709d5c43bd, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("crbegin", method_pointer_3f0b1536b73851c8b1c4918720c51238, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("crend", method_pointer_dedb544c16f25bc097d5c5f0ebb23fd2, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("__len__", method_pointer_89d1f88c74345486a8ad24b775c53228, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("max_size", method_pointer_8a3815301e635a5db59950f23a402f0c, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("resize", method_pointer_1c6532ef0f875db588f9aa6bed7f8f5c, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("shrink_to_fit", method_pointer_26c002c946c35a39acdba2a5cd39a6f2, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("capacity", method_pointer_67b6547bf51c5de9bf548e735f1d05cf, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("empty", method_pointer_4136dbd85e395c8095d3d8652457effc, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("reserve", method_pointer_ffaff936641f577fb32e2108480101c8, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("pop_back", method_pointer_0e22e6923ec058fa932a80f757c36d20, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("swap", method_pointer_ad9fe1f4a80656039467738444dc6817, "");
    class_83d2907497ba508c97d9b5d2afea62ab.def("clear", method_pointer_f7544652268c5733bc3b7e927da54569, "");

    struct vector_83d2907497ba508c97d9b5d2afea62ab_from_python
    {
        vector_83d2907497ba508c97d9b5d2afea62ab_from_python()
        {
            boost::python::converter::registry::push_back(
                &convertible,
                &construct,
                boost::python::type_id< class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > > >*)data)->storage.bytes;
            new (storage) class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >();
            data->convertible = storage;
            class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >& result = *((class ::std::vector< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.push_back((class ::std::shared_ptr< class ::statiskit::BinomialDistribution > )(boost::python::extract< class ::std::shared_ptr< class ::statiskit::BinomialDistribution >  >(py_elem_obj)));
            }
        }
    };

    vector_83d2907497ba508c97d9b5d2afea62ab_from_python();
}