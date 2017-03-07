/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#include "data.h"

namespace statiskit
{ 
    double UnivariateData::compute_total() const
    {
        double total = 0.;
        std::unique_ptr< UnivariateData::Generator > _generator = generator();
        while(_generator->is_valid())
        {
            total += _generator->weight();
            ++(*_generator);
        }
        return total;
    }

    std::unique_ptr< UnivariateEvent > UnivariateData::compute_minimum() const
    {
        std::unique_ptr< UnivariateEvent > minimum;
        const UnivariateSampleSpace* sample_space = get_sample_space();
        std::unique_ptr< UnivariateData::Generator > _generator = generator();
        if(sample_space->get_ordering() == TOTAL)
        {
            while(_generator->is_valid() && !minimum)
            {
                const UnivariateEvent* event = _generator->event();
                if(event && event->get_event() == ELEMENTARY)
                { 
                    switch(sample_space->get_outcome())
                    {
                        case CATEGORICAL:
                            minimum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                            break;
                        case DISCRETE:
                            minimum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value());
                            break;
                        case CONTINUOUS:
                            minimum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                            break;
                    }
                }
                ++(*_generator);
            }
            switch(sample_space->get_outcome())
            {
                case CATEGORICAL:
                    while(_generator->is_valid())
                    {
                        const UnivariateEvent* event = _generator->event();
                        if(event && event->get_event() == ELEMENTARY)
                        {
                            if(static_cast< const CategoricalElementaryEvent* >(event)->get_value() < static_cast< const CategoricalElementaryEvent* >(minimum.get())->get_value())
                            { minimum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value()); }    
                        }
                        ++(*_generator);
                    }
                    break;
                case DISCRETE:
                    while(_generator->is_valid())
                    {
                        const UnivariateEvent* event = _generator->event();
                        if(event && event->get_event() == ELEMENTARY)
                        {
                            if(static_cast< const DiscreteElementaryEvent* >(event)->get_value() < static_cast< const DiscreteElementaryEvent* >(minimum.get())->get_value())
                            { minimum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value()); }    
                        }
                        ++(*_generator);
                    }
                    break;
                case CONTINUOUS:
                    while(_generator->is_valid())
                    {
                        const UnivariateEvent* event = _generator->event();
                        if(event && event->get_event() == ELEMENTARY)
                        {
                            if(static_cast< const ContinuousElementaryEvent* >(event)->get_value() < static_cast< const ContinuousElementaryEvent* >(minimum.get())->get_value())
                            { minimum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value()); }    
                        }
                        ++(*_generator);
                    }
                    break;
            }
        }
        return minimum;
    }

    std::unique_ptr< UnivariateEvent> UnivariateData::compute_maximum() const
    {
        std::unique_ptr< UnivariateEvent > maximum;
        const UnivariateSampleSpace* sample_space = get_sample_space();
        std::unique_ptr< UnivariateData::Generator > _generator = generator();
        if(sample_space->get_ordering() == TOTAL)
        {
            while(_generator->is_valid() && !maximum)
            {
                const UnivariateEvent* event = _generator->event();
                if(event && event->get_event() == ELEMENTARY)
                { 
                    switch(sample_space->get_outcome())
                    {
                        case CATEGORICAL:
                            maximum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                            break;
                        case DISCRETE:
                            maximum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value());
                            break;
                        case CONTINUOUS:
                            maximum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                            break;
                    }
                }
                ++(*_generator);
            }
            switch(sample_space->get_outcome())
            {
                case CATEGORICAL:
                    while(_generator->is_valid())
                    {
                        const UnivariateEvent* event = _generator->event();
                        if(event && event->get_event() == ELEMENTARY)
                        {
                            if(static_cast< const CategoricalElementaryEvent* >(event)->get_value() > static_cast< const CategoricalElementaryEvent* >(maximum.get())->get_value())
                            { maximum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value()); }    
                        }
                        ++(*_generator);
                    }
                    break;
                case DISCRETE:
                    while(_generator->is_valid())
                    {
                        const UnivariateEvent* event = _generator->event();
                        if(event && event->get_event() == ELEMENTARY)
                        {
                            if(static_cast< const DiscreteElementaryEvent* >(event)->get_value() > static_cast< const DiscreteElementaryEvent* >(maximum.get())->get_value())
                            { maximum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value()); }    
                        }
                        ++(*_generator);
                    }
                    break;
                case CONTINUOUS:
                    while(_generator->is_valid())
                    {
                        const UnivariateEvent* event = _generator->event();
                        if(event && event->get_event() == ELEMENTARY)
                        {
                            if(static_cast< const ContinuousElementaryEvent* >(event)->get_value() > static_cast< const ContinuousElementaryEvent* >(maximum.get())->get_value())
                            { maximum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value()); }    
                        }
                        ++(*_generator);
                    }
                    break;
            }
        }
        return maximum;
    }

    unsigned int NamedData::__index = 0;

    NamedData::NamedData()
    { 
        _name = "V" + __impl::to_string(__index); 
        ++__index;
    }

    NamedData::NamedData(const std::string& name)
    { _name = name; }

    NamedData::NamedData(const NamedData& named_data)
    { _name = named_data._name; }

    NamedData::~NamedData()
    {}

    const std::string& NamedData::get_name() const
    { return _name; }

    void NamedData::set_name(const std::string& name)
    { _name = name; }

    UnivariateDataFrame::UnivariateDataFrame(const UnivariateSampleSpace& sample_space) : NamedData()
    {
        _sample_space = sample_space.copy().release();
        _events.clear();
    }

    UnivariateDataFrame::UnivariateDataFrame(const UnivariateDataFrame& data)
    {
        _sample_space = data._sample_space->copy().release();
        _events.resize(data.get_nb_events());
        for(size_t index = 0, max_index = get_nb_events(); index < max_index; ++index)
        {
            if(data._events[index])
            { _events[index] = data._events[index]->copy().release(); }
        }
    }

    UnivariateDataFrame::~UnivariateDataFrame()
    {
        if(_sample_space)
        { delete _sample_space; }
        _sample_space = nullptr;
        for(size_t index = 0, max_index = get_nb_events(); index < max_index; ++index)
        {
            if(_events[index])
            { delete _events[index]; }
            _events[index] = nullptr;
        }
        _events.clear();
    }

    std::unique_ptr< UnivariateData::Generator > UnivariateDataFrame::generator() const
    { return std::make_unique< UnivariateDataFrame::Generator >(this); }

    const UnivariateSampleSpace* UnivariateDataFrame::get_sample_space() const
    { return _sample_space; }
   
    void UnivariateDataFrame::set_sample_space(const UnivariateSampleSpace& sample_space)
    {
        bool compatible =  true;
        size_t index = 0, max_index = get_nb_events();
        while(compatible && index < max_index)
        {
            compatible = sample_space.is_compatible(_events[index]);
            ++index;
        }
        if(compatible)
        { 
            delete _sample_space;
            _sample_space = sample_space.copy().release();
        }
        else
        { throw statiskit::parameter_error("sample_space", "incompatible"); }
    }

    std::unique_ptr< UnivariateData > UnivariateDataFrame::copy() const
    { return std::make_unique< UnivariateDataFrame >(*this); }

    size_t UnivariateDataFrame::get_nb_events() const
    { return _events.size(); }
    
    const UnivariateEvent* UnivariateDataFrame::get_event(const size_t& index) const 
    {
        if(index > get_nb_events())
        { throw size_error("index", get_nb_events(), size_error::inferior); }
        return _events[index];
    }

    void UnivariateDataFrame::set_event(const size_t& index, const UnivariateEvent* event)
    {
        if(event)
        {
            if(_sample_space->is_compatible(event))
            {
                delete _events[index];
                _events[index] = event->copy().release();
            }
            else
            { throw statiskit::parameter_error("event", "incompatible"); } 
        }
        else
        {
            delete _events[index];
            _events[index] = nullptr; 
        }
    }
    
    void UnivariateDataFrame::add_event(const UnivariateEvent* event)
    {
        if(event)
        {
            if(_sample_space->is_compatible(event))
            { _events.push_back(event->copy().release()); }
            else
            { throw parameter_error("event", "incompatible"); }
        }
        else
        { _events.push_back(nullptr); }
    }

    std::unique_ptr< UnivariateEvent > UnivariateDataFrame::pop_event()
    {
        std::unique_ptr< UnivariateEvent > event(_events.back());
        _events.pop_back();
        return event;
    }

    void UnivariateDataFrame::insert_event(const size_t& index, const UnivariateEvent* event)
    {
        if(event)
        {
            if(_sample_space->is_compatible(event))
            {
                std::vector< UnivariateEvent* >::iterator it = _events.begin();
                advance(it, index);
                _events.insert(it, event->copy().release());    
            }
            else
            { throw parameter_error("event", "incompatible"); } 
        }
        else
        {
            std::vector< UnivariateEvent* >::iterator it = _events.begin();
            advance(it, index);
            _events.insert(it, nullptr);
        }
    }
    
    void UnivariateDataFrame::remove_event(const size_t& index)
    {
        std::vector< UnivariateEvent* >::iterator it = _events.begin();
        advance(it, index);
        delete *it;
        *it = nullptr;
        _events.erase(it);
    }

    UnivariateDataFrame::Generator::Generator(const UnivariateDataFrame* data)
    {
        _data = data;
        _index = 0;
    }

    UnivariateDataFrame::Generator::~Generator()
    {}

    bool UnivariateDataFrame::Generator::is_valid() const
    { return _data && _index < _data->get_nb_events(); }

    UnivariateData::Generator& UnivariateDataFrame::Generator::operator++()
    {
       ++_index;
       return *this;
    }

    const UnivariateEvent* UnivariateDataFrame::Generator::event() const
    {
        if(!_data)
        { throw proxy_connection_error(); }
        return _data->get_event(_index);
    }

    double UnivariateDataFrame::Generator::weight() const
    {
        if(!_data)
        { throw proxy_connection_error(); }
        return 1;
    }

    WeightedUnivariateDataFrame::WeightedUnivariateDataFrame(const UnivariateSampleSpace& sample_space) : UnivariateDataFrame(sample_space)
    { _weights.clear(); }

    
    WeightedUnivariateDataFrame::WeightedUnivariateDataFrame(const WeightedUnivariateDataFrame& data) : UnivariateDataFrame(data)
    { _weights = data._weights; }
    
    WeightedUnivariateDataFrame::~WeightedUnivariateDataFrame()
    {}

    std::unique_ptr< UnivariateData::Generator > WeightedUnivariateDataFrame::generator() const
    { return std::make_unique< WeightedUnivariateDataFrame::Generator >(this); }

    std::unique_ptr< UnivariateData > WeightedUnivariateDataFrame::copy() const
    { return std::make_unique< WeightedUnivariateDataFrame >(*this); }

    void WeightedUnivariateDataFrame::add_event(const UnivariateEvent* event)
    {
        UnivariateDataFrame::add_event(event);
        _weights.push_back(1.);
    }

    std::unique_ptr< UnivariateEvent > WeightedUnivariateDataFrame::pop_event()
    {
        std::unique_ptr< UnivariateEvent > event = UnivariateDataFrame::pop_event();
        _weights.pop_back();
        return event;
    }

    void WeightedUnivariateDataFrame::insert_event(const size_t& index, const UnivariateEvent* event)
    {
        UnivariateDataFrame::insert_event(index, event);
        std::vector< double >::iterator it = _weights.begin();
        advance(it, index);
        _weights.insert(it, 1.);
    }

    void WeightedUnivariateDataFrame::remove_event(const size_t& index)
    {
        UnivariateDataFrame::remove_event(index);
        std::vector< double >::iterator it = _weights.begin();
        advance(it, index);
        _weights.erase(it);
    }

    double WeightedUnivariateDataFrame::get_weight(const size_t& index) const
    { return _weights[index]; }

    void WeightedUnivariateDataFrame::set_weight(const size_t& index, const double& weight)
    { _weights[index] = weight; }

    WeightedUnivariateDataFrame::Generator::Generator(const WeightedUnivariateDataFrame* data)
    {
        _data = data;
        _index = 0;
    }

    WeightedUnivariateDataFrame::Generator::~Generator()
    {}

    bool WeightedUnivariateDataFrame::Generator::is_valid() const
    { return _data && _index < _data->get_nb_events(); }

    UnivariateData::Generator& WeightedUnivariateDataFrame::Generator::operator++()
    {
       ++_index;
       return *this;
    }

    const UnivariateEvent* WeightedUnivariateDataFrame::Generator::event() const
    {
        if(!_data)
        { throw proxy_connection_error(); }
        return _data->get_event(_index);
    }

    double WeightedUnivariateDataFrame::Generator::weight() const
    {
        if(!_data)
        { throw proxy_connection_error(); }
        return _data->get_weight(_index);
    }

    double MultivariateData::compute_total() const
    {
        double total = 0.;
        std::unique_ptr< MultivariateData::Generator > _generator = generator();
        while(_generator->is_valid())
        {
            total += _generator->weight();
            ++(*_generator);
        }
        return total;
    }


    MultivariateDataFrame::MultivariateDataFrame()
    {
        _sample_space = new SampleSpace(this);
        _variables.clear();
    }

    MultivariateDataFrame::MultivariateDataFrame(const MultivariateDataFrame& data)
    {
        _sample_space = new SampleSpace(this);
        _variables.resize(data.get_nb_variables());
        for(size_t index = 0, max_index = data.get_nb_variables(); index < max_index; ++index)
        { _variables[index] = static_cast< UnivariateDataFrame* >(data._variables[index]->copy().release()); }
    }

    MultivariateDataFrame::~MultivariateDataFrame()
    { 
        for(size_t index = 0, max_index = get_nb_variables(); index < max_index; ++index)
        {
            if(_variables[index])
            { delete _variables[index]; }
            _variables[index] = nullptr;
        }
        _variables.clear();
    }

    std::unique_ptr< MultivariateData::Generator > MultivariateDataFrame::generator() const
    { return std::make_unique< MultivariateDataFrame::Event::Generator >(this); }

    const MultivariateSampleSpace* MultivariateDataFrame::get_sample_space() const
    { return _sample_space; }

    void MultivariateDataFrame::set_sample_space(const MultivariateSampleSpace& sample_space)
    {
        size_t index = 0, max_index = sample_space.size();
        std::vector< UnivariateSampleSpace* > __sample_space;
        try
        {
            if(max_index == get_nb_variables())
            {
                while(index < max_index)
                {
                    __sample_space.push_back(_sample_space->get(index)->copy().release());
                    _variables[index]->set_sample_space(*sample_space.get(index));
                    ++index;
                }
            }
        }
        catch(const std::exception& error)
        {
            delete __sample_space.back();
            __sample_space.pop_back();
            while(__sample_space.size() > 0)
            {
                _variables[index - 1]->set_sample_space(*__sample_space.back());
                delete __sample_space.back();
                __sample_space.pop_back();
                --index;
            }
            throw error;
        }
    }

    std::unique_ptr< UnivariateData > MultivariateDataFrame::extract(const size_t& index) const
    { 
        if(index >= get_nb_variables())
        { throw size_error("index", get_nb_variables(), size_error::inferior); }
        return std::make_unique< UnivariateDataExtraction >(this, index);
    }

    std::unique_ptr< MultivariateData > MultivariateDataFrame::extract(const std::set< size_t >& indices) const
    {
        for(std::set< size_t >::const_iterator it = indices.cbegin(), it_end = indices.cend(); it != it_end; ++it)
        {
            if(*it >= get_nb_variables())
            { throw size_error("indices", get_nb_variables(), size_error::inferior); }
        }
        return std::make_unique< MultivariateDataExtraction >(this, indices);
      }

    std::unique_ptr< MultivariateData > MultivariateDataFrame::copy() const
    { return std::make_unique< MultivariateDataFrame >(*this); }

    size_t MultivariateDataFrame::get_nb_variables() const
    { return _variables.size(); }

    const UnivariateDataFrame* MultivariateDataFrame::get_variable(const size_t& index) const
    {
        if(index > get_nb_variables())
        { throw size_error("index", get_nb_variables(), size_error::inferior); }       
        return _variables[index];
    }

    void MultivariateDataFrame::set_variable(const size_t& index, const UnivariateDataFrame& variable)
    {
        if(index > get_nb_variables())
        { throw size_error("index", get_nb_variables(), size_error::inferior); }       
        if(get_nb_variables() != 0 && variable.get_nb_events() != get_nb_events())
        { throw size_error("variable", get_nb_events(), size_error::equal); }  
        delete _variables[index];
        _variables[index] = static_cast< UnivariateDataFrame* >(variable.copy().release());
    }

    void MultivariateDataFrame::add_variable(const UnivariateDataFrame& variable)
    {  
        if(get_nb_variables() != 0 && variable.get_nb_events() != get_nb_events())
        { throw size_error("variable", get_nb_events(), size_error::equal); }
        _variables.push_back(static_cast< UnivariateDataFrame* >(variable.copy().release()));
    }

    std::unique_ptr< UnivariateDataFrame > MultivariateDataFrame::pop_variable()
    {  
        std::unique_ptr< UnivariateDataFrame > variable;
        variable.reset(_variables.back());
        _variables.pop_back();
        return variable;
    }

    void MultivariateDataFrame::insert_variable(const size_t& index, const UnivariateDataFrame& variable)
    {
        if(index > get_nb_variables())
        { throw size_error("index", get_nb_variables(), size_error::inferior); }       
        if(get_nb_variables() != 0 && variable.get_nb_events() != get_nb_events())
        { throw size_error("variable", get_nb_events(), size_error::equal); }  
        std::vector< UnivariateDataFrame* >::iterator it = _variables.begin();
        advance(it, index);
        _variables.insert(it, static_cast< UnivariateDataFrame* >(variable.copy().release()));
    }

    void MultivariateDataFrame::remove_variable(const size_t& index)
    {
        if(index > get_nb_variables())
        { throw size_error("index", get_nb_variables(), size_error::inferior); }       
        std::vector< UnivariateDataFrame* >::iterator it = _variables.begin();
        advance(it, index);
        delete *it;
        *it = nullptr;
        _variables.erase(it);
    }

    size_t MultivariateDataFrame::get_nb_events() const
    {
        size_t nb_event = 0;
        if(get_nb_variables() > 0)
        { nb_event = _variables[0]->get_nb_events(); }
        return nb_event;
    }

   
    std::unique_ptr< MultivariateEvent > MultivariateDataFrame::get_event(const size_t& index) const 
    {
        if(index > get_nb_events())
        { throw size_error("index", get_nb_events(), size_error::inferior); }
        return std::make_unique< Event >(this, index);
    }

    void MultivariateDataFrame::set_event(const size_t& index, const MultivariateEvent* event)
    {
        if(event)
        {
            if(_sample_space->is_compatible(event))
            {
                for(size_t _index = 0, _max_index = get_nb_variables(); _index < _max_index; ++_index)
                { _variables[_index]->set_event(index, event->get(_index)); }
            }
            else
            { throw statiskit::parameter_error("event", "incompatible"); } 
        }
        else
        {
            for(size_t _index = 0, _max_index = get_nb_variables(); _index < _max_index; ++_index)
            { _variables[_index]->set_event(index, nullptr); }
        }
    }
    
    void MultivariateDataFrame::add_event(const MultivariateEvent* event)
    {
        if(event)
        {
            if(_sample_space->is_compatible(event))
            {
                for(size_t index = 0, max_index = get_nb_variables(); index < max_index; ++index)
                { _variables[index]->add_event(event->get(index)); }
            }
            else
            { throw statiskit::parameter_error("event", "incompatible"); } 
        }
        else
        {
            for(size_t index = 0, max_index = get_nb_variables(); index < max_index; ++index)
            { _variables[index]->add_event(nullptr); }
        }
    }

    std::unique_ptr< MultivariateEvent > MultivariateDataFrame::pop_event()
    {
        std::unique_ptr< VectorEvent > event = std::make_unique< VectorEvent >(get_nb_variables());
        for(size_t index = 0, max_index = get_nb_variables(); index < max_index; ++index)
        { event->set(index, *(_variables[index]->pop_event().get())); }
        return event;
    }

    void MultivariateDataFrame::insert_event(const size_t& index, const MultivariateEvent* event)
    {
        if(event)
        {
            if(_sample_space->is_compatible(event))
            {
                for(size_t _index = 0, _max_index = get_nb_variables(); _index < _max_index; ++_index)
                { _variables[_index]->insert_event(index, event->get(_index)); }
            }
            else
            { throw parameter_error("event", "incompatible"); }
        }
        else
        {
            for(size_t _index = 0, _max_index = get_nb_variables(); _index < _max_index; ++_index)
            { _variables[_index]->insert_event(index, nullptr); }
        }
    }
    
    void MultivariateDataFrame::remove_event(const size_t& index)
    {
        for(size_t _index = 0, _max_index = get_nb_variables(); _index < _max_index; ++_index)
        { _variables[_index]->remove_event(index); }
    }

    MultivariateDataFrame::SampleSpace::SampleSpace(const MultivariateDataFrame* data)
    { _data = data; }

    MultivariateDataFrame::SampleSpace::SampleSpace(const SampleSpace& sample_space)
    { _data = sample_space._data; }

    MultivariateDataFrame::SampleSpace::~SampleSpace()
    {}

    size_t MultivariateDataFrame::SampleSpace::size() const
    { return _data->get_nb_variables(); }

    const UnivariateSampleSpace* MultivariateDataFrame::SampleSpace::get(const size_t& index) const
    { return _data->_variables[index]->get_sample_space(); }

    std::unique_ptr< MultivariateSampleSpace > MultivariateDataFrame::SampleSpace::copy() const
    { return std::make_unique< SampleSpace >(*this); }

    MultivariateDataFrame::Event::Event(const MultivariateDataFrame* data, const size_t& index)
    {
        _data = data;
        _index = index;
    }

    MultivariateDataFrame::Event::Event(const Event& event)
    { 
        _data = event._data;
        _index = event._index;
    }

    MultivariateDataFrame::Event::~Event()
    {}

    size_t MultivariateDataFrame::Event::size() const
    { return _data->get_nb_variables(); }

    const UnivariateEvent* MultivariateDataFrame::Event::get(const size_t& index) const
    {
        if(index >= size())
        { throw lower_bound_error("index", index, size(), true); }
        return _data->_variables[index]->get_event(_index);
    }

    std::unique_ptr< MultivariateEvent > MultivariateDataFrame::Event::copy() const
    { return std::make_unique< MultivariateDataFrame::Event >(*this); }

    MultivariateDataFrame::Event::Generator::Generator(const MultivariateDataFrame* data)
    { _event = new MultivariateDataFrame::Event(data, 0); }

    MultivariateDataFrame::Event::Generator::~Generator()
    { delete _event; }

    bool MultivariateDataFrame::Event::Generator::is_valid() const
    { return _event->_index < _event->_data->get_nb_events(); }

    MultivariateDataFrame::Generator& MultivariateDataFrame::Event::Generator::operator++()
    {
        ++(_event->_index);
        return *this;
    }

    const MultivariateEvent* MultivariateDataFrame::Event::Generator::event() const
    { return _event; }

    double MultivariateDataFrame::Event::Generator::weight() const
    { return 1.; }

    MultivariateDataFrame::UnivariateDataExtraction::UnivariateDataExtraction(const MultivariateDataFrame* data, const size_t& index)
    { _data = data->get_variable(index); }

    MultivariateDataFrame::UnivariateDataExtraction::~UnivariateDataExtraction()
    {}

    std::unique_ptr< UnivariateData::Generator > MultivariateDataFrame::UnivariateDataExtraction::generator() const
    { return _data->generator(); }

    const UnivariateSampleSpace* MultivariateDataFrame::UnivariateDataExtraction::get_sample_space() const
    { return _data->get_sample_space(); }

    std::unique_ptr< UnivariateData > MultivariateDataFrame::UnivariateDataExtraction::copy() const
    { return _data->copy(); }

    MultivariateDataFrame::MultivariateDataExtraction::MultivariateDataExtraction(const MultivariateDataFrame* data, const std::set< size_t >& indices)
    { 
        _data = data;
        _indices = std::vector< size_t >(indices.cbegin(), indices.cend());
        _sample_space = new SampleSpace(this);
    }

    MultivariateDataFrame::MultivariateDataExtraction::~MultivariateDataExtraction()
    { delete _sample_space; }

    std::unique_ptr< MultivariateData::Generator > MultivariateDataFrame::MultivariateDataExtraction::generator() const
    { return std::make_unique< Event::Generator >(this); }

    const MultivariateSampleSpace* MultivariateDataFrame::MultivariateDataExtraction::get_sample_space() const
    { return _sample_space; }

    std::unique_ptr< UnivariateData > MultivariateDataFrame::MultivariateDataExtraction::extract(const size_t& index) const
    { return _data->extract(_indices[index]); }

    std::unique_ptr< MultivariateData > MultivariateDataFrame::MultivariateDataExtraction::extract(const std::set< size_t >& indices) const
    {
        std::set< size_t > new_indices = std::set< size_t >();
        for(std::set< size_t >::const_iterator it = indices.cbegin(), it_end = indices.cend(); it != it_end; ++it)
        { new_indices.insert(new_indices.cend(), _indices[*it]); }
        return _data->extract(new_indices);
    }

    std::unique_ptr< MultivariateData > MultivariateDataFrame::MultivariateDataExtraction::copy() const
    { return std::unique_ptr< MultivariateData >(); }

    MultivariateDataFrame::MultivariateDataExtraction::SampleSpace::SampleSpace(const MultivariateDataExtraction* data)
    { _data = data; }

    MultivariateDataFrame::MultivariateDataExtraction::SampleSpace::~SampleSpace()
    {}

    size_t MultivariateDataFrame::MultivariateDataExtraction::SampleSpace::size() const
    { return _data->_indices.size(); }

    const UnivariateSampleSpace* MultivariateDataFrame::MultivariateDataExtraction::SampleSpace::get(const size_t& index) const
    { return _data->_data->_sample_space->get(_data->_indices[index]); }

    std::unique_ptr< MultivariateSampleSpace > MultivariateDataFrame::MultivariateDataExtraction::SampleSpace::copy() const
    { return std::unique_ptr< MultivariateSampleSpace >(); }

    MultivariateDataFrame::MultivariateDataExtraction::Event::Event(const MultivariateDataExtraction* data, const size_t& index)
    {
        _data = data;
        _index = index;
    }

    MultivariateDataFrame::MultivariateDataExtraction::Event::~Event()
    {}

    size_t MultivariateDataFrame::MultivariateDataExtraction::Event::size() const
    { return _data->_indices.size(); }

    const UnivariateEvent* MultivariateDataFrame::MultivariateDataExtraction::Event::get(const size_t& index) const
    {
        if(index >= size())
        { throw lower_bound_error("index", index, size(), true); }
        return _data->_data->_variables[_data->_indices[index]]->get_event(_index);
    }

    std::unique_ptr< MultivariateEvent > MultivariateDataFrame::MultivariateDataExtraction::Event::copy() const
    { return std::unique_ptr< MultivariateEvent >(); }

    MultivariateDataFrame::MultivariateDataExtraction::Event::Generator::Generator(const MultivariateDataExtraction* data)
    { _event = new MultivariateDataFrame::MultivariateDataExtraction::Event(data, 0); }

    MultivariateDataFrame::MultivariateDataExtraction::Event::Generator::~Generator()
    { delete _event; }

    bool MultivariateDataFrame::MultivariateDataExtraction::Event::Generator::is_valid() const
    { return _event->_index < _event->size(); }

    MultivariateData::Generator& MultivariateDataFrame::MultivariateDataExtraction::Event::Generator::operator++()
    { 
        ++(_event->_index);
        return *this;
    }

    const MultivariateEvent* MultivariateDataFrame::MultivariateDataExtraction::Event::Generator::event() const
    { return _event; }

    double MultivariateDataFrame::MultivariateDataExtraction::Event::Generator::weight() const
    { return 1.; }
}
