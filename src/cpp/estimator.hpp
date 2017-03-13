/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_ESTIMATOR_HPP
#define STATISKIT_CORE_ESTIMATOR_HPP

namespace statiskit
{    
    template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::UnivariateFrequencyDistributionEstimation() : ActiveEstimation< D, B >()
        {}

    template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::UnivariateFrequencyDistributionEstimation(D const * estimated, typename B::data_type const * data) : ActiveEstimation< D, B >(estimated, data)
        {}

     template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::UnivariateFrequencyDistributionEstimation(const UnivariateFrequencyDistributionEstimation< D, B >& estimation) : ActiveEstimation< D, B >(estimation)
        {}

    template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::~UnivariateFrequencyDistributionEstimation()
        {}

    template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::Estimator::Estimator()
        {}

    template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::Estimator::Estimator(const Estimator& estimator)
        {}

    template<class D, class B>
        UnivariateFrequencyDistributionEstimation< D, B >::Estimator::~Estimator()
        {}

    template<class D, class B>
        std::unique_ptr< UnivariateDistributionEstimation > UnivariateFrequencyDistributionEstimation< D, B >::Estimator::operator() (const UnivariateData& data, const bool& lazy) const
        {
            std::unique_ptr< UnivariateDistributionEstimation > estimation;
            std::set< typename D::event_type::value_type > values;
            double total = data.compute_total();
            if(total > 0. && boost::math::isfinite(total))
            {
                std::unique_ptr< UnivariateData::Generator > generator = data.generator();
                while(generator->is_valid())
                {
                    auto event = generator->event();
                    if(event)
                    {
                        if(event->get_event() == ELEMENTARY)
                        { values.insert(static_cast< const ElementaryEvent< typename D::event_type >* >(event)->get_value()); }
                    }
                    ++(*generator);
                }
                Eigen::VectorXd masses = Eigen::VectorXd::Zero(values.size());
                generator = data.generator();
                while(generator->is_valid())
                {
                    auto event = generator->event();
                    if(event)
                    {
                        if(event->get_event() == ELEMENTARY)
                        {
                            typename std::set< typename D::event_type::value_type >::iterator it = values.find(static_cast< const ElementaryEvent< typename D::event_type >* >(event)->get_value());
                            masses[distance(values.begin(), it)] += generator->weight() / total;
                        }
                    }
                    ++(*generator);
                }
                if(lazy)
                { estimation = std::make_unique< LazyEstimation< D, B > >(new D(values, masses)); }
                else
                { estimation = std::make_unique< UnivariateFrequencyDistributionEstimation< D, B > >(new D(values, masses), &data); }
            }
            return estimation;
        }

    template<class D, class B>
        std::unique_ptr< UnivariateDistributionEstimation::Estimator > UnivariateFrequencyDistributionEstimation< D, B >::Estimator::copy() const
        { return std::make_unique< Estimator >(*this); }

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::IndependentMultivariateDistributionEstimation() : ActiveEstimation< IndependentMultivariateDistribution< D >, E >()
        {}

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::IndependentMultivariateDistributionEstimation(IndependentMultivariateDistribution< D > const * estimated, typename E::data_type const * data) : ActiveEstimation< IndependentMultivariateDistribution< D >, E >(estimated, data)
        {}

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::IndependentMultivariateDistributionEstimation() : ActiveEstimation< IndependentMultivariateDistribution< D >, E >(estimation)
        {}

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::~IndependentMultivariateDistributionEstimation()
        {}

    template<class D, class E>
        Index IndependentMultivariateDistributionEstimation< D, E >::size() const 
        { return _estimations.size(); }

    template<class D, class E>
        const UnivariateDistributionEstimation* IndependentMultivariateDistributionEstimation< D, E >::get_estimation(const Index& index) const 
        { 
            if(index >= size())
            { throw size_error("index", size(), size_error::inferior); }
            return _estimations[index]; 
        }

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::Estimator::Estimator() 
        { 
            _default_estimator = nullptr;
            _estimators.clear();
        }

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::Estimator::Estimator(const Estimator& estimator) 
        {
            _default_estimator = static_cast< typename E::Estimator::marginal_type* >(estimator._default_estimator->copy().release());
            _estimators.clear();
            for(typename std::map< Index, typename E::Estimator::marginal_type* >::const_iterator it = estimator._estimators.cbegin(), it_end = estimator._estimators.cend(); it != it_end; ++it)            
            { _estimators[it->first] = it->second->copy().release(); }
        }

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::Estimator::~Estimator() 
        {}

    template<class D, class E>
        std::unique_ptr< MultivariateDistributionEstimation > IndependentMultivariateDistributionEstimation< D, E >::Estimator::operator() (const MultivariateData& data, const bool& lazy) const 
        { 
            std::unique_ptr< MultivariateDistributionEstimation > estimation;
            typename std::map< Index, typename E::Estimator::marginal_type* >::const_iterator it = _estimators.cbegin(), it_end = _estimators.cend();
            typename E::Estimator::marginal_type* estimator;
            std::vector< UnivariateDistributionEstimation* > estimations(data.get_sample_space()->size(), nullptr);
            for(Index component = 0, max_component = estimations.size(); component < max_component; ++component)
            {
                while(it != it_end && it->first < component)
                { ++it; }
                if(it != it_end && it->first == component)
                { estimator = it->second; }
                else
                { estimator = _default_estimator; }
                estimations[component] = (*estimator)(*(data.extract(component).get()), lazy).release();
            }
            std::vector< typename D::marginal_type > distributions(estimations.size());
            for(Index component = 0, max_component = estimations.size(); component < max_component; ++component)
            { distributions[component] = *static_cast< typename D::marginal_type* >(estimations[component]->get_estimated()); }
            IndependentMultivariateDistribution< D > * distribution = new IndependentMultivariateDistribution< D >(distributions);
            if(lazy)
            {
                estimation = std::make_unique< LazyEstimation< IndependentMultivariateDistribution< D >, E > >(distribution);
                for(Index component = 0, max_component = estimations.size(); component < max_component; ++component)
                {
                    delete estimations[component];
                    estimations[component] = nullptr;
                }
            }
            else
            {
                IndependentMultivariateDistributionEstimation< D, E >* _estimation =  new IndependentMultivariateDistributionEstimation< D, E >(distribution, &data);
                _estimation->_estimations = estimations;
                estimation.reset(_estimation);
            }
            return estimation;
        }
    
    template<class D, class E>
        std::unique_ptr< MultivariateDistributionEstimation::Estimator > IndependentMultivariateDistributionEstimation< D, E >::Estimator::copy() const
        { return std::make_unique< Estimator >(*this); }

    template<class D, class E>
        const typename E::Estimator::marginal_type* IndependentMultivariateDistributionEstimation< D, E >::Estimator::get_default_estimator() const
        { return _default_estimator; }

    template<class D, class E>
        void IndependentMultivariateDistributionEstimation< D, E >::Estimator::set_default_estimator(const typename E::Estimator::marginal_type& estimator)
        { _default_estimator = estimator; }

    template<class D, class E>
        const typename E::Estimator::marginal_type* IndependentMultivariateDistributionEstimation< D, E >::Estimator::get_estimator(const Index& index) const
        { 
            typename std::map< Index, typename E::Estimator::marginal_type* >::const_iterator it = _estimators.find(index);
            typename E::Estimator::marginal_type* estimator;
            if(it == _estimators.cend())
            { estimator = _default_estimator; }
            else
            { estimator = it->second; }
            return estimator;
        }

    template<class D, class E>
        void IndependentMultivariateDistributionEstimation< D, E >::Estimator::unset_estimator(const Index& index)
        { 
            typename std::map< Index, typename E::Estimator::marginal_type* >::const_iterator it = _estimators.find(index);
            if(it != _estimators.cend())
            { _estimators.erase(it); }
        }

    template<class D, class E>
        void IndependentMultivariateDistributionEstimation< D, E >::Estimator::set_estimator(const Index& index, const typename E::Estimator::marginal_type& estimator)
        { _estimators[index] = estimator; }
}

#endif
