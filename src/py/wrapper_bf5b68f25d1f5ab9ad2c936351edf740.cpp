#include "_core.h"


namespace autowig
{
}


void wrapper_bf5b68f25d1f5ab9ad2c936351edf740()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_d0ecd6cd3a865446a8d90c471aa257a3)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_nb_parameters;
    double  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_2c40379c66475e45840820e5dddd4293)(double const &) const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::ldf;
    double  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_852d458d7fba5b81b3cae095814406be)(double const &) const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::pdf;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_669da265b4935e44a63e06a9f70d1d32)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::simulate;
    class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & (::statiskit::UnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_0d8af5324a05501896139755d5fc2751)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_values;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::UnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_0ebe11b12f7f5ef8b7669ba36e1ffb55)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_pi;
    void  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_da32903d50325f55b30c32449f71a1ad)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::set_pi;
    boost::python::class_< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistribution >, boost::noncopyable > class_bf5b68f25d1f5ab9ad2c936351edf740("_UnivariateFrequencyDistribution_bf5b68f25d1f5ab9ad2c936351edf740", "", boost::python::no_init);
    class_bf5b68f25d1f5ab9ad2c936351edf740.def("get_nb_parameters", method_pointer_d0ecd6cd3a865446a8d90c471aa257a3, "");
    class_bf5b68f25d1f5ab9ad2c936351edf740.def("ldf", method_pointer_2c40379c66475e45840820e5dddd4293, "");
    class_bf5b68f25d1f5ab9ad2c936351edf740.def("pdf", method_pointer_852d458d7fba5b81b3cae095814406be, "");
    class_bf5b68f25d1f5ab9ad2c936351edf740.def("simulate", method_pointer_669da265b4935e44a63e06a9f70d1d32, "");
    class_bf5b68f25d1f5ab9ad2c936351edf740.def("get_values", method_pointer_0d8af5324a05501896139755d5fc2751, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bf5b68f25d1f5ab9ad2c936351edf740.def("get_pi", method_pointer_0ebe11b12f7f5ef8b7669ba36e1ffb55, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bf5b68f25d1f5ab9ad2c936351edf740.def("set_pi", method_pointer_da32903d50325f55b30c32449f71a1ad, "");

    if(autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::Type >();
    }

}