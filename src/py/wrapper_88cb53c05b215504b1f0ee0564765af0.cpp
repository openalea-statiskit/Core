#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultivariateData const volatile * get_pointer<struct ::statiskit::MultivariateData const volatile >(struct ::statiskit::MultivariateData const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_88cb53c05b215504b1f0ee0564765af0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateSampleSpace const * (::statiskit::MultivariateData::*method_pointer_2da46638257d59e48fa1636c64d254bf)() const = &::statiskit::MultivariateData::get_sample_space;
    class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  (::statiskit::MultivariateData::*method_pointer_03ae26ff6e5c56ac9c1e8dc84d177549)(::std::size_t const &) const = &::statiskit::MultivariateData::extract;
    double  (::statiskit::MultivariateData::*method_pointer_21b09584f6625e14abe2acdb420c6b08)() const = &::statiskit::MultivariateData::compute_total;
    boost::python::class_< struct ::statiskit::MultivariateData, autowig::Held< struct ::statiskit::MultivariateData >::Type, boost::noncopyable > class_88cb53c05b215504b1f0ee0564765af0("MultivariateData", "", boost::python::no_init);
    class_88cb53c05b215504b1f0ee0564765af0.def("get_sample_space", method_pointer_2da46638257d59e48fa1636c64d254bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_88cb53c05b215504b1f0ee0564765af0.def("extract", method_pointer_03ae26ff6e5c56ac9c1e8dc84d177549, "");
    class_88cb53c05b215504b1f0ee0564765af0.def("compute_total", method_pointer_21b09584f6625e14abe2acdb420c6b08, "");

}