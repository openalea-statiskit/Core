#include "_core.h"

namespace autowig
{
    typedef ::statiskit::OptimizationEstimation< unsigned int, ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::OptimizationEstimation< unsigned int, ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::Estimator;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  return_type_97c0dcb4b9a55407beb1affee63e5b47;
            virtual return_type_97c0dcb4b9a55407beb1affee63e5b47 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_97c0dcb4b9a55407beb1affee63e5b47, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  return_type_163f6bff094c5658b1290a9b2b3a9d26;
            typedef ::statiskit::UnivariateDistributionEstimation::data_type const & param_163f6bff094c5658b1290a9b2b3a9d26_0_type;
            typedef bool const & param_163f6bff094c5658b1290a9b2b3a9d26_1_type;
            virtual return_type_163f6bff094c5658b1290a9b2b3a9d26 operator()(param_163f6bff094c5658b1290a9b2b3a9d26_0_type param_0, param_163f6bff094c5658b1290a9b2b3a9d26_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_163f6bff094c5658b1290a9b2b3a9d26, class_type, operator(), param_0, param_1); };
            typedef ::uintptr_t  return_type_ed723b56ee6d50838db979e102419f39;
            virtual return_type_ed723b56ee6d50838db979e102419f39 identifier() const override { PYBIND11_OVERLOAD(return_type_ed723b56ee6d50838db979e102419f39, class_type, identifier, ); };
            typedef class ::std::unordered_set< statiskit::Index, struct ::std::hash< statiskit::Index >, struct ::std::equal_to< statiskit::Index >, class ::std::allocator< statiskit::Index > >  return_type_7ba100805cd95f1cba468c9ce84eb72c;
            virtual return_type_7ba100805cd95f1cba468c9ce84eb72c children() const override { PYBIND11_OVERLOAD(return_type_7ba100805cd95f1cba468c9ce84eb72c, class_type, children, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::identifier;
            using class_type::children;
    };
}


namespace autowig {
}

void wrapper_6345fc1b6c0c5953a1ea3e895aa4e75f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > class_6345fc1b6c0c5953a1ea3e895aa4e75f(module, "Estimator", "");
    class_6345fc1b6c0c5953a1ea3e895aa4e75f.def(pybind11::init<  >());

}