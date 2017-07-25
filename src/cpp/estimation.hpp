#ifndef STATISKIT_CORE_ESTIMATION_HPP
#define STATISKIT_CORE_ESTIMATION_HPP

namespace statiskit
{
    template<class D, class B>
        LazyEstimation< D, B >::LazyEstimation()
        { _estimated = nullptr; }
    
    template<class D, class B>
        LazyEstimation< D, B >::LazyEstimation(const D * estimated)
        { _estimated = estimated; }
    
    template<class D, class B>
        LazyEstimation< D, B >::LazyEstimation(const LazyEstimation< D, B >& estimation)
        { 
            if(estimation._estimated)
            { _estimated = static_cast< D* >(estimation._estimated->copy().release()); }
            else
            { _estimated = nullptr; }
        }

    template<class D, class B>
        LazyEstimation< D, B >::~LazyEstimation()
        { 
            if(_estimated)
            { delete _estimated; }
        }

    template<class D, class B>    
        typename B::estimated_type const * LazyEstimation< D, B >::get_estimated() const
        { return _estimated; }

    template<class D, class B>
        ActiveEstimation< D, B >::ActiveEstimation() : LazyEstimation< D, B >()
        { _data = nullptr; }

    template<class D, class B>
        ActiveEstimation< D, B >::ActiveEstimation(const typename B::data_type* data) : LazyEstimation< D, B >()
        { 
            if(data)
            { _data = data->copy().release(); }
            else
            { _data = nullptr; }
        }

    template<class D, class B>
        ActiveEstimation< D, B >::ActiveEstimation(const D * estimated, const typename B::data_type* data) : LazyEstimation< D, B >(estimated)
        { 
            if(data)
            { _data = data->copy().release(); }
            else
            { _data = nullptr; }
        }

    template<class D, class B>
        ActiveEstimation< D, B >::ActiveEstimation(const ActiveEstimation< D, B >& estimation) : LazyEstimation< D, B >(estimation)
        { _data = estimation._data->copy().release(); }

    template<class D, class B>
        ActiveEstimation< D, B >::~ActiveEstimation()
        { 
            if(_data)
            { delete _data; }
        }

    template<class D, class B>
        const typename B::data_type * ActiveEstimation< D, B >::get_data() const
        { return _data; }
        
    template<class D, class B>
        Selection< D, B >::Selection() : ActiveEstimation< D, B >()
        {
            _estimations.clear();
            _scores.clear();
        }

    template<class D, class B>
        Selection< D, B >::Selection(const typename B::data_type* data) : ActiveEstimation< D, B >(data)
        {
            _estimations.clear();
            _scores.clear();
        }

    template<class D, class B>
        Selection< D, B >::Selection(const D * estimated, const typename B::data_type* data) : ActiveEstimation< D, B >(estimated, data)
        {
            _estimations.clear();
            _scores.clear();
        }

    template<class D, class B>
        Selection< D, B >::Selection(const Selection< D, B >& estimation)
        {
            _estimations.resize(estimation.size(), nullptr);
            for(Index index = 0, max_index = estimation.size(); index < max_index; ++index)
            { _estimations[index] = static_cast< B* >(estimation._estimations[index]); }/*->copy().release()); TODO */
            _scores = estimation._scores;
            this->_data = estimation._data->copy().release();
            finalize();
        }

    template<class D, class B>
        Selection< D, B >::~Selection()
        {
            this->_estimated = nullptr;
            for(Index index = 0, max_index = size(); index < max_index; ++index)
            { 
                if(_estimations[index])
                {
                    delete _estimations[index];
                    _estimations[index] = nullptr;
                }
            }
            _estimations.clear();
            _scores.clear();
        }
    
    template<class D, class B>
        Index Selection< D, B >::size() const
        { return _scores.size(); }

    template<class D, class B>
        B const * Selection< D, B >::get_estimation(const Index& index) const
        { return _estimations[index]; }

    template<class D, class B>
        const double& Selection< D, B >::get_score(const Index& index) const
        { return _scores[index]; }

    template<class D, class B>
        void Selection< D, B >::finalize()
        {
            std::vector< double >::const_iterator it = std::max_element(_scores.cbegin(), _scores.cend());
            if(it != _scores.cend() && boost::math::isfinite(*it))
            { this->_estimated = static_cast< const D * >(_estimations[distance(_scores.cbegin(), it)]->get_estimated()); }
            else
            { this->_estimated = nullptr; }
        }

    template<class D, class B>
        Selection< D, B >::Estimator::~Estimator()
        {
            for(Index index = 0, max_index = _estimators.size(); index < max_index; ++index)
            { 
                delete _estimators[index];
                _estimators[index] = nullptr;
            }
            _estimators.clear();
        }

    template<class D, class B>
        std::unique_ptr< typename B::Estimator::estimation_type > Selection< D, B >::Estimator::operator() (const typename B::data_type& data, const bool& lazy) const
        {
            std::unique_ptr< typename B::Estimator::estimation_type > estimation;
            if(lazy)
            {
                std::unique_ptr< typename B::Estimator::estimation_type > _estimation;
                double curr, prev = -1 * std::numeric_limits< double >::infinity();
                for(Index index = 0, max_index = size(); index < max_index; ++index)
                { 
                    try
                    {
                        _estimation = (*(_estimators[index]))(data, true);
                        curr = scoring(_estimation->get_estimated(), data);
                        if(curr > prev && boost::math::isfinite(curr))
                        {
                            prev = curr;
                            estimation.swap(_estimation);
                        }
                    }
                    catch(const std::exception& e)
                    {}
                }
            }
            else
            {
                Selection< D, B >* _estimation = new Selection< D, B >(data.copy().release());
                for(Index index = 0, max_index = size(); index < max_index; ++index)
                {
                    try
                    {
                        _estimation->_estimations.push_back(static_cast< B* >((*(_estimators[index]))(data, false).release()));
                        _estimation->_scores.push_back(scoring(_estimation->_estimations.back()->get_estimated(), data));
                    }
                    catch(const std::exception& e)
                    {
                        _estimation->_estimations.push_back(nullptr);
                        _estimation->_scores.push_back(std::numeric_limits< double >::quiet_NaN());
                    }
                }
                _estimation->finalize();
                estimation.reset(_estimation);
            }
            if(!estimation || !estimation->get_estimated())
            { std::runtime_error("All estimations failed, perform manually the estimations in order to investigate what went wrong"); }
            return estimation;
        }

    template<class D, class B>
        Index Selection< D, B >::Estimator::size() const
        { return _estimators.size(); }

    template<class D, class B>
        typename B::Estimator* Selection< D, B >::Estimator::get_estimator(const Index& index)
        { 
            if(index >= size())
            { throw size_error("index", size(), size_error::inferior); }
            return _estimators[index]; 
        }

    template<class D, class B>
        void Selection< D, B >::Estimator::set_estimator(const Index& index, const typename B::Estimator& estimator)
        { 
            if(index >= size())
            { throw size_error("index", size(), size_error::inferior); }
            delete _estimators[index];
            _estimators[index] = static_cast< typename B::Estimator* >(estimator.copy().release());
        }

    template<class D, class B>
        void Selection< D, B >::Estimator::add_estimator(const typename B::Estimator& estimator)
        { _estimators.push_back(static_cast< typename B::Estimator* >(estimator.copy().release())); }

    template<class D, class B>
        void Selection< D, B >::Estimator::remove_estimator(const Index& index)
        {
            if(index >= size())
            { throw size_error("index", size(), size_error::inferior); }
            typename std::vector< typename B::Estimator * >::iterator it = _estimators.begin();
            advance(it, index);
            delete *it;
            _estimators.erase(it);
        }

    template<class D, class B>
        void Selection< D, B >::Estimator::init()
        { _estimators.clear(); }

    template<class D, class B>
        void Selection< D, B >::Estimator::init(const Estimator& estimator)
        { 
            _estimators.resize(estimator.size());
            for(Index index = 0, max_index = estimator.size(); index < max_index; ++index)
            { _estimators[index] = static_cast< typename B::Estimator* >(estimator._estimators[index]->copy().release()); }
        }

    template<class D, class B>
        std::unordered_set< uintptr_t > Selection< D, B >::Estimator::children() const
        {
            std::unordered_set< uintptr_t > ch;
            for(typename std::vector< typename B::Estimator* >::const_iterator it = _estimators.cbegin(), it_end = _estimators.cend(); it != it_end; ++it)
            {
                ch.insert(this->compute_identifier(**it));
                __impl::merge(ch, this->compute_children(**it));
            }
            return ch;
        }

    template<class D, class B>
        Selection< D, B >::CriterionEstimator::CriterionEstimator()
        {
            this->init();
            _criterion = criterion_type::BIC;
        }

    template<class D, class B>
        Selection< D, B >::CriterionEstimator::CriterionEstimator(const CriterionEstimator& estimator)
        {
            this->init(estimator);
            _criterion = estimator._criterion;
        }

    template<class D, class B>
        Selection< D, B >::CriterionEstimator::~CriterionEstimator()
        {}

    template<class D, class B>
        const typename Selection< D, B >::CriterionEstimator::criterion_type& Selection< D, B >::CriterionEstimator::get_criterion() const
        { return _criterion; }

    template<class D, class B>
        void Selection< D, B >::CriterionEstimator::set_criterion(const criterion_type& criterion)
        { _criterion = criterion; }

    template<class D, class B>
        double Selection< D, B >::CriterionEstimator::scoring(const typename B::estimated_type * estimated, typename B::data_type const & data) const
        {
            double score = estimated->loglikelihood(data);
            double total = data.compute_total();
            unsigned int nb_parameters = estimated->get_nb_parameters();
            switch(_criterion)
            {
                case AIC:
                    score -= nb_parameters;
                    break;
                case AICc:
                    score -= nb_parameters * (1 + (nb_parameters + 1) / (total - nb_parameters - 1)) ;
                    break;
                case BIC:
                    score -= nb_parameters * log(total) / 2.;
                    break;
                case HQIC:
                    score -= nb_parameters * log(log(total)) / 2.;
                    break;
            }
            return score;
        }

    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::OptimizationEstimationImpl() : ActiveEstimation< D, B >()
        { _iterations.clear(); }

    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::OptimizationEstimationImpl(const D * estimated, const typename B::data_type* data) : ActiveEstimation< D, B >(estimated, data)
        { _iterations.clear(); }

    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::OptimizationEstimationImpl(const OptimizationEstimationImpl< T, D, B >& estimation) : ActiveEstimation< D, B >(estimation)
        { _iterations = estimation._iterations; }
        
    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::~OptimizationEstimationImpl()
        { _iterations.clear(); }

    template<class T, class D, class B>
        Index OptimizationEstimationImpl< T, D, B >::size() const
        { return _iterations.size(); }

    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::Estimator::Estimator() : Optimization< typename B::Estimator >()
        {}

    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::Estimator::Estimator(const Estimator& estimator) : Optimization< typename B::Estimator >(estimator)
        {}

    template<class T, class D, class B>
        OptimizationEstimationImpl< T, D, B >::Estimator::~Estimator()
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::OptimizationEstimation() : OptimizationEstimationImpl< T, D, B >()
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::OptimizationEstimation(D const * estimated, typename B::data_type const * data) : OptimizationEstimationImpl< T, D, B >(estimated, data)
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::OptimizationEstimation(const OptimizationEstimation< T, D, B>& estimation) : OptimizationEstimationImpl< T, D, B >(estimation)
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::~OptimizationEstimation()
        {}

    template<class T, class D, class B>
        const T OptimizationEstimation< T, D, B >::get_iteration(const Index& index) const
        {
            if(index >= this->size())
            { throw size_error("index", this->size(), size_error::inferior); }
            return this->_iterations[index];
        }

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::Estimator::Estimator() : OptimizationEstimationImpl< T, D, B >::Estimator()
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::Estimator::Estimator(const Estimator& estimator) : OptimizationEstimationImpl< T, D, B >::Estimator(estimator)
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T, D, B >::Estimator::~Estimator()
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::OptimizationEstimation() : OptimizationEstimationImpl< T*, D, B >()
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::OptimizationEstimation(D const * estimated, typename B::data_type const * data) : OptimizationEstimationImpl< T*, D, B >(estimated, data)
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::OptimizationEstimation(const OptimizationEstimation< T*, D, B >& estimation) : OptimizationEstimationImpl< T*, D, B >(estimation)
        { 
            for(Index index = 0, max_index = this->_iterations.size(); index < max_index; ++index)
            { this->_iterations[index] = static_cast< T* >(this->_iterations[index]->copy().release()); }
        }

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::~OptimizationEstimation()
        {
            for(Index index = 0, max_index = this->_iterations.size(); index < max_index; ++index)
            { 
                delete this->_iterations[index];
                this->_iterations[index] = nullptr; 
            }
        }

    template<class T, class D, class B>
        const T* OptimizationEstimation< T*, D, B >::get_iteration(const Index& index) const
        {
            if(index >= this->size())
            { throw size_error("index", this->size(), size_error::inferior); }
            return this->_iterations[index];
        }

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::Estimator::Estimator() : OptimizationEstimationImpl< T*, D, B >::Estimator()
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::Estimator::Estimator(const Estimator& estimator) : OptimizationEstimationImpl< T*, D, B >::Estimator(estimator)
        {}

    template<class T, class D, class B>
        OptimizationEstimation< T*, D, B >::Estimator::~Estimator()
        {}
}

#endif
