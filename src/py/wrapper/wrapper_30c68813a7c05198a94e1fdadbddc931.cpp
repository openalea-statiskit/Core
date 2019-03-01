#include "_core.h"

struct ::statiskit::MultivariateData & (::std::unique_ptr< ::statiskit::MultivariateData, ::std::default_delete< ::statiskit::MultivariateData > >::*method_pointer_bf9c46c7479a5c3599f286739ab7677c)()const= &::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >::operator*;
::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >::pointer  (::std::unique_ptr< ::statiskit::MultivariateData, ::std::default_delete< ::statiskit::MultivariateData > >::*method_pointer_a3f79a4616ee56ee8ef8cad47505fe37)()const= &::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >::get;
::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >::pointer  (::std::unique_ptr< ::statiskit::MultivariateData, ::std::default_delete< ::statiskit::MultivariateData > >::*method_pointer_14c9b1fbaf0654bb8a62a1f47e3e97c6)()= &::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >::release;
void  (::std::unique_ptr< ::statiskit::MultivariateData, ::std::default_delete< ::statiskit::MultivariateData > >::*method_pointer_2cf00bb6cff059598c721ccdeb22cfd2)(::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >::pointer )= &::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >::reset;
void  (::std::unique_ptr< ::statiskit::MultivariateData, ::std::default_delete< ::statiskit::MultivariateData > >::*method_pointer_9917abadcc9a5fd5b47f44ea0f2e8766)(class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > &)= &::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >::swap;

namespace autowig {
    void method_decorator_bf9c46c7479a5c3599f286739ab7677c(class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > const & instance, const struct ::statiskit::MultivariateData & param_out) { instance.operator*() = param_out; }
}

void wrapper_30c68813a7c05198a94e1fdadbddc931(pybind11::module& module)
{

}