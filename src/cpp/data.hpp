#ifndef AUTOWIG
#ifndef STATISKIT_CORE_DATA_HPP
#define STATISKIT_CORE_DATA_HPP

namespace statiskit
{
    template<class D>
        WeightedData< D >::WeightedData()
        { _data = nullptr; }

    template<class D>
        WeightedData< D >::~WeightedData()
        {}

    template<class D>
        const typename D::sample_space_type* WeightedData< D >::get_sample_space() const
        { return _data->get_sample_space(); }

    template<class D>
        std::unique_ptr< typename D::Generator > WeightedData< D >::generator() const
        { return std::make_unique< Generator >(const_cast< WeightedData< D >* >(this)); }

    template<class D>
        const D* WeightedData< D >::get_data() const
        { return _data; }

    template<class D>
        Index WeightedData< D >::get_nb_weights() const
        { return _weights.size(); }

    template<class D>
        double WeightedData< D >::get_weight(const Index& index) const
        {
            if(index > get_nb_weights())
            { throw size_error("index", get_nb_weights(), size_error::inferior); }
            return _weights[index];
        }

    template<class D>
        void WeightedData< D >::set_weight(const Index& index, const double& weight)
        {
            if(index > get_nb_weights())
            { throw size_error("index", get_nb_weights(), size_error::inferior); }
            if(weight < 0.)
            { throw lower_bound_error("weight", 0., weight, false); }
            _weights[index] = weight;
        }

    template<class D>
        void WeightedData< D >::init(const D* data)
        { 
            _data = data; 
            _weights = std::vector< double >();
            std::unique_ptr< typename D::Generator > generator = data->generator();
            while(generator->is_valid())
            {
                _weights.push_back(1.);
                ++(*generator);
            }
        }

    template<class D>
        void WeightedData< D >::init(const WeightedData< D >& data)
        { 
            _data = data._data; 
            _weights = data._weights;
        }

    template<class D>
        WeightedData< D >::Generator::Generator(WeightedData< D >* data)
        {
            _data = data;
            _generator = data->_data->generator().release();
            _index = 0;
        }

    template<class D>
        WeightedData< D >::Generator::~Generator()
        { delete _generator; }

    template<class D>
        bool WeightedData< D >::Generator::is_valid() const
        { return _index < _data->get_nb_weights(); }

    template<class D>
        typename D::Generator& WeightedData< D >::Generator::operator++()
        {
            ++_index;
            ++(*_generator);
            return *this;
        }

    template<class D>
        const typename D::event_type* WeightedData< D >::Generator::event() const
        { return _generator->event(); }

    template<class D>
        double WeightedData< D >::Generator::weight() const
        { return _data->_weights[_index]; }

    template<class D>
        void WeightedData< D >::Generator::weight(const double& weight)
        { _data->_weights[_index] = weight; }

    template<class D>
        WeightedMultivariateData::DataExtraction< D >::~DataExtraction()
        { delete _data; }

    template<class D>     
        std::unique_ptr< typename D::Generator > WeightedMultivariateData::DataExtraction< D >::generator() const
        { return std::make_unique< Generator >(this); }

    template<class D>     
        const typename D::sample_space_type* WeightedMultivariateData::DataExtraction< D >::get_sample_space() const
        { return _data->get_sample_space(); }

    template<class D>
        WeightedMultivariateData::DataExtraction< D >::DataExtraction()
        {}

    template<class D>
        void WeightedMultivariateData::DataExtraction< D >::init(const WeightedMultivariateData* weights, const D* data)
        {
            _weights = weights;
            _data = data;
        }

    template<class D>
        void WeightedMultivariateData::DataExtraction< D >::init(const DataExtraction< D >& data)
        {
            _weights = data._weights;
            _data = data._data->copy().release();
        }
        
    template<class D>     
        WeightedMultivariateData::DataExtraction< D >::Generator::Generator(const DataExtraction< D >* data)
        { 
            _data = data;
            _generator = data->_data->generator().release();
            _index = 0;
        }

    template<class D>     
        WeightedMultivariateData::DataExtraction< D >::Generator::~Generator()
        { delete _generator; }

    template<class D>     
        bool WeightedMultivariateData::DataExtraction< D >::Generator::is_valid() const
        { return _index < _data->_weights->get_nb_weights(); }

    template<class D>     
        typename D::Generator& WeightedMultivariateData::DataExtraction< D >::Generator::operator++()
        { 
            ++_index;
            ++(*_generator);
            return *this;
        }

    template<class D>     
        const typename D::event_type* WeightedMultivariateData::DataExtraction< D >::Generator::event() const
        { return _generator->event(); }

    template<class D>     
        double WeightedMultivariateData::DataExtraction< D >::Generator::weight() const
        { return _data->_weights->_weights[_index]; }

    /*template<class D>
        DataMask< D >::DataMask(const std::shared_ptr< D >& masked)
        { _masked = masked; }
    
    template<class D>
        DataMask< D >::DataMask(const DataMask< D >& data)
        { _masked = data._masked; }

    template<class D>
        const std::shared_ptr< D >& DataMask< D >::get_masked() const
        { return _masked; }

    template<class D>
        const typename D::sample_space_type* DataMask< D >::get_sample_space() const
        { return _masked->get_sample_space(); }
        
    //const UnivariateEvent* UnivariateDataMask::get_event(const Index& index) const
    //{ return _masked->get_event(compute_index(index)); }

    template<class D>
        void DataMask< D >::set_event(const Index& index, const typename D::event_type* event)
        { _masked->set_event(compute_index(index), event); }

    template<class D>
        bool DataMask< D >::is_weighted() const
        { return _masked->is_weighted(); }
    
    template<class D>
        double DataMask< D >::get_weight(const Index& index) const
        { return _masked->get_weight(compute_index(index)); }

    template<class D>
        void DataMask< D >::lock()
        { _masked->lock(); }
    
    template<class D>
        void DataMask< D >::unlock()
        { _masked->unlock(); }
    
    template<class D>
        const bool& DataMask< D >::is_locked() const
        { return _masked->is_locked(); }

    template<class D>
        const typename D::event_type* DataMask< D >::get_event(const Index& index) const
        { return _masked->get_event(compute_index(index)); }

    template<class D>
        RandomizedData< D >::RandomizedData(const std::shared_ptr< D >& randomized) : DataMask< D >(randomized)
        {
            _randomization = std::vector< Index >(randomized->size(), 0);
            randomize();
        }

    template<class D> 
        RandomizedData< D >::RandomizedData(const RandomizedData< D >& data) : DataMask< D >(data)
        { _randomization = data._randomization; }

    template<class D>
        Index RandomizedData< D >::size() const
        { return _randomization.size(); }

    template<class D>
        const std::vector< Index >& RandomizedData< D >::get_randomization() const
        { return _randomization; }

    template<class D>
        void RandomizedData< D >::randomize()
        {
            if(this->is_locked())
            { throw std::runtime_error("data is locked"); }
            for(Index index = 0, max_index = size(); index < max_index; ++index)
            { _randomization[index] = index; }
            for(Index index = 1, max_index = size(); index < max_index; ++index)
            {
                boost::random::uniform_int_distribution<> dist(0, index);
                boost::variate_generator<boost::mt19937&, boost::random::uniform_int_distribution<>  > simulator(get_random_generator(), dist);
                _randomization[simulator()] = _randomization[index];
            }
        }

    template<class D>
        std::unique_ptr< D > RandomizedData< D >::copy() const
        { return std::make_unique< RandomizedData< D > >(*this); }

    template<class D>
        Index RandomizedData< D >::compute_index(const Index& index) const
        { return _randomization[index]; }

    template<class D>
        DataIntervalMask< D >::DataIntervalMask(const std::shared_ptr< D >& masked, const Index& lower, const Index& upper, const bool& inside) : DataMask< D >(masked)
        {
            if(lower < upper)
            {
                _lower = lower;
                _upper = upper;
            }
            else
            { 
                _lower = upper;
                _upper = lower;
            }
            _inside = inside;
        }

    template<class D>
        DataIntervalMask< D >::DataIntervalMask(const DataIntervalMask< D >& data) : DataMask< D >(data)
        {
            _lower = data._lower;
            _upper = data._upper;
            _inside = data._inside;
        }

    template<class D>
        Index DataIntervalMask< D >::size() const
        { 
            Index size = _upper - _lower;
            if(!_inside)
            { size = this->_masked->size() - size; }
            return size;
        }

    template<class D>
        const bool& DataIntervalMask< D >::get_inside() const
        { return _inside; }

    template<class D>
        void DataIntervalMask< D >::set_inside(const bool& inside)
        { 
            if(this->is_locked())
            { throw std::runtime_error("data is locked"); }
            _inside = inside;
        }

    template<class D>
        Index DataIntervalMask< D >::compute_index(const Index& index) const
        { 
            Index _index = index;
            if(_inside)
            { _index += _lower; }
            else if(index > _lower)
            { _index += _upper - _lower; }
            return _index;
        }

    template<class D>
        std::unique_ptr< D > DataIntervalMask< D >::copy() const
        { return std::make_unique< DataIntervalMask< D > >(*this); }*/
}

#endif
#endif
