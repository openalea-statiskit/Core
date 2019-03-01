#include "_core.h"

struct ::statiskit::Schedule & (::std::unique_ptr< ::statiskit::Schedule, ::std::default_delete< ::statiskit::Schedule > >::*method_pointer_81e2ae5867985e8db398608b700cf76c)()const= &::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >::operator*;
::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >::pointer  (::std::unique_ptr< ::statiskit::Schedule, ::std::default_delete< ::statiskit::Schedule > >::*method_pointer_688b1d5fe1745b95bbb020e1e7b9fce5)()const= &::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >::get;
::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >::pointer  (::std::unique_ptr< ::statiskit::Schedule, ::std::default_delete< ::statiskit::Schedule > >::*method_pointer_ee54224f30d55295828637ecc42bef47)()= &::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >::release;
void  (::std::unique_ptr< ::statiskit::Schedule, ::std::default_delete< ::statiskit::Schedule > >::*method_pointer_aa5524bcbca954549fa0d2f5e8bcb2b3)(::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >::pointer )= &::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >::reset;
void  (::std::unique_ptr< ::statiskit::Schedule, ::std::default_delete< ::statiskit::Schedule > >::*method_pointer_c43b26651e925f408065057dcc6e5ed1)(class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > > &)= &::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >::swap;

namespace autowig {
    void method_decorator_81e2ae5867985e8db398608b700cf76c(class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > > const & instance, const struct ::statiskit::Schedule & param_out) { instance.operator*() = param_out; }
}

void wrapper_efb22dd89dfc592fbbbda15aec725121(pybind11::module& module)
{

}