#include "_core.h"



namespace autowig
{

    void method_decorator_d0aaaed44e815965a76dc2c3b2f63837(class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > & instance, ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::size_type  param_in_0, ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::reference  param_out)     { instance.at(param_in_0) = param_out; }
    void method_decorator_1a93277a4d6f5017b4c3e6a88f9dfb43(class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > & instance, ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::reference  param_out)     { instance.front() = param_out; }
    void method_decorator_2474084c4fd555ec81f98e0053824674(class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > & instance, ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::reference  param_out)     { instance.back() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > const volatile * get_pointer<class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > const volatile >(class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_19ec6a1f261852b5b192c3cbc4571d78()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_572afe9f5b815944a96c44b07e362aea)(::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::size_type , ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::value_type const &) = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::assign;
    ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::size_type  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_38d07b50758a58bb87f682a2d859edc5)() const = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::size;
    ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::size_type  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_398aaead4ee750409cbe5f1331745a5a)() const = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::max_size;
    ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::size_type  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_5e5118a5461154daa965f11e167d2070)() const = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::capacity;
    bool  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_a377b0390b65509b9c71510f782ca199)() const = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::empty;
    void  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_3b4f419050be58b5ad99d8e62aca5c63)(::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::size_type ) = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::reserve;
    ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::reference  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_d0aaaed44e815965a76dc2c3b2f63837)(::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::size_type ) = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::at;
    ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::const_reference  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_3c62ad09c99f5aa6b2c7df833b0a54bd)(::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::size_type ) const = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::at;
    ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::reference  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_1a93277a4d6f5017b4c3e6a88f9dfb43)() = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::front;
    ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::const_reference  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_e1ab4a82ce105a3e9b27f9e69de5bd70)() const = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::front;
    ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::reference  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_2474084c4fd555ec81f98e0053824674)() = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::back;
    ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::const_reference  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_e615afbdaa5e57b38d259aaa00d9969b)() const = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::back;
    void  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_8c6b4b6af5bd5ec994a16fa166b8b5ba)(::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::value_type const &) = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::push_back;
    void  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_ff5807704a2e5ff7bef76770f40b3371)() = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::pop_back;
    void  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_2074276592eb542181fc14ae221179a7)(class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > &) = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::swap;
    void  (::std::vector< ::statiskit::ContinuousMultivariateDistribution *, ::std::allocator< ::statiskit::ContinuousMultivariateDistribution * > >::*method_pointer_22c911e25b275ad5a0337d581e30b4d8)() = &::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >::clear;
    boost::python::class_< class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >, autowig::Held< class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > >::Type > class_19ec6a1f261852b5b192c3cbc4571d78("_Vector_19ec6a1f261852b5b192c3cbc4571d78", "", boost::python::no_init);
    class_19ec6a1f261852b5b192c3cbc4571d78.def(boost::python::init<  >(""));
    class_19ec6a1f261852b5b192c3cbc4571d78.def(boost::python::init< class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > const & >(""));
    class_19ec6a1f261852b5b192c3cbc4571d78.def("assign", method_pointer_572afe9f5b815944a96c44b07e362aea, "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("__len__", method_pointer_38d07b50758a58bb87f682a2d859edc5, "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("max_size", method_pointer_398aaead4ee750409cbe5f1331745a5a, "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("capacity", method_pointer_5e5118a5461154daa965f11e167d2070, "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("empty", method_pointer_a377b0390b65509b9c71510f782ca199, "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("reserve", method_pointer_3b4f419050be58b5ad99d8e62aca5c63, "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("at", method_pointer_d0aaaed44e815965a76dc2c3b2f63837, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("at", autowig::method_decorator_d0aaaed44e815965a76dc2c3b2f63837);
    class_19ec6a1f261852b5b192c3cbc4571d78.def("at", method_pointer_3c62ad09c99f5aa6b2c7df833b0a54bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("front", method_pointer_1a93277a4d6f5017b4c3e6a88f9dfb43, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("front", autowig::method_decorator_1a93277a4d6f5017b4c3e6a88f9dfb43);
    class_19ec6a1f261852b5b192c3cbc4571d78.def("front", method_pointer_e1ab4a82ce105a3e9b27f9e69de5bd70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("back", method_pointer_2474084c4fd555ec81f98e0053824674, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("back", autowig::method_decorator_2474084c4fd555ec81f98e0053824674);
    class_19ec6a1f261852b5b192c3cbc4571d78.def("back", method_pointer_e615afbdaa5e57b38d259aaa00d9969b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("push_back", method_pointer_8c6b4b6af5bd5ec994a16fa166b8b5ba, "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("pop_back", method_pointer_ff5807704a2e5ff7bef76770f40b3371, "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("swap", method_pointer_2074276592eb542181fc14ae221179a7, "");
    class_19ec6a1f261852b5b192c3cbc4571d78.def("clear", method_pointer_22c911e25b275ad5a0337d581e30b4d8, "");

    struct vector_19ec6a1f261852b5b192c3cbc4571d78_from_python
    {
        vector_19ec6a1f261852b5b192c3cbc4571d78_from_python()
        {
            boost::python::converter::registry::push_back(
                &convertible,
                &construct,
                boost::python::type_id< class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > >*)data)->storage.bytes;
            new (storage) class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >();
            data->convertible = storage;
            class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >& result = *((class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.push_back((struct ::statiskit::ContinuousMultivariateDistribution *)(boost::python::extract< struct ::statiskit::ContinuousMultivariateDistribution * >(py_elem_obj)));
            }
        }
    };

    vector_19ec6a1f261852b5b192c3cbc4571d78_from_python();
}