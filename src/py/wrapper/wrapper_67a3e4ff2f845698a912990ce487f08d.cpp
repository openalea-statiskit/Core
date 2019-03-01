#include "_core.h"

class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & (::statiskit::NominalSampleSpace::*method_pointer_53223f023b705139b46d39997bbeab06)()const= &::statiskit::NominalSampleSpace::get_reference;
void  (::statiskit::NominalSampleSpace::*method_pointer_2761b455bdcf5c9c8115e95deb4e4b67)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)= &::statiskit::NominalSampleSpace::set_reference;
void  (::statiskit::NominalSampleSpace::*method_pointer_d6f32ffc8afe5942ba9a5548e407dbed)()= &::statiskit::NominalSampleSpace::randomize;
class ::std::unique_ptr< class ::statiskit::OrdinalSampleSpace, struct ::std::default_delete< class ::statiskit::OrdinalSampleSpace > >  (::statiskit::NominalSampleSpace::*method_pointer_8b5f2a24fde05e919454b55efe9b9da8)()const= &::statiskit::NominalSampleSpace::as_ordinal;

namespace autowig {
}

void wrapper_67a3e4ff2f845698a912990ce487f08d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::NominalSampleSpace, autowig::HolderType< class ::statiskit::NominalSampleSpace >::Type, struct ::statiskit::CategoricalSampleSpace > class_67a3e4ff2f845698a912990ce487f08d(module, "NominalSampleSpace", "");
    class_67a3e4ff2f845698a912990ce487f08d.def(pybind11::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >());
    class_67a3e4ff2f845698a912990ce487f08d.def(pybind11::init< class ::statiskit::NominalSampleSpace const & >());
    class_67a3e4ff2f845698a912990ce487f08d.def("get_reference", method_pointer_53223f023b705139b46d39997bbeab06, pybind11::return_value_policy::copy, "");
    class_67a3e4ff2f845698a912990ce487f08d.def("set_reference", method_pointer_2761b455bdcf5c9c8115e95deb4e4b67, "");
    class_67a3e4ff2f845698a912990ce487f08d.def("randomize", method_pointer_d6f32ffc8afe5942ba9a5548e407dbed, "");
    class_67a3e4ff2f845698a912990ce487f08d.def("as_ordinal", method_pointer_8b5f2a24fde05e919454b55efe9b9da8, "");

}