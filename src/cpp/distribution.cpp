/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#include "distribution.h"
#include "error.h"
#include "base.h"

namespace statiskit
{
    double UnivariateDistribution::loglikelihood(const UnivariateData& data) const
    {
        double llh = 0.;
        size_t index = 0, max_index = data.size();
        while(index < max_index && boost::math::isfinite(llh))
        { llh += data.get_weight(index) * probability(data.get_event(index), true); }
        return llh;
    }

    double CategoricalUnivariateDistribution::probability(const UnivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if(event)
        {
            if(event->get_outcome() == CATEGORICAL)
            {
                switch(event->get_event())
                {
                    case ELEMENTARY:
                        {
                            const std::string& value = static_cast< const CategoricalElementaryEvent* >(event)->get_value();
                            if(logarithm)
                            { p = ldf(value); }
                            else
                            { p = pdf(value); }
                        }
                        break;
                    case SET:
                        {
                            const std::set< std::string >& values = static_cast< const CategoricalSetCensoredEvent* >(event)->get_values();
                            p = 0.;
                            for(std::set< std::string >::const_iterator it = values.cbegin(), it_end = values.cend(); it != it_end; ++it)
                            { p += pdf(*it); }
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    default:
                        if(logarithm)
                        { p = -1 * std::numeric_limits< double >::infinity(); }
                        else
                        { p = 0; }
                        break;
                }
            }
            else if(logarithm)
            { p = -1 * std::numeric_limits< double >::infinity(); }
            else
            { p = 0; }
        }
        else if(logarithm)
        { p = 0; }
        else
        { p = 1.; }
        return p;
    }

    std::unique_ptr< UnivariateSampleSpace > NominalDistribution::get_sample_space() const
    { return std::make_unique< NominalSampleSpace >(_values); }
    
    std::unique_ptr< UnivariateDistribution > NominalDistribution::copy() const
    { return std::make_unique< NominalDistribution >(*this); }
   
    OrdinalDistribution::OrdinalDistribution(const std::vector< std::string >& values) : UnivariateFrequencyDistribution< CategoricalUnivariateDistribution >(std::set< std::string >(values.cbegin(), values.cend()))
    {
        _rank = std::vector< size_t >(_values.size());
        for(size_t size = 0, max_size = _values.size(); size < max_size; ++size)
        { _rank[distance(_values.begin(), _values.find(values[size]))] = size; }
    }

    OrdinalDistribution::OrdinalDistribution(const std::set< std::string >& values, const std::vector< size_t >& rank, const std::vector< double >& pi) : UnivariateFrequencyDistribution< CategoricalUnivariateDistribution >(values, pi)
    { set_rank(rank); }

    OrdinalDistribution::OrdinalDistribution(const OrdinalDistribution& ordinal) : UnivariateFrequencyDistribution< CategoricalUnivariateDistribution >(ordinal)
    { _rank = ordinal._rank; }

    std::unique_ptr< UnivariateSampleSpace > OrdinalDistribution::get_sample_space() const
    { return std::make_unique< OrdinalSampleSpace >(get_ordered()); }

    double OrdinalDistribution::cdf(const std::string& value) const
    {
        double p = 0.;
        std::set< std::string >::const_iterator it = _values.find(value);
        if(it != _values.cend())
        {
            size_t rank = _rank[distance(_values.cbegin(), it)];
            for(size_t size = 0, max_size = _rank.size(); size < max_size; ++size)
            {
                if(_rank[size] <= rank)
                { p += _pi[size]; }
            }
        }
        return p;
    }

    std::string OrdinalDistribution::quantile(const double& p) const
    {
        std::vector< std::string > ordered = get_ordered();
        size_t size = 0, max_size = ordered.size();
        double _p = pdf(ordered[size]);
        while(_p < p && size + 1 < max_size)
        {
            ++size;
            _p += pdf(ordered[size]);
        }
        if(size >= max_size)
        { --size; }
        return ordered[size];
    }

    const std::vector< size_t >& OrdinalDistribution::get_rank() const
    { return _rank; }

    void OrdinalDistribution::set_rank(const std::vector< size_t >& rank)
    {
        if(rank.size() != _values.size())
        { throw size_error("rank", rank.size(), _values.size()); }
        std::set< size_t > order = std::set< size_t >();
        for(size_t size = 0, max_size = _values.size(); size < max_size; ++size)
        { order.insert(order.end(), size); }
        for(size_t size = 0, max_size = _values.size(); size < max_size; ++size)
        {
            if(rank[size] >= _values.size())
            { throw interval_error("rank", rank[size], 0, _values.size(), std::make_pair(false, true)); }
            std::set< size_t >::iterator it = order.find(rank[size]);
            if(it == order.end())
            { throw duplicated_value_error("rank", rank[size]); }
            order.erase(it);
        }
        _rank = rank;
    }

    std::vector< std::string > OrdinalDistribution::get_ordered() const
    {
        std::vector< std::string > order(_values.size());
        for(std::set< std::string >::const_iterator it = _values.cbegin(), it_end = _values.cend(); it != it_end; ++it)
        { order[_rank[distance(_values.cbegin(), it)]] = *it; }
        return order;
    }

    std::unique_ptr< UnivariateDistribution > OrdinalDistribution::copy() const
    { return std::make_unique< OrdinalDistribution >(*this); }
    
    std::unique_ptr< UnivariateSampleSpace > DiscreteUnivariateDistribution::get_sample_space() const
    { return std::make_unique< IntegerSampleSpace >(); }

    double DiscreteUnivariateDistribution::probability(const UnivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if(event)
        {
            if(event->get_outcome() == DISCRETE)
            {
                switch(event->get_event())
                {
                    case ELEMENTARY:
                        {
                            const int& value = static_cast< const DiscreteElementaryEvent* >(event)->get_value();
                            if(logarithm)
                            { p = ldf(value); }
                            else
                            { p = pdf(value); }
                        }
                        break;
                    case SET:
                        {
                            const std::set< int >& values = static_cast< const DiscreteSetCensoredEvent* >(event)->get_values();
                            p = 0.;
                            for(std::set< int >::const_iterator it = values.cbegin(), it_end = values.cend(); it != it_end; ++it)
                            { p += pdf(*it); }
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    case LEFT:
                        {
                            const int& upper_bound = static_cast< const DiscreteLeftCensoredEvent* >(event)->get_upper_bound();
                            p = cdf(upper_bound);
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    case RIGHT:
                        {
                            const int& lower_bound = static_cast< const DiscreteRightCensoredEvent* >(event)->get_lower_bound();
                            p = 1 - cdf(lower_bound - 1);
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    case INTERVAL:
                        {
                            const std::pair<int, int>& bounds = static_cast< const DiscreteIntervalCensoredEvent* >(event)->get_bounds();
                            p = cdf(bounds.second) - cdf(bounds.first - 1);
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    default:
                        if(logarithm)
                        { p = -1 * std::numeric_limits< double >::infinity(); }
                        else
                        { p = 0; }
                        break;
                }
            }
            else if(logarithm)
            { p = -1 * std::numeric_limits< double >::infinity(); }
            else
            { p = 0; }
        }
        else if(logarithm)
        { p = 0; }
        else
        { p = 1.; }
        return p;
    }

    PoissonDistribution::PoissonDistribution()
    { _theta = 1.; }

    PoissonDistribution::PoissonDistribution(const double& theta)
    {
        if(theta <= 0.)
        { throw lower_bound_error("theta", theta, 0., true); }
        _theta = theta;
    }

    PoissonDistribution::PoissonDistribution(const PoissonDistribution& poisson)
    { _theta = poisson._theta; }

    unsigned int PoissonDistribution::get_nb_parameters() const
    { return 1; }

    const double& PoissonDistribution::get_theta() const
    { return _theta; }

    void PoissonDistribution::set_theta(const double& theta)
    {
        if(theta <= 0.)
        { throw lower_bound_error("theta", theta, 0., true); }
        _theta = theta;
    }

    double PoissonDistribution::ldf(const int& value) const
    {
        double p;
        if(value < 0)
        { p = -1 * std::numeric_limits< double >::infinity(); }
        else
        { p = value * log(_theta) - _theta - boost::math::lgamma(value + 1); }
        return p;
    }
    
    double PoissonDistribution::pdf(const int& value) const
    {
        double p;
        if(value < 0)
        { p = 0; }
        else
        { p = pow(_theta, value) * exp(-_theta) / boost::math::tgamma(value + 1); }
        return p;
    }

    double PoissonDistribution::cdf(const int& value) const
    { return boost::math::gamma_q(value + 1, _theta); }

    int PoissonDistribution::quantile(const double& p) const
    { return boost::math::gamma_q_inva(_theta, p) - 1; }

    double PoissonDistribution::get_mean() const
    { return _theta; }

    double PoissonDistribution::get_variance() const
    { return _theta; }

    std::unique_ptr< UnivariateDistribution > PoissonDistribution::copy() const
    { return std::make_unique< PoissonDistribution >(*this); }

    std::unique_ptr< UnivariateEvent > PoissonDistribution::simulate() const
    {
        boost::poisson_distribution<> dist(_theta);
        boost::variate_generator<boost::mt19937&, boost::poisson_distribution<> > simulator(get_random_generator(), dist);
        return std::make_unique< DiscreteElementaryEvent >(simulator());
    }

    BinomialDistribution::BinomialDistribution()
    {
        _kappa = 1;
        _pi = .5;
    }

    BinomialDistribution::BinomialDistribution(const unsigned int& kappa, const double& pi)
    {
        if(pi < 0 || pi > 1)
        { throw interval_error("pi", pi, 0., 1., std::make_pair(false, false)); }
        _kappa = kappa;
        _pi = pi;
    }

    BinomialDistribution::BinomialDistribution(const BinomialDistribution& binomial)
    {
        _kappa = binomial._kappa;
        _pi = binomial._pi;
    }

    unsigned int BinomialDistribution::get_nb_parameters() const
    { return 2; }

    const unsigned int& BinomialDistribution::get_kappa() const
    { return _kappa; }

    void BinomialDistribution::set_kappa(const unsigned int& kappa)
    { _kappa = kappa; }

    const double& BinomialDistribution::get_pi() const
    { return _pi; }

    void BinomialDistribution::set_pi(const double& pi)
    {
        if(pi < 0 || pi > 1)
        { throw interval_error("pi", pi, 0., 1., std::make_pair(false, false)); }
        _pi = pi;
    }

    double BinomialDistribution::ldf(const int& value) const
    {
        double p;
        if(value < 0 || value > _kappa)
        { p = -1 * std::numeric_limits< double >::infinity(); }
        else
        { p = boost::math::lgamma(_kappa + 1) - boost::math::lgamma(_kappa - value + 1) - boost::math::lgamma(value + 1) + value * log(_pi) + (_kappa - value) * log(1. - _pi); }
        return p;
    }
    
    double BinomialDistribution::pdf(const int& value) const
    {
        double p;
        if(value < 0 || value > _kappa)
        { p = 0; }
        else
        { p = boost::math::ibeta_derivative(value + 1, _kappa - value + 1, _pi) / (_kappa + 1); }
        return p;
    }

    double BinomialDistribution::cdf(const int& value) const
    { return boost::math::ibetac(value + 1, _kappa - value, _pi); }

    int BinomialDistribution::quantile(const double& p) const
    { 
        int value = 0;
        while(cdf(value) < p && value < _kappa)
        { ++value; }
        return value;
    }

    std::unique_ptr< UnivariateEvent > BinomialDistribution::simulate() const
    {
        boost::binomial_distribution<> dist(_kappa, _pi);
        boost::variate_generator<boost::mt19937&, boost::binomial_distribution<> > simulator(get_random_generator(), dist);
        return std::make_unique< DiscreteElementaryEvent >(simulator());
    }

    double BinomialDistribution::get_mean() const
    { return _kappa * _pi; }

    double BinomialDistribution::get_variance() const
    { return _kappa * _pi * (1. - _pi); }

    std::unique_ptr< UnivariateDistribution > BinomialDistribution::copy() const
    { return std::make_unique< BinomialDistribution >(*this); }

    NegativeBinomialDistribution::NegativeBinomialDistribution()
    {
        _kappa = 1.;
        _pi = .5;
    }

    NegativeBinomialDistribution::NegativeBinomialDistribution(const double& kappa, const double& pi)
    {
        if(kappa <= 0.)
        { throw lower_bound_error("kappa", kappa, 0., true); }
        if(pi < 0 || pi > 1)
        { throw interval_error("pi", pi, 0., 1., std::make_pair(false, false)); }
        _kappa = kappa;
        _pi = pi;
    }

    NegativeBinomialDistribution::NegativeBinomialDistribution(const NegativeBinomialDistribution& negbinomial)
    {
        _kappa = negbinomial._kappa;
        _pi = negbinomial._pi;
    }

    unsigned int NegativeBinomialDistribution::get_nb_parameters() const
    { return 2; }

    const double& NegativeBinomialDistribution::get_kappa() const
    { return _kappa; }

    void NegativeBinomialDistribution::set_kappa(const double& kappa)
    {
        if(kappa <= 0.)
        { throw lower_bound_error("kappa", kappa, 0., true); }
        _kappa = kappa;
    }

    const double& NegativeBinomialDistribution::get_pi() const
    { return _pi; }

    void NegativeBinomialDistribution::set_pi(const double& pi)
    {
        if(pi < 0 || pi > 1)
        { throw interval_error("pi", pi, 0., 1., std::make_pair(false, false)); }
        _pi = pi;
    }

    double NegativeBinomialDistribution::ldf(const int& value) const
    {
        double p;
        if(value < 0 || value > _kappa)
        { p = -1 * std::numeric_limits< double >::infinity(); }
        else
        { p = boost::math::lgamma(value + _kappa) - boost::math::lgamma(_kappa) - boost::math::lgamma(value + 1) + value * log(_pi) + _kappa * log(1. - _pi); }
        return p;
    }
    
    double NegativeBinomialDistribution::pdf(const int& value) const
    {
        double p;
        if(value < 0 || value > _kappa)
        { p = 0; }
        else
        { p = exp(ldf(value)); /*boost::math::ibeta_derivative(value + 1, _kappa - value + 1, _pi) / (_kappa + 1);*/ }
        return p;
    }

    double NegativeBinomialDistribution::cdf(const int& value) const
    { return boost::math::ibeta(_kappa, value + 1, 1. - _pi); }

    int NegativeBinomialDistribution::quantile(const double& p) const
    { return boost::math::ibeta_invb(_kappa, 1. - _pi, p) - 1; }

    double NegativeBinomialDistribution::get_mean() const
    { return _kappa * _pi / (1 - _pi); }

    double NegativeBinomialDistribution::get_variance() const
    { return _kappa * _pi / pow(1. - _pi, 2); }

    std::unique_ptr< UnivariateEvent > NegativeBinomialDistribution::simulate() const
    { return std::make_unique< ElementaryEvent< DiscreteEvent > >(quantile(boost::uniform_01<boost::mt19937&>(get_random_generator())())); }

    std::unique_ptr< UnivariateDistribution > NegativeBinomialDistribution::copy() const
    { return std::make_unique< NegativeBinomialDistribution >(*this); }

    std::unique_ptr< UnivariateSampleSpace > ContinuousUnivariateDistribution::get_sample_space() const
    { return std::make_unique< RealSampleSpace >(); }
        
    double ContinuousUnivariateDistribution::probability(const UnivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if(event)
        {
            if(event->get_outcome() == CONTINUOUS)
            {
                switch(event->get_event())
                {
                    case ELEMENTARY:
                        {
                            const double& value = static_cast< const ContinuousElementaryEvent* >(event)->get_value();
                            if(logarithm)
                            { p = ldf(value); }
                            else
                            { p = pdf(value); }
                        }
                        break;
                    case SET:
                        {
                            const std::set< double >& values = static_cast< const ContinuousSetCensoredEvent* >(event)->get_values();
                            p = 0.;
                            for(std::set< double >::const_iterator it = values.cbegin(), it_end = values.cend(); it != it_end; ++it)
                            { p += pdf(*it); }
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    case LEFT:
                        {
                            const double& upper_bound = static_cast< const ContinuousLeftCensoredEvent* >(event)->get_upper_bound();
                            p = cdf(upper_bound);
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    case RIGHT:
                        {
                            const double& lower_bound = static_cast< const ContinuousRightCensoredEvent* >(event)->get_lower_bound();
                            p = 1 - cdf(lower_bound);
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    case INTERVAL:
                        {
                            const std::pair<double, double>& bounds = static_cast< const ContinuousIntervalCensoredEvent* >(event)->get_bounds();
                            p = cdf(bounds.second) - cdf(bounds.first);
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    default:
                        if(logarithm)
                        { p = -1 * std::numeric_limits< double >::infinity(); }
                        else
                        { p = 0; }
                        break;
                }
            }
            else if(logarithm)
            { p = -1 * std::numeric_limits< double >::infinity(); }
            else
            { p = 0; }
        }
        else if(logarithm)
        { p = 0; }
        else
        { p = 1.; }
        return p;
    }

    NormalDistribution::NormalDistribution() 
    {
        _mu = 0.;
        _sigma = 1.;
    }

    NormalDistribution::NormalDistribution(const double& mu, const double& sigma) 
    {
        _mu = mu;
        _sigma = sigma;
    }

    NormalDistribution::NormalDistribution(const NormalDistribution& normal)
    {
        _mu = normal._mu;
        _sigma = normal._sigma;
    }

    unsigned int NormalDistribution::get_nb_parameters() const
    { return 2; }

    const double& NormalDistribution::get_mu() const
    { return _mu; }

    void NormalDistribution::set_mu(const double& mu)
    { 
        throw parameter_error("mu", "always");
        _mu = mu;
    }

    const double& NormalDistribution::get_sigma() const
    { return _sigma; }

    void NormalDistribution::set_sigma(const double& sigma)
    {
        if(sigma <= 0.)
        { throw lower_bound_error("sigma", sigma, 0., true); }
        _sigma = sigma;
    }

    double NormalDistribution::ldf(const double& value) const
    { return -pow((value - _mu) / _sigma, 2) / 2. - log(_sigma)  - log(boost::math::constants::root_two_pi<double>()); }

    double NormalDistribution::pdf(const double& value) const
    { return exp(ldf(value)); }

    double NormalDistribution::cdf(const double& value) const
    { return 0.5 * erfc( (_mu - value) / (_sigma * boost::math::constants::root_two<double>()  )); }

    double NormalDistribution::quantile(const double& p) const
    { return _mu - _sigma * boost::math::constants::root_two<double>() * boost::math::erfc_inv(2 * p); }

    std::unique_ptr< UnivariateEvent > NormalDistribution::simulate() const
    {
        boost::normal_distribution<> dist(_mu, _sigma);
        boost::variate_generator<boost::mt19937&, boost::normal_distribution<> > simulator(get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(simulator());
    }

    double NormalDistribution::get_mean() const
    { return _mu; }

    double NormalDistribution::get_variance() const
    { return pow(_sigma, 2); }
    
    std::unique_ptr< UnivariateDistribution > NormalDistribution::copy() const
    { return std::make_unique< NormalDistribution >(*this); }

    UnivariateHistogramDistribution::UnivariateHistogramDistribution(const std::set<double>& bins, const std::vector<double>& densities)
    {
        assert(bins.size() > 1);
        assert(bins.size() == densities.size()+1);
        _bins = bins;
        _densities = densities;
        normalize();
    }

    UnivariateHistogramDistribution::UnivariateHistogramDistribution(const UnivariateHistogramDistribution& histogram)
    {
        _bins = histogram._bins;
        _densities = histogram._densities;
    }

    UnivariateHistogramDistribution::~UnivariateHistogramDistribution()
    {}

    //std::shared_ptr< UnivariateSampleSpace > UnivariateHistogramDistribution::get_sample_space() const
    //{ return std::make_unique< RealSampleSpace >(*(_bins.cbegin()), *(_bins.crbegin()), true, true); }

    unsigned int UnivariateHistogramDistribution::get_nb_parameters() const
    { return _densities.size(); }

    const std::set<double>& UnivariateHistogramDistribution::get_bins() const
    { return _bins; }

    const std::vector<double>& UnivariateHistogramDistribution::get_densities() const
    { return _densities; }

    /*double UnivariateHistogramDistribution::get_bin(const event_type& event) const
    { 
        double bin;
        if(boost::get<double>(event) < *(bins.begin()))
        { bin = -1*INFINITY; }
        else if(boost::get<double>(event) > *(bins.rbegin()))
        { bin = INFINITY ; }
        else
        {
            std::set<double>::const_iterator it = bins.upper_bound(boost::get<double>(event));
            if(it == bins.end())
            { --it; }
            --it;
            bin = *it;
        }
        return bin;
    }*/

    double UnivariateHistogramDistribution::ldf(const double& value) const
    { return log(pdf(value)); }

    double UnivariateHistogramDistribution::pdf(const double& value) const
    {
        double p;
        if(value > *(_bins.rbegin()) || value < *(_bins.begin()))
        { p = 0; }
        else
        {
            std::set<double>::const_iterator it = _bins.upper_bound(value);
            if(it == _bins.end())
            { p = _densities.back(); }
            else
            {
                --it;
                p = _densities[distance(_bins.begin(), it)];
            }
        }
        return p;
    }

    double UnivariateHistogramDistribution::cdf(const double& value) const
    {
        double cp;
        if(value <= (*_bins.begin()))
        { cp = 0.; }
        else
        {
            cp = 0.;
            std::set<double>::const_iterator it = _bins.upper_bound(value);
            std::set<double>::const_iterator itl = _bins.begin(), itu;
            itu = itl;
            ++itu;
            while(itu != it)
            {
                cp += _densities[distance(_bins.begin(), itl)] * (*itu - *itl);
                ++itl;
                ++itu;
            }
            cp += (value - *itl) * _densities[distance(_bins.begin(), itl)];
        }
        return std::min(cp, 1.);
    }

    double UnivariateHistogramDistribution::quantile(const double& p) const
    {
        double q;
        if(p >= 1.)
        { q = *(_bins.rbegin()); }
        else if (p <= 0.)
        { q = *(_bins.begin()); }
        else
        {
            std::set<double>::const_iterator itl = _bins.begin(), itu;
            itu = itl;
            ++itu;
            double cum = 0;
            while(distance(_bins.begin(), itl) < _densities.size() && cum < p)
            {
                cum += _densities[distance(_bins.begin(), itl)] * (*itu - *itl);
                if(cum < p)
                {
                    ++itl;
                    ++itu;
                }
            }
            if(distance(_bins.begin(), itl) == _densities.size())
            { q = (*_bins.rbegin()); }
            else
            {
                cum -= _densities[distance(_bins.begin(), itl)] * (*itu - *itl);
                q = *itl + (p - cum) / _densities[distance(_bins.begin(), itl)];
            }
        }
        return q;
    }

    std::unique_ptr< UnivariateEvent > UnivariateHistogramDistribution::simulate() const
    { return std::make_unique< ContinuousElementaryEvent >(quantile(boost::uniform_01<boost::mt19937&>(get_random_generator())())); }

    double UnivariateHistogramDistribution::get_mean() const
    {
        double mean = 0.;
        std::set<double>::const_iterator itl = _bins.begin(), itu;
        itu = itl;
        ++itl;
        while(itu != _bins.end())
        {
            mean += (*itl + (*itu - *itl) / 2.) * _densities[distance(_bins.begin(), itl)];
            ++itl;
            ++itu;
        }
        return mean;
    }

    double UnivariateHistogramDistribution::get_variance() const
    {
        double mean = get_mean(), variance = 0.;
        std::set<double>::const_iterator itl = _bins.begin(), itu;
        itu = itl;
        ++itl;
        while(itu != _bins.end())
        {
            variance += pow((*itl + (*itu - *itl) / 2.) - mean, 2) * _densities[distance(_bins.begin(), itl)];
            ++itl;
            ++itu;
        }
        return variance;
    }

    std::unique_ptr< UnivariateDistribution > UnivariateHistogramDistribution::copy() const
    { return std::make_unique< UnivariateHistogramDistribution >(*this); }

    void UnivariateHistogramDistribution::normalize()
    {
        double sum = 0.;
        std::set<double>::const_iterator itl = _bins.begin(), itu;
        itu = itl;
        ++itu;
        while(itu != _bins.end())
        { 
            sum += (*itu - *itl) * _densities[distance(_bins.begin(), itl)];
            ++itl;
            ++itu;
        }
        if(sum != 1.)
        { 
            for(unsigned int i = 0; i < _densities.size(); ++i)
            { _densities[i] /= sum; }
        }
    }

    LogisticDistribution::LogisticDistribution() 
    {
        _mu = 0;
        _scale = 1.;
    }

    LogisticDistribution::LogisticDistribution(const double& mu, const double& scale) 
    {
        _mu = mu;
        _scale = scale;
    }

    LogisticDistribution::LogisticDistribution(const LogisticDistribution& logistic)
    {
        _mu = logistic._mu;
        _scale = logistic._scale;
    }

    unsigned int LogisticDistribution::get_nb_parameters() const
    { return 2; }

    const double& LogisticDistribution::get_mu() const
    { return _mu; }

    void LogisticDistribution::set_mu(const double& mu)
    { _mu = mu; }

    const double& LogisticDistribution::get_scale() const
    { return _scale; }

    void LogisticDistribution::set_scale(const double& scale)
    {
        if(scale <= 0.)
        { throw lower_bound_error("scale", scale, 0., true); }
        _scale = scale;
    }

    double LogisticDistribution::ldf(const double& value) const
    { return -2*log(cosh(0.5 * (value - _mu) / _scale)) - log(4 * _scale); }//(_mu-value)/_scale - log(scale) - 2*log(1+exp((_mu-value)/_scale )); }

    double LogisticDistribution::pdf(const double& value) const
    { return  4. * _scale/ pow(cosh(0.5 * (value - _mu) / _scale), 2); }

    double LogisticDistribution::cdf(const double& value) const
    { return 0.5 * (1 + tanh(0.5 * (value - _mu) / _scale)); }

    double LogisticDistribution::quantile(const double& p) const
    { return _mu + _scale * log(p / (1 - p)); }

    std::unique_ptr< UnivariateEvent > LogisticDistribution::simulate() const
    {       
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(quantile(simulator()));
    }

    double LogisticDistribution::get_mean() const
    { return _mu; }

    double LogisticDistribution::get_variance() const
    { return pow(_scale, 2); }

    std::unique_ptr< UnivariateDistribution > LogisticDistribution::copy() const
    { return std::make_unique< LogisticDistribution >(*this); }

    /*NormalRegression::NormalRegression(const std::shared_ptr< ScalarPredictor >& predictor, const double& sigma)// : NormalDistribution(std::numeric_limits< double >::quiet_NaN(), sigma)
    {
        _mu = std::numeric_limits< double >::quiet_NaN();
        _sigma = sigma;
        _predictor = predictor; 
    }

    NormalRegression::~NormalRegression()
    {}

    NormalRegression::NormalRegression(const NormalRegression& normal) : NormalDistribution(normal)
    { _predictor = normal._predictor; }

    void NormalRegression::conditioning(const MultivariateEvent& event)
    { _mu = (*_predictor)(event); }
    
    const std::shared_ptr< ScalarPredictor >& NormalRegression::get_predictor() const
    { return _predictor; }*/
}
