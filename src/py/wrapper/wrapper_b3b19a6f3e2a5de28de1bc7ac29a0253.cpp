#include "_core.h"

struct ::statiskit::UnivariateData & (::std::unique_ptr< ::statiskit::UnivariateData, ::std::default_delete< ::statiskit::UnivariateData > >::*method_pointer_3cc287511a945c1589b02aa98845972b)()const= &::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >::operator*;
::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >::pointer  (::std::unique_ptr< ::statiskit::UnivariateData, ::std::default_delete< ::statiskit::UnivariateData > >::*method_pointer_be254d6dc30452e988465ecb3e35f1b1)()const= &::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >::get;
::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >::pointer  (::std::unique_ptr< ::statiskit::UnivariateData, ::std::default_delete< ::statiskit::UnivariateData > >::*method_pointer_cae81b409ab0505d8bf9cfab5b7def80)()= &::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >::release;
void  (::std::unique_ptr< ::statiskit::UnivariateData, ::std::default_delete< ::statiskit::UnivariateData > >::*method_pointer_8ad13f719daa5be4a2e2e25381207229)(::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >::pointer )= &::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >::reset;
void  (::std::unique_ptr< ::statiskit::UnivariateData, ::std::default_delete< ::statiskit::UnivariateData > >::*method_pointer_56fa6ca9b6205f4b8343caec3fb2b0b4)(class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > &)= &::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >::swap;

namespace autowig {
    void method_decorator_3cc287511a945c1589b02aa98845972b(class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > const & instance, const struct ::statiskit::UnivariateData & param_out) { instance.operator*() = param_out; }
}

void wrapper_b3b19a6f3e2a5de28de1bc7ac29a0253(pybind11::module& module)
{

}