#include "estimation.h"

namespace statiskit
{
    sample_space_error::sample_space_error(const outcome_type& expected) : parameter_error("data", "expected " + __impl::to_string(expected) + " outcome")
    {}

    sample_size_error::sample_size_error(const unsigned int& minsize) : parameter_error("data", "must contains at least " + __impl::to_string(minsize) + " different observations")
    {}

    overdispersion_error::overdispersion_error() : parameter_error("data", " is overdispersed")
    {}

    underdispersion_error::underdispersion_error() : parameter_error("data", " is underdispersed")
    {}

    UnivariateDistributionEstimation::~UnivariateDistributionEstimation()
    {}

    UnivariateDistributionEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< UnivariateDistributionEstimation > UnivariateDistributionEstimation::Estimator::operator() (const MultivariateData& data, const Index& index) const
    { 
        std::unique_ptr< UnivariateData > _data = data.extract(index);
        return this->operator() (*_data);
    }

    MultivariateDistributionEstimation::~MultivariateDistributionEstimation()
    {}

    MultivariateDistributionEstimation::Estimator::~Estimator()
    {}
}
