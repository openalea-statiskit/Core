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
        LazyEstimation< D, B >::LazyEstimation()
        { _estimated = std::shared_ptr< D >(nullptr); }
    
    template<class D, class B>
        LazyEstimation< D, B >::LazyEstimation(const std::shared_ptr< D >& estimated)
        { _estimated = estimated; }
    
    template<class D, class B>
        LazyEstimation< D, B >::LazyEstimation(const LazyEstimation< D, B >& estimation)
        { _estimated = estimation._estimated; }

    template<class D, class B>    
        std::shared_ptr< typename B::estimated_type > LazyEstimation< D, B >::get_estimated() const
        { return _estimated; }

    template<class D, class B>
        ActiveEstimation< D, B >::ActiveEstimation() : LazyEstimation< D, B >()
        { _data = std::shared_ptr< typename B::data_type >(nullptr); }
    
    template<class D, class B>
        ActiveEstimation< D, B >::ActiveEstimation(const std::shared_ptr< D >& estimated, const std::shared_ptr< typename B::data_type >& data) : LazyEstimation< D, B >(estimated)
        { set_data(data); }

    template<class D, class B>
        ActiveEstimation< D, B >::ActiveEstimation(const ActiveEstimation< D, B >& estimation) : LazyEstimation< D, B >(estimation)
        { _data = estimation._data; }

    template<class D, class B>
        const std::shared_ptr< typename B::data_type >& ActiveEstimation< D, B >::get_data() const
        { return _data; }

    template<class D, class B>
        void ActiveEstimation< D, B >::set_data(const std::shared_ptr< typename B::data_type >& data)
        {
            _data = data;
            if(_data)
            { _data->lock(); }
        }
        
    template<class D, class B, class R>
        ConditionalActiveEstimation< D, B, R >::ConditionalActiveEstimation() : ActiveEstimation< D, B >()
        {}
        
    template<class D, class B, class R>        
		ConditionalActiveEstimation< D, B, R >::ConditionalActiveEstimation(const std::shared_ptr< D >& estimated, const std::shared_ptr< typename B::data_type >& data, const R& response, const std::set< size_t >& explanatories) : ActiveEstimation< D, B >(estimated, data) 
		{
			_response = response;
			_explanatories = explanatories;
		}

    template<class D, class B, class R>                 
		ConditionalActiveEstimation< D, B, R >::ConditionalActiveEstimation(const ConditionalActiveEstimation< D, B, R >& estimation) : ActiveEstimation< D, B >(estimation) 
		{
			_response = estimation._response;
			_explanatories = estimation._explanatories;
		}
		
    template<class D, class B, class R>                 
		const R ConditionalActiveEstimation< D, B, R >::get_response() const
		{ return _response; }
		
    template<class D, class B, class R>                 
		const std::set< size_t > ConditionalActiveEstimation< D, B, R >::get_explanatories() const  
		{ return _explanatories; }        


    template<class D, class B>
        ListEstimation< D, B >::ListEstimation() : ActiveEstimation< D, B >()
        {
            _estimations.clear();
            _scores.clear();
        }

    template<class D, class B>
        ListEstimation< D, B >::ListEstimation(const ListEstimation< D, B >& estimation) : ActiveEstimation< D, B >(estimation)
        {
            _estimations = estimation._estimations;
            _scores = estimation._estimations;
        }

    template<class D, class B>
        std::shared_ptr< typename B::estimated_type > ListEstimation< D, B >::get_estimated() const
        {
            if(!this->_estimated)
            {
                std::vector< double >::const_iterator it = std::max_element(_scores.cbegin(), _scores.cend());
                if(it != _scores.cend() && boost::math::isfinite(*it))
                { this->_estimated = _estimations[distance(_scores.cbegin(), it)]->get_estimated(); }
            }
            return this->_estimated;
        }
    
    template<class D, class B>
        const std::vector< std::shared_ptr< B > >& ListEstimation< D, B >::get_estimations() const
        { return _estimations; }

    template<class D, class B>
        const std::vector< double >& ListEstimation< D, B >::get_scores() const
        { return _scores; }

    template<class D, class B>
        ListEstimation< D, B >::Estimator::Estimator()
        { _estimators.clear(); }

    template<class D, class B>
        ListEstimation< D, B >::Estimator::Estimator(const Estimator& estimator)
        { _estimators = estimator._estimators; }

    template<class D, class B>
        std::shared_ptr< typename B::estimation_type > ListEstimation< D, B >::Estimator::operator() (const std::shared_ptr< typename B::estimation_type::data_type >& data, const bool& lazy) const
        {
            std::shared_ptr< typename B::estimation_type > estimation;
            std::shared_ptr< ListEstimation< D, B > > _estimation = std::make_shared< ListEstimation< D, B > >();
            _estimation->set_data(data);
            for(size_t index = 0, max_index = _estimators.size(); index < max_index; ++index)
            { 
                try
                {
                    estimation = (*(_estimators[index]))(data, lazy);
                    _estimation->_estimations.push_back(estimation);
                    _estimation->_scores = scoring(index, estimation->get_estimated().get(), data);
                }
                catch(const std::exception& e)
                {
                    _estimation._estimations.puhs_back(nullptr);
                    _estimation._scores.push_back(std::numeric_limits< double >::quiet_NaN());
                }
            }
            const std::shared_ptr< typename B::estimation_type::estimated_type >& estimated = _estimation->compute_estimated();
            if(estimated)
            {
                if(lazy)
                { estimation = std::make_shared< LazyEstimation< D, B > >(estimated); }
                else
                { estimation = _estimation; }
            }
            else
            { throw std::runtime_error("failed"); }
        }

    template<class D, class B>
        const std::vector< std::shared_ptr< typename B::Estimator > >& ListEstimation< D, B >::Estimator::get_estimators() const
        { return _estimators; }

    template<class D, class B>
        void ListEstimation< D, B >::Estimator::set_estimators(const std::vector< std::shared_ptr< typename B::Estimator > >& estimators)
        { _estimators = estimators; }

    template<class D, class B>
        OptimizationEstimation< D, B >::OptimizationEstimation() : ActiveEstimation< D, B >()
        { 
            _iterations.clear();
            _scores.clear();
            _converged = false;
        }

    template<class D, class B>
        OptimizationEstimation< D, B >::OptimizationEstimation(const OptimizationEstimation< D, B >& estimation) : ActiveEstimation< D, B >(estimation)
        {
            _iterations = estimation._iterations;
            _scores = estimation._scores;
            _converged = estimation._converged; 
        }

    template<class D, class B>
        std::shared_ptr< typename B::estimated_type > OptimizationEstimation< D, B >::get_estimated() const
        { return _iterations.back(); }

    template<class D, class B>
        const std::vector< std::shared_ptr< D > >& OptimizationEstimation< D, B >::get_iterations() const
        { return _iterations; }

    template<class D, class B>
        const std::vector< double >& OptimizationEstimation< D, B >::get_scores() const
        { return _scores; }

    template<class D, class B>
        const bool& OptimizationEstimation< D, B >::has_converged() const
        { return _converged; }
    
    template<class D, class B>
        std::shared_ptr< UnivariateDistributionEstimation > UnivariateFrequencyDistributionEstimation< D, B >::Estimator::operator() (const std::shared_ptr< UnivariateData >& data, const bool& lazy) const
        {
            if(!data)
            { throw std::runtime_error("None"); }
            // if(data->get_sample_space()->get_outcome() != CATEGORICAL)
            // { throw std::runtime_error("value"); }
            std::shared_ptr< UnivariateDistributionEstimation > estimation;
            std::set< typename D::event_type::value_type > values;
            double total = data->compute_total();
            if(total > 0. && boost::math::isfinite(total))
            {
                std::unique_ptr< UnivariateData::Generator > generator = data->generator();
                while(*generator)
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
                generator = data->generator();
                while(*generator)
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
                { estimation = std::make_shared< LazyEstimation< D, B > >(std::make_shared< D >(values, masses)); }
                else
                { estimation = std::make_shared< UnivariateFrequencyDistributionEstimation< D, B > >(std::make_shared< D >(values, masses), data); }
            }
            return estimation;
        }

    /*template<class D, class E>
        const std::vector< std::shared_ptr< UnivariateDistributionEstimation > >& IndependentMultivariateDistributionEstimation< D, E >::get_marginals() const 
        { return _marginals; }

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::Estimator::Estimator() 
        { _marginal = default_map< size_t, std::shared_ptr< typename E::marginal_type::Estimator > >(get_default_estimator< typename E::marginal_type::Estimator >()); }

    template<class D, class E>
        IndependentMultivariateDistributionEstimation< D, E >::Estimator::Estimator(const Estimator& estimator) 
        { _marginal = estimator._marginal; }

    template<class D, class E>
        std::shared_ptr< MultivariateDistributionEstimation > IndependentMultivariateDistributionEstimation< D, E >::Estimator::operator() (const std::shared_ptr< MultivariateDataFrame >& data, const bool& lazy) const 
        { 
            std::shared_ptr< MultivariateDistributionEstimation > estimation;
            if(lazy)
            {
                std::vector< std::shared_ptr< typename D::marginal_type > > marginals(data->get_nb_variables());
                for(size_t variable = 0, max_variable = marginals.size(); variable < max_variable; ++variable)
                { marginals[variable] = std::static_pointer_cast< typename D::marginal_type >(((*(_marginal[variable]))(data->get_variable(variable), true))->get_estimated()); }
                estimation = std::make_shared< LazyEstimation< IndependentMultivariateDistribution< D >, E > >(std::make_shared< IndependentMultivariateDistribution< D > >(marginals));
            }
            else
            {
                auto _estimation = std::make_shared< IndependentMultivariateDistributionEstimation< D, E > >(nullptr, data);
                _estimation->_marginals.resize(data->get_nb_variables());
                for(size_t variable = 0, max_variable = data->get_nb_variables(); variable < max_variable; ++variable)
                { _estimation->_marginals[variable] = (*(_marginal[variable]))(data->get_variable(variable), false); }
                std::vector< std::shared_ptr< typename D::marginal_type > > marginals(data->get_nb_variables());
                for(size_t variable = 0, max_variable = marginals.size(); variable < max_variable; ++variable)
                { marginals[variable] = std::static_pointer_cast< typename D::marginal_type >(_estimation->_marginals[variable]->get_estimated()); }
                _estimation->_estimated = std::make_shared< IndependentMultivariateDistribution< D > >(marginals);
                estimation = _estimation;
            }
            return estimation;
        }
    
    template<class D, class E>
        const typename IndependentMultivariateDistributionEstimation< D, E >::Estimator::marginal_type& IndependentMultivariateDistributionEstimation< D, E >::Estimator::get_marginal() const
        { return _marginal; }
        
    template<class D, class E>
        void IndependentMultivariateDistributionEstimation< D, E >::Estimator::set_marginal(const marginal_type& marginal)
        { _marginal = marginal; }

    template<class T> std::shared_ptr< T > get_default_estimator()
    {
        throw std::runtime_error("not implemented");
        return nullptr;
    }*/
}

#endif
