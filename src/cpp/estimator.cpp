/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#include "estimator.h"

namespace statiskit
{
    sample_size_error::sample_size_error(const std::string& parameter, const unsigned int& minsize) : parameter_error(parameter, "must contains at least " + to_string(minsize) + " different observations")
    {}

    CategoricalUnivariateDistributionEstimation::Estimator::Estimator()
    {}

    CategoricalUnivariateDistributionEstimation::Estimator::Estimator(const Estimator& estimator)
    {}

    CategoricalUnivariateDistributionEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< UnivariateDistributionEstimation > CategoricalUnivariateDistributionEstimation::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
    {
        if(data.get_sample_space()->get_outcome() != CATEGORICAL)
        { throw statiskit::sample_space_error("data", CATEGORICAL); }
        std::unique_ptr< UnivariateDistributionEstimation > estimation;
        std::set< std::string > values;
        double total = data.compute_total();
        if(total > 0. && boost::math::isfinite(total))
        {
            const CategoricalSampleSpace* sample_space = static_cast< const CategoricalSampleSpace* >(data.get_sample_space());
            values = sample_space->get_values();
            Eigen::VectorXd masses = Eigen::VectorXd::Zero(values.size());
            std::unique_ptr< UnivariateData::Generator > generator = data.generator();
            while(generator->is_valid())
            {
                auto event = generator->event();
                if(event)
                {
                    if(event->get_event() == ELEMENTARY)
                    {
                        std::set< std::string >::iterator it = values.find(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                        masses[distance(values.begin(), it)] += generator->weight() / total;
                    }
                }
                ++(*generator);
            }
            CategoricalUnivariateDistribution* distribution;
            switch(sample_space->get_ordering())
            {
                case NONE:
                case PARTIAL:
                    distribution = new NominalDistribution(values, masses);
                    break;
                case TOTAL:
                    distribution = new OrdinalDistribution(values, static_cast< const OrdinalSampleSpace* >(sample_space)->get_rank(), masses);
                    break;
            }
            if(lazy)
            { estimation = std::make_unique< CategoricalUnivariateDistributionLazyEstimation >(distribution); }
            else
            { estimation = std::make_unique< CategoricalUnivariateDistributionActiveEstimation >(distribution, data); }
        }
        return estimation;
    }

    std::unique_ptr< UnivariateDistributionEstimation::Estimator > CategoricalUnivariateDistributionEstimation::Estimator::copy() const
    { return std::make_unique< Estimator >(*this); }

    PoissonDistributionMLEstimation::Estimator::Estimator()
    {}

    PoissonDistributionMLEstimation::Estimator::Estimator(const Estimator& estimator)
    {}

    PoissonDistributionMLEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< UnivariateDistributionEstimation > PoissonDistributionMLEstimation::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
    {
        if(data.get_sample_space()->get_outcome() != DISCRETE)
        { throw statiskit::sample_space_error("data", DISCRETE); }
        std::unique_ptr< UnivariateDistributionEstimation > estimation; 
        NaturalMeanEstimation::Estimator estimator = NaturalMeanEstimation::Estimator();
        std::unique_ptr< MeanEstimation > _estimation = estimator(data);
        double mean = _estimation->get_mean(); 
        if(boost::math::isfinite(mean))
        {
            PoissonDistribution* poisson = new PoissonDistribution(mean);
            if(lazy)
            { estimation = std::make_unique< LazyEstimation< PoissonDistribution, DiscreteUnivariateDistributionEstimation > >(poisson); }
            else
            { estimation = std::make_unique< PoissonDistributionMLEstimation >(poisson, data); }
        }
        return estimation;
    }

    std::unique_ptr< UnivariateDistributionEstimation::Estimator > PoissonDistributionMLEstimation::Estimator::copy() const
    { return std::make_unique< Estimator >(*this); }

    BinomialDistributionMLEstimation::Estimator::~Estimator()
    {}

    std::unique_ptr< UnivariateDistributionEstimation > BinomialDistributionMLEstimation::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
    {
        if(data.get_sample_space()->get_outcome() != DISCRETE)
        { throw statiskit::sample_space_error("data", DISCRETE); }
        std::unique_ptr< UnivariateDistributionEstimation > estimation;
        NaturalMeanEstimation::Estimator mean_estimator = NaturalMeanEstimation::Estimator();
        std::unique_ptr< MeanEstimation > mean_estimation = mean_estimator(data);
        double mean = mean_estimation->get_mean();
        NaturalVarianceEstimation::Estimator variance_estimator = NaturalVarianceEstimation::Estimator(false);
        std::unique_ptr< VarianceEstimation > variance_estimation = variance_estimator(data, mean);
        double variance = variance_estimation->get_variance(); 
        unsigned int kappa = std::max<int>(round(pow(mean, 2)/(mean - variance)), static_cast< DiscreteElementaryEvent* >(data.compute_maximum().get())->get_value());
        BinomialDistribution* binomial = new BinomialDistribution(kappa, mean/double(kappa));
        if(!lazy)
        {
            estimation = std::make_unique< BinomialDistributionMLEstimation >(binomial, data);
            std::static_pointer_cast< BinomialDistributionMLEstimation >(estimation)._steps.push_back(kappa);
        }
        else
        { estimation = std::make_unique< LazyEstimation< BinomialDistribution, DiscreteUnivariateDistributionEstimation > >(binomial); }
        double curr, prev = binomial->loglikelihood(*data);
        unsigned int its = 1;
        --kappa;
        if(!lazy)
        { std::static_pointer_cast< BinomialDistributionMLEstimation >(estimation)._steps.push_back(kappa); }
        binomial->set_kappa(kappa);
        binomial->set_pi(mean/double(kappa));
        curr = binomial->loglikelihood(*data);
        if(curr > prev)
        {
            do
            {
                prev = curr;
                --kappa;
                if(!lazy)
                { std::static_pointer_cast< BinomialDistributionMLEstimation >(estimation)._steps.push_back(kappa); }
                binomial->set_kappa(kappa);
                binomial->set_pi(mean/double(kappa));
                curr = binomial->loglikelihood(*data);
                ++its;
            } while(run(its, prev, curr) && curr > prev);
            if(curr < prev)
            {
                ++kappa;
                if(!lazy)
                { std::static_pointer_cast< BinomialDistributionMLEstimation >(estimation)._steps.push_back(kappa); }
                binomial->set_kappa(kappa);
                binomial->set_pi(mean/double(kappa));
            }
        }
        else
        {
            ++kappa;
            curr = prev;
            do
            {
                prev = curr;
                ++kappa;
                if(!lazy)
                { std::static_pointer_cast< BinomialDistributionMLEstimation >(estimation)._steps.push_back(kappa); }
                binomial->set_kappa(kappa);
                binomial->set_pi(mean/double(kappa));
                curr = binomial->loglikelihood(*data);
                ++its;
            } while(run(its, prev, curr) && curr > prev);
            if(curr < prev)
            {
                --kappa;
                if(!lazy)
                { std::static_pointer_cast< BinomialDistributionMLEstimation >(estimation)._steps.push_back(kappa); }
                binomial->set_kappa(kappa);
                binomial->set_pi(mean/double(kappa));
            }
        }

        return estimation;
    }

    std::unique_ptr< UnivariateDistributionEstimation::Estimator > BinomialDistributionMLEstimation::Estimator::copy() const
    { return std::make_unique< Estimator >(*this); }

    BinomialDistributionMMEstimation::Estimator::Estimator()
    {
        _mean = new NaturalMeanEstimation::Estimator();
        _variance = new NaturalVarianceEstimation::Estimator(false);
    }

    BinomialDistributionMMEstimation::Estimator::Estimator(const Estimator& estimator)
    {
        _mean = estimator._mean->copy().release();
        _variance = estimator._variance->copy().release();
    }

    BinomialDistributionMMEstimation::Estimator::~Estimator()
    {
        delete _mean;
        delete _variance;
    }

    std::unique_ptr< UnivariateDistributionEstimation > BinomialDistributionMMEstimation::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
    {
        if(data.get_sample_space()->get_outcome() != DISCRETE)
        { throw statiskit::sample_space_error("data", DISCRETE); }
        std::unique_ptr< UnivariateDistributionEstimation > estimation; 
        std::unique_ptr< MeanEstimation > mean_estimation = (*_mean)(data);
        double mean = mean_estimation->get_mean(); 
        std::unique_ptr< VarianceEstimation > variance_estimation = (*_variance)(data, mean);
        double variance = variance_estimation->get_variance(); 
        if(boost::math::isfinite(mean) && boost::math::isfinite(variance) && mean > variance)
        {
            unsigned int kappa = std::max<int>(round(pow(mean, 2)/(mean - variance)), static_cast< DiscreteElementaryEvent* >(data.compute_maximum().get())->get_value());
            BinomialDistribution* binomial = new BinomialDistribution(kappa, mean/double(kappa));
            if(lazy)
            { estimation = std::make_unique< LazyEstimation< BinomialDistribution, DiscreteUnivariateDistributionEstimation > >(binomial); }
            else
            { estimation = std::make_unique< BinomialDistributionMMEstimation >(binomial, data); }
        }
        return estimation;
    }

    std::unique_ptr< UnivariateDistributionEstimation::Estimator > BinomialDistributionMMEstimation::Estimator::copy() const
    { return std::make_unique< Estimator >(*this); }

    const MeanEstimation::Estimator* BinomialDistributionMMEstimation::Estimator::get_mean() const
    { return _mean; }

    void BinomialDistributionMMEstimation::Estimator::set_mean(const MeanEstimation::Estimator& mean)
    { _mean = mean.copy().release(); }

    const VarianceEstimation::Estimator* BinomialDistributionMMEstimation::Estimator::get_variance() const
    { return _variance; }

    void BinomialDistributionMMEstimation::Estimator::set_variance(const VarianceEstimation::Estimator& variance)
    { _variance = variance.copy().release(); }

    NegativeBinomialDistributionMLEstimation::Estimator::~Estimator()
    { }

    std::unique_ptr< UnivariateDistributionEstimation > NegativeBinomialDistributionMLEstimation::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
    {
        if(data.get_sample_space()->get_outcome() != DISCRETE)
        { throw statiskit::sample_space_error("data", DISCRETE); }
        std::unique_ptr< UnivariateDistributionEstimation > estimation;
        NaturalMeanEstimation::Estimator mean_estimator = NaturalMeanEstimation::Estimator();
        std::unique_ptr< MeanEstimation > mean_estimation = mean_estimator(data);
        double mean = mean_estimation->get_mean();
        NaturalVarianceEstimation::Estimator variance_estimator = NaturalVarianceEstimation::Estimator(false);
        std::unique_ptr< VarianceEstimation > variance_estimation = variance_estimator(data, mean);
        double variance = variance_estimation->get_variance();
        double total = data.compute_total(), kappa;
        if(variance > mean)
        { kappa = pow(mean, 2)/(variance - mean); }
        else
        { kappa = 1.; }
        NegativeBinomialDistribution* negative_binomial = new NegativeBinomialDistribution(kappa, mean / (mean + kappa));
        if(!lazy)
        {
            estimation = std::make_unique< NegativeBinomialDistributionMLEstimation >(negative_binomial, data);
            std::static_pointer_cast< NegativeBinomialDistributionMLEstimation >(estimation)._steps.push_back(kappa);
        }
        else
        { estimation = std::make_unique< LazyEstimation< NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation > >(negative_binomial); }
        double prev, curr = negative_binomial->loglikelihood(*data);
        unsigned int its = 1;
        do
        {
            prev = curr;
            double alpha = 0;
            std::unique_ptr< UnivariateData::Generator > generator = data.generator();
            while(generator->is_valid())
            {
                const UnivariateEvent* event = generator->event();
                if(event && event->get_event() == ELEMENTARY)
                {
                    for(int nu = 0, max_nu = static_cast< const DiscreteElementaryEvent* >(event)->get_value(); nu < max_nu; ++nu)
                    { alpha += nu/(nu + kappa); }
                }
                ++(*generator);
            }
            alpha /= -total;
            alpha += mean;
            kappa = log(1 + mean/kappa)/alpha;
            if(!lazy)
            { std::static_pointer_cast< NegativeBinomialDistributionMLEstimation >(estimation)._steps.push_back(kappa); }
            negative_binomial->set_kappa(kappa);
            negative_binomial->set_pi(mean/(mean + kappa));
            curr = negative_binomial->loglikelihood(*data);
            ++its;
        } while(run(iteration, prev, curr));
        return estimation;
    }

    std::unique_ptr< UnivariateDistributionEstimation::Estimator > NegativeBinomialDistributionMLEstimation::Estimator::copy() const
    { return std::make_unique< Estimator >(*this); }

    NegativeBinomialDistributionMMEstimation::Estimator::Estimator()
    {
        _mean = new NaturalMeanEstimation::Estimator();
        _variance = new NaturalVarianceEstimation::Estimator(false);
    }

    NegativeBinomialDistributionMMEstimation::Estimator::Estimator(const Estimator& estimator)
    {
        _mean = estimator._mean->copy().release();
        _variance = estimator._variance->copy().release();
    }

    NegativeBinomialDistributionMMEstimation::Estimator::~Estimator()
    {
        delete _mean;
        delete _variance;
    }

    std::unique_ptr< UnivariateDistributionEstimation > NegativeBinomialDistributionMMEstimation::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
    {
        if(data.get_sample_space()->get_outcome() != DISCRETE)
        { throw statiskit::sample_space_error("data", DISCRETE); }
        std::unique_ptr< UnivariateDistributionEstimation > estimation; 
        std::unique_ptr< MeanEstimation > mean_estimation = (*_mean)(data);
        double mean = mean_estimation->get_mean(); 
        std::unique_ptr< VarianceEstimation > variance_estimation = (*_variance)(data, mean);
        double variance = variance_estimation->get_variance(); 
        if(boost::math::isfinite(mean) && boost::math::isfinite(variance) && variance > mean)
        {
            auto negbinomial = std::make_unique< NegativeBinomialDistribution >(pow(mean, 2)/(variance - mean), 1. - mean/variance);
            if(lazy)
            { estimation = std::make_unique< LazyEstimation< NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation > >(negbinomial); }
            else
            { estimation = std::make_unique< NegativeBinomialDistributionMMEstimation >(negbinomial, data); }
        }
        return estimation;
    }

    const MeanEstimation::Estimator* NegativeBinomialDistributionMMEstimation::Estimator::get_mean() const
    { return _mean; }

    void NegativeBinomialDistributionMMEstimation::Estimator::set_mean(const MeanEstimation::Estimator& mean)
    { _mean = mean.copy().release(); }

    const VarianceEstimation::Estimator* NegativeBinomialDistributionMMEstimation::Estimator::get_variance() const
    { return _variance; }

    void NegativeBinomialDistributionMMEstimation::Estimator::set_variance(const VarianceEstimation::Estimator& variance)
    { _variance = variance.copy().release(); }

    std::unique_ptr< UnivariateDistributionEstimation > NormalDistributionMLEstimation::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
    {
        if(data.get_sample_space()->get_outcome() != CONTINUOUS)
        { throw statiskit::sample_space_error("data", CONTINUOUS); }
        std::unique_ptr< UnivariateDistributionEstimation > estimation;
        NaturalMeanEstimation::Estimator mean_estimator = NaturalMeanEstimation::Estimator();
        std::unique_ptr< MeanEstimation > mean_estimation = mean_estimator(data);
        double mean = mean_estimation->get_mean(); 
        NaturalVarianceEstimation::Estimator variance_estimator = NaturalVarianceEstimation::Estimator(false);
        std::unique_ptr< VarianceEstimation > variance_estimation = variance_estimator(data, mean);
        double std_err = sqrt(variance_estimation->get_variance()); 
        if(boost::math::isfinite(mean) && boost::math::isfinite(std_err))
        {
            auto normal = std::make_unique< NormalDistribution >(mean, std_err);
            if(lazy)
            { estimation = std::make_unique< LazyEstimation< NormalDistribution, ContinuousUnivariateDistributionEstimation > >(normal); }
            else
            { estimation = std::make_unique< NormalDistributionMLEstimation >(normal, data); }
        }
        return estimation;
    }

    UnivariateHistogramDistributionEstimation::Estimator::Estimator()
    { _nb_bins = 0; }

    UnivariateHistogramDistributionEstimation::Estimator::Estimator(const Estimator& estimator)
    { _nb_bins = estimator._nb_bins; }

    std::unique_ptr< UnivariateDistributionEstimation > UnivariateHistogramDistributionEstimation::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
    {
        if(data.get_sample_space()->get_outcome() != CONTINUOUS)
        { throw statiskit::sample_space_error("data", CONTINUOUS); }
        std::unique_ptr< UnivariateDistributionEstimation > estimation;
        auto bins = std::set< double >();
        double total = 0., min = std::numeric_limits< double >::infinity(), max = -1 * std::numeric_limits< double >::infinity();
        std::unique_ptr< UnivariateData::Generator > generator = data.generator();
        double nb_bins = 0;
        while(generator->is_valid())
        {
            auto event = generator->event();
            if(event && event->get_event() == ELEMENTARY)
            {
                auto cevent = static_cast< const ContinuousElementaryEvent* >(event);
                min = std::min(min, cevent->get_value());
                max = std::max(max, cevent->get_value());
                total += generator->weight(); 
                nb_bins += 1;                           
            }
            ++(*generator);
        }
        if(_nb_bins != 0)
        { nb_bins = _nb_bins; }
        bins.insert(min - .5 / total * (max - min));
        for(size_t index = 1; index < nb_bins; ++index)
        { bins.insert(*(bins.rbegin()) + 1. / nb_bins * (max-min)); }
        bins.insert(max + .5 / nb_bins * (max - min));
        if(bins.size() > 1)
        {
            auto lengths = std::vector< double >(bins.size()-1, 0.);
            std::set< double >::iterator itl = bins.begin(), itr, it_end = bins.end();
            itr = itl;
            ++itr;
            while(itr != it_end)
            {
                lengths[distance(bins.begin(), itl)] = *itr - *itl;
                ++itl;
                ++itr;
            }
            auto densities = std::vector< double >(bins.size()-1, 0.);
            std::set< double >::iterator it;
            generator = data.generator();
            while(generator->is_valid())
            {
                auto event = generator->event();
                if(event)
                {
                    if(event->get_event() == ELEMENTARY)
                    {
                        it = bins.upper_bound(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                        if(it == bins.end())
                        { densities.back() += generator->weight() / (lengths.back() * total); }
                        else if(it == bins.begin())
                        { densities.front() += generator->weight() / (lengths.front() * total); }
                        else
                        { densities[distance(bins.begin(), it) - 1] += generator->weight() /(lengths[distance(bins.begin(), it) - 1] * total); }
                    }
                }
                ++(*generator);
            }
            auto histogram = std::make_unique< UnivariateHistogramDistribution >(bins, densities);
            if(lazy)
            { estimation = std::make_unique< LazyEstimation< UnivariateHistogramDistribution, ContinuousUnivariateDistributionEstimation > >(histogram); }
            else
            { estimation = std::make_unique< UnivariateHistogramDistributionEstimation >(histogram, data); }
        }
        return estimation;
    }

    std::unique_ptr< UnivariateDistributionEstimation::Estimator > UnivariateHistogramDistributionEstimation::Estimator::copy() const
    { return std::make_unique< Estimator >(*this); }

    const unsigned int& UnivariateHistogramDistributionEstimation::Estimator::get_nb_bins() const
    { return _nb_bins; }

    void UnivariateHistogramDistributionEstimation::Estimator::set_nb_bins(const unsigned int& nb_bins)
    { _nb_bins = nb_bins; }

    std::unique_ptr< UnivariateDistribution > RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::get_estimated() const
    {
        std::unique_ptr< UnivariateDistribution > estimated;
        if(_selected.size() > 0)
        { estimated = _models[_selected[(*_selector)(*this)]]; }
        return estimated;
    }

    RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::Estimator()
    { _max_bins = 100; }

    RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::Estimator(const Estimator& estimator)
    { _max_bins = estimator._max_bins; }

    std::unique_ptr< UnivariateDistributionEstimation > RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
    {
        if(data.get_sample_space()->get_outcome() != CONTINUOUS)
        { throw statiskit::sample_space_error("data", CONTINUOUS); }
        auto cache = std::make_unique< RegularUnivariateHistogramDistributionSlopeHeuristicEstimation >();
        auto bins = std::set< double >();
        auto estimator = UnivariateHistogramDistributionEstimation::Estimator();
        for(size_t nb_bins = _max_bins; nb_bins > 0; --nb_bins)
        {
            estimator.set_nb_bins(nb_bins);
            auto estimation = estimator(data, false);
            if(estimation)
            {
                auto estimated = std::static_pointer_cast< UnivariateHistogramDistribution >(estimation->get_estimated());
                cache->add(estimated->get_nb_parameters(), estimated->loglikelihood(*data), estimated);
            }
            cache->finalize();
        }
        std::unique_ptr< UnivariateDistributionEstimation > estimation;
        if(lazy)
        { estimation = std::make_unique< LazyEstimation< UnivariateHistogramDistribution, ContinuousUnivariateDistributionEstimation > >(std::static_pointer_cast< UnivariateHistogramDistribution >(cache->get_estimated())); }
        else
        { estimation = cache; }
        return estimation;
    }

    std::unique_ptr< UnivariateDistributionEstimation::Estimator > RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::copy() const
    { return std::make_unique< Estimator >(*this); }

    const unsigned int& RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::get_max_bins() const
    { return _max_bins; }

    void RegularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::set_max_bins(const unsigned int& max_bins)
    {
        if(max_bins == 0)
        { throw statiskit::lower_bound_error("max_bins", 0, 0, true); }
        _max_bins = max_bins;
    }
    
    std::unique_ptr< UnivariateDistribution > IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::get_estimated() const
    {
        std::unique_ptr< UnivariateDistribution > estimated;
        if(_selected.size() > 0)
        { estimated = _models[_selected[(*_selector)(*this)]]; }
        return estimated;
    }

    IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::Estimator()
    {
        _max_bins = 100; 
        _constant = 1.;
    }

    IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::Estimator(const Estimator& estimator)
    { 
        _max_bins = estimator._max_bins;
        _constant = estimator._constant;
    }

    std::unique_ptr< UnivariateDistributionEstimation > IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
    {
        if(data.get_sample_space()->get_outcome() != CONTINUOUS)
        { throw statiskit::sample_space_error("data", CONTINUOUS); }
        auto cache = std::make_unique< IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation >();
        auto bins = std::set< double >();
        double total = 0., min = std::numeric_limits< double >::infinity(), max = -1 * std::numeric_limits< double >::infinity();
        std::unique_ptr< UnivariateData::Generator > generator = data.generator();
        while(generator->is_valid())
        {
            auto event = generator->event();
            if(event && event->get_event() == ELEMENTARY)
            {
                auto cevent = static_cast< const ContinuousElementaryEvent* >(event);
                min = std::min(min, cevent->get_value());
                max = std::max(max, cevent->get_value());
                total += generator->weight();                            
            }
            ++(*generator);
        }
        bins.insert(min - .5 / total * (max - min));
        for(size_t index = 1; index < total; ++index)
        { bins.insert(*(bins.rbegin()) + 1. / total * (max-min)); }
        bins.insert(max + .5 / total * (max - min));
        if(bins.size() > 1)
        {
            auto lengths = std::vector< double >(bins.size()-1, 0.);
            std::set< double >::iterator itl = bins.begin(), itr, it_end = bins.end();
            itr = itl;
            ++itr;
            while(itr != it_end)
            {
                lengths[distance(bins.begin(), itl)] = *itr - *itl;
                ++itl;
                ++itr;
            }
            auto densities = std::vector< double >(bins.size()-1, 0.);
            std::set< double >::iterator it;
            generator = data.generator();
            while(generator->is_valid())
            {
                auto event = generator->event();
                if(event)
                {
                    if(event->get_event() == ELEMENTARY)
                    {
                        it = bins.upper_bound(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                        if(it == bins.end())
                        { densities.back() += generator->weight() /(lengths.back() * total); }
                        else if(it == bins.begin())
                        { densities.front() +=  generator->weight() /(lengths.front() * total); }
                        else
                        { densities[distance(bins.begin(), it) - 1] += generator->weight() /(lengths[distance(bins.begin(), it) - 1] * total); }
                    }
                }
                ++(*generator);
            }
            auto entropies = std::vector< double >(densities.size()-1, std::numeric_limits< double >::quiet_NaN());
            for(size_t index = 0, max_index = densities.size()-1; index < max_index; ++index)
            {
                entropies[index] = 0;
                if(densities[index] > 0.)
                { entropies[index] += lengths[index] * densities[index] * log(densities[index]); }
                if(densities[index + 1] > 0.)
                { entropies[index] += lengths[index + 1] * densities[index + 1] * log(densities[index + 1]); }
                double p = (lengths[index] * densities[index] + lengths[index + 1] * densities[index+1]) / (lengths[index] + lengths[index + 1]);
                if(p > 0.)
                { entropies[index] -= (lengths[index] + lengths[index + 1]) * p * log(p); }
                else
                { entropies[index] = std::numeric_limits< double >::infinity(); }
            }
            double score = 0.;
            unsigned int max_bins = bins.size();
            while(bins.size() > 2)
            {
                std::vector< double >::iterator it = std::min_element(entropies.begin(), entropies.end()), itr;
                if(*it > 0)
                {
                    score -= *it;
                    if(bins.size() < _max_bins)
                    {
                        auto current = std::make_unique< UnivariateHistogramDistribution >(bins, densities);
                        double penshape = bins.size()-1;
                        penshape = penshape * (1 + _constant * log(max_bins) - _constant * log(penshape));
                        cache->add(penshape, score, current);
                    }
                }
                itr = it;
                ++itr;
                densities[distance(entropies.begin(), itr)] = lengths[distance(entropies.begin(), it)] * densities[distance(entropies.begin(), it)] + lengths[distance(entropies.begin(), itr)] * densities[distance(entropies.begin(), itr)];
                densities[distance(entropies.begin(), itr)] /= lengths[distance(entropies.begin(), it)] + lengths[distance(entropies.begin(), itr)];
                lengths[distance(entropies.begin(), itr)] = lengths[distance(entropies.begin(), it)] + lengths[distance(entropies.begin(), itr)];
                std::vector< double >::iterator itd = densities.begin();
                advance(itd, distance(entropies.begin(), it));
                densities.erase(itd);
                std::vector< double >::iterator itl = lengths.begin();
                advance(itl, distance(entropies.begin(), it));
                lengths.erase(itl);
                std::set< double >::iterator itb = bins.begin();
                advance(itb, distance(entropies.begin(), itr));
                bins.erase(itb);
                // TODO optimize
                entropies = std::vector< double >(densities.size()-1, std::numeric_limits< double >::quiet_NaN());
                for(size_t index = 0, max_index = densities.size()-1; index < max_index; ++index)
                { 
                    entropies[index] = 0;
                    if(densities[index] > 0.)
                    { entropies[index] += lengths[index] * densities[index] * log(densities[index]); }
                    if(densities[index + 1] > 0.)
                    { entropies[index] += lengths[index + 1] * densities[index + 1] * log(densities[index + 1]); }
                    double p = (lengths[index] * densities[index] + lengths[index + 1] * densities[index+1]) / (lengths[index] + lengths[index + 1]);
                    if(p > 0.)
                    { entropies[index] -= (lengths[index] + lengths[index + 1]) * p * log(p); }
                    else
                    { entropies[index] = std::numeric_limits< double >::infinity(); }
                }
            }
            cache->finalize();
        }
        else
        { throw std::runtime_error("individuals"); }
        std::unique_ptr< UnivariateDistributionEstimation > estimation;
        if(lazy)
        { estimation = std::make_unique< LazyEstimation< UnivariateHistogramDistribution, ContinuousUnivariateDistributionEstimation > >(std::static_pointer_cast<  UnivariateHistogramDistribution >(cache->get_estimated())); }
        else
        { estimation = cache; }
        return estimation;
    }

    std::unique_ptr< UnivariateDistributionEstimation::Estimator > IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::copy() const
    { return std::make_unique< Estimator >(*this); }

    const unsigned int& IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::get_max_bins() const
    { return _max_bins; }

    void IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::set_max_bins(const unsigned int& max_bins)
    {
        if(max_bins == 0)
        { throw std::runtime_error("value"); }
        _max_bins = max_bins;
    }
    
    const double& IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::get_constant() const
    { return _constant; }

    void IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::Estimator::set_constant(const double& constant)
    {
        if(constant <= 0.)
        { throw std::runtime_error("value"); }
        _constant = constant;
    }
}
