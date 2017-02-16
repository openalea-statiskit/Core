#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 > const volatile * get_pointer<class ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 > const volatile >(class ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_d085a686d2e055d093050d71d2bef3b0()
{

    std::string name_21ee8db290f35815a57c7bf74dca851d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".boost");
    boost::python::object module_21ee8db290f35815a57c7bf74dca851d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_21ee8db290f35815a57c7bf74dca851d.c_str()))));
    boost::python::scope().attr("boost") = module_21ee8db290f35815a57c7bf74dca851d;
    boost::python::scope scope_21ee8db290f35815a57c7bf74dca851d = module_21ee8db290f35815a57c7bf74dca851d;
    std::string name_50af25c4e83c5057a5fed6ca3d2d3161 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".random");
    boost::python::object module_50af25c4e83c5057a5fed6ca3d2d3161(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_50af25c4e83c5057a5fed6ca3d2d3161.c_str()))));
    boost::python::scope().attr("random") = module_50af25c4e83c5057a5fed6ca3d2d3161;
    boost::python::scope scope_50af25c4e83c5057a5fed6ca3d2d3161 = module_50af25c4e83c5057a5fed6ca3d2d3161;
    void  (::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::*method_pointer_8971e6d525a95ebc8c23f18604694ee2)() = &::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::seed;
    void  (::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::*method_pointer_b7db37f98da45e34ae1278c2099f3628)(unsigned int const &) = &::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::seed;
    ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::result_type  (*method_pointer_2117e3ccac985f6488f33521c91ca009)() = ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::min;
    ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::result_type  (*method_pointer_c12ebcd2954357fda89cc30c150bf015)() = ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::max;
    ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::result_type  (::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::*method_pointer_2d2980bcca665b17ae2c89cf5a2b91da)() = &::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::operator();
    void  (::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::*method_pointer_a200ece8d2c452f29e68a9a3ea8969c6)(unsigned long int ) = &::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::discard;
    struct function_group
    {
        static bool  function_a27efa11605b5ecab5909f4b3dc84cd7(class ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 > const & parameter_0, class ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 > const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_83f73d09be20533093635a9717210e05(class ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 > const & parameter_0, class ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 > const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >, autowig::Held< class ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 > >::Type > class_d085a686d2e055d093050d71d2bef3b0("_MersenneTwisterEngine_d085a686d2e055d093050d71d2bef3b0", "", boost::python::no_init);
    class_d085a686d2e055d093050d71d2bef3b0.def("seed", method_pointer_8971e6d525a95ebc8c23f18604694ee2, "");
    class_d085a686d2e055d093050d71d2bef3b0.def("seed", method_pointer_b7db37f98da45e34ae1278c2099f3628, "");
    class_d085a686d2e055d093050d71d2bef3b0.def("min", method_pointer_2117e3ccac985f6488f33521c91ca009, "");
    class_d085a686d2e055d093050d71d2bef3b0.def("max", method_pointer_c12ebcd2954357fda89cc30c150bf015, "");
    class_d085a686d2e055d093050d71d2bef3b0.def("__call__", method_pointer_2d2980bcca665b17ae2c89cf5a2b91da, "");
    class_d085a686d2e055d093050d71d2bef3b0.def("discard", method_pointer_a200ece8d2c452f29e68a9a3ea8969c6, "");
    class_d085a686d2e055d093050d71d2bef3b0.staticmethod("max");
    class_d085a686d2e055d093050d71d2bef3b0.staticmethod("min");
    class_d085a686d2e055d093050d71d2bef3b0.def("__neq__", function_group::function_a27efa11605b5ecab5909f4b3dc84cd7, "");
    class_d085a686d2e055d093050d71d2bef3b0.def("__eq__", function_group::function_83f73d09be20533093635a9717210e05, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("word_size", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::word_size, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("state_size", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::state_size, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("shift_size", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::shift_size, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("mask_bits", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::mask_bits, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("xor_mask", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::xor_mask, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("tempering_u", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::tempering_u, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("tempering_d", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::tempering_d, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("tempering_s", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::tempering_s, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("tempering_b", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::tempering_b, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("tempering_t", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::tempering_t, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("tempering_c", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::tempering_c, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("tempering_l", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::tempering_l, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("initialization_multiplier", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::initialization_multiplier, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("default_seed", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::default_seed, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("parameter_a", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::parameter_a, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("output_u", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::output_u, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("output_s", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::output_s, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("output_b", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::output_b, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("output_t", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::output_t, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("output_c", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::output_c, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("output_l", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::output_l, "");
    class_d085a686d2e055d093050d71d2bef3b0.def_readonly("has_fixed_range", ::boost::random::mersenne_twister_engine< unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253 >::has_fixed_range, "");

}