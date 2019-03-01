#include "_core.h"


void wrapper_6ebe27bc0146505b8291b992f2b16ca6(pybind11::module& module)
{


    pybind11::register_exception< struct ::statiskit::proxy_connection_error >(module, "ProxyConnectionError");

}