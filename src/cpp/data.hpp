/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_DATA_HPP
#define STATISKIT_CORE_DATA_HPP

namespace statiskit
{
    template<class D>
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
        
    //const UnivariateEvent* UnivariateDataMask::get_event(const size_t& index) const
    //{ return _masked->get_event(compute_index(index)); }

    template<class D>
        void DataMask< D >::set_event(const size_t& index, const typename D::event_type* event)
        { _masked->set_event(compute_index(index), event); }

    template<class D>
        bool DataMask< D >::is_weighted() const
        { return _masked->is_weighted(); }
    
    template<class D>
        double DataMask< D >::get_weight(const size_t& index) const
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
        const typename D::event_type* DataMask< D >::get_event(const size_t& index) const
        { return _masked->get_event(compute_index(index)); }

    template<class D>
        RandomizedData< D >::RandomizedData(const std::shared_ptr< D >& randomized) : DataMask< D >(randomized)
        {
            _randomization = std::vector< size_t >(randomized->size(), 0);
            randomize();
        }

    template<class D> 
        RandomizedData< D >::RandomizedData(const RandomizedData< D >& data) : DataMask< D >(data)
        { _randomization = data._randomization; }

    template<class D>
        size_t RandomizedData< D >::size() const
        { return _randomization.size(); }

    template<class D>
        const std::vector< size_t >& RandomizedData< D >::get_randomization() const
        { return _randomization; }

    template<class D>
        void RandomizedData< D >::randomize()
        {
            if(this->is_locked())
            { throw std::runtime_error("data is locked"); }
            for(size_t index = 0, max_index = size(); index < max_index; ++index)
            { _randomization[index] = index; }
            for(size_t index = 1, max_index = size(); index < max_index; ++index)
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
        size_t RandomizedData< D >::compute_index(const size_t& index) const
        { return _randomization[index]; }

    template<class D>
        DataIntervalMask< D >::DataIntervalMask(const std::shared_ptr< D >& masked, const size_t& lower, const size_t& upper, const bool& inside) : DataMask< D >(masked)
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
        size_t DataIntervalMask< D >::size() const
        { 
            size_t size = _upper - _lower;
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
        size_t DataIntervalMask< D >::compute_index(const size_t& index) const
        { 
            size_t _index = index;
            if(_inside)
            { _index += _lower; }
            else if(index > _lower)
            { _index += _upper - _lower; }
            return _index;
        }

    template<class D>
        std::unique_ptr< D > DataIntervalMask< D >::copy() const
        { return std::make_unique< DataIntervalMask< D > >(*this); }
}

#endif
