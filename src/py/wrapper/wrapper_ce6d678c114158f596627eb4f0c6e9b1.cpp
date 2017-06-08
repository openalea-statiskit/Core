#include "_core.h"



namespace autowig
{

    void method_decorator_1dab164edf8157aaa93f971c9d104e3d(class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > & instance, ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::size_type  param_in_0, const ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::reference  param_out) { instance.at(param_in_0) = param_out; }
    void method_decorator_364c56ff3f415b51b9f5327368b56cdf(class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > & instance, const ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::reference  param_out) { instance.front() = param_out; }
    void method_decorator_a8a3c95c27765ecd82494b0378b1f425(class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > & instance, const ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::reference  param_out) { instance.back() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > const volatile * get_pointer<class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > const volatile >(class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ce6d678c114158f596627eb4f0c6e9b1()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_3fe56cb26f9851258e713dddb58f2b90)(::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::size_type , ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::value_type const &) = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::assign;
    ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::size_type  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_a076f832a21951cea2617bd8b5557ea9)() const = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::size;
    ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::size_type  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_56bbd133aa9457a7bca456405380823c)() const = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::max_size;
    ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::size_type  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_58351392b9175bc7a50005aa773233ae)() const = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::capacity;
    bool  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_a935e88c79d95222a0e2ce5acf723fa2)() const = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::empty;
    void  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_b55513eaa95e5b9c9282c046ed5455b0)(::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::size_type ) = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::reserve;
    ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::reference  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_1dab164edf8157aaa93f971c9d104e3d)(::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::size_type ) = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::at;
    ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::const_reference  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_2591955b78145f308fe70ac4aaa41bdf)(::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::size_type ) const = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::at;
    ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::reference  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_364c56ff3f415b51b9f5327368b56cdf)() = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::front;
    ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::const_reference  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_864ec8fdaf045a2eac1103596955be0c)() const = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::front;
    ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::reference  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_a8a3c95c27765ecd82494b0378b1f425)() = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::back;
    ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::const_reference  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_1afbfdf812185be1a4b9775bbb8224da)() const = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::back;
    void  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_dbbcef89e9625e0cad9add967613d027)(::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::value_type const &) = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::push_back;
    void  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_f5984385bad25dabb1e3c61988c852ee)() = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::pop_back;
    void  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_925fc8290795540694fe6e7c5434d44a)(class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > &) = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::swap;
    void  (::std::vector< ::statiskit::DiscreteUnivariateDistribution *, ::std::allocator< ::statiskit::DiscreteUnivariateDistribution * > >::*method_pointer_22e6483dae2055eb8a935ca924840afd)() = &::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >::clear;
    boost::python::class_< class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >, autowig::Held< class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > >::Type > class_ce6d678c114158f596627eb4f0c6e9b1("_Vector_ce6d678c114158f596627eb4f0c6e9b1", "", boost::python::no_init);
    class_ce6d678c114158f596627eb4f0c6e9b1.def(boost::python::init<  >(""));
    class_ce6d678c114158f596627eb4f0c6e9b1.def(boost::python::init< class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > const & >(""));
    class_ce6d678c114158f596627eb4f0c6e9b1.def("assign", method_pointer_3fe56cb26f9851258e713dddb58f2b90, "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("__len__", method_pointer_a076f832a21951cea2617bd8b5557ea9, "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("max_size", method_pointer_56bbd133aa9457a7bca456405380823c, "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("capacity", method_pointer_58351392b9175bc7a50005aa773233ae, "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("empty", method_pointer_a935e88c79d95222a0e2ce5acf723fa2, "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("reserve", method_pointer_b55513eaa95e5b9c9282c046ed5455b0, "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("at", method_pointer_1dab164edf8157aaa93f971c9d104e3d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("at", autowig::method_decorator_1dab164edf8157aaa93f971c9d104e3d);
    class_ce6d678c114158f596627eb4f0c6e9b1.def("at", method_pointer_2591955b78145f308fe70ac4aaa41bdf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("front", method_pointer_364c56ff3f415b51b9f5327368b56cdf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("front", autowig::method_decorator_364c56ff3f415b51b9f5327368b56cdf);
    class_ce6d678c114158f596627eb4f0c6e9b1.def("front", method_pointer_864ec8fdaf045a2eac1103596955be0c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("back", method_pointer_a8a3c95c27765ecd82494b0378b1f425, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("back", autowig::method_decorator_a8a3c95c27765ecd82494b0378b1f425);
    class_ce6d678c114158f596627eb4f0c6e9b1.def("back", method_pointer_1afbfdf812185be1a4b9775bbb8224da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("push_back", method_pointer_dbbcef89e9625e0cad9add967613d027, "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("pop_back", method_pointer_f5984385bad25dabb1e3c61988c852ee, "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("swap", method_pointer_925fc8290795540694fe6e7c5434d44a, "");
    class_ce6d678c114158f596627eb4f0c6e9b1.def("clear", method_pointer_22e6483dae2055eb8a935ca924840afd, "");

    struct vector_ce6d678c114158f596627eb4f0c6e9b1_from_python
    {
        vector_ce6d678c114158f596627eb4f0c6e9b1_from_python()
        {
            boost::python::converter::registry::push_back(
                &convertible,
                &construct,
                boost::python::type_id< class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > >*)data)->storage.bytes;
            new (storage) class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >();
            data->convertible = storage;
            class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >& result = *((class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.push_back(boost::python::extract< struct ::statiskit::DiscreteUnivariateDistribution * >(py_elem_obj));
            }
        }
    };

    vector_ce6d678c114158f596627eb4f0c6e9b1_from_python();
}