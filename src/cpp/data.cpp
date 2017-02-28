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
        _identifier = "V" + to_string(__index); 
        _ascii = "";
        _latex = "";
        ++__index;
    }

    NamedData::NamedData(const std::string& identifier)
    {
        _identifier = identifier;
        _ascii = "";
        _latex = "";
    }

    NamedData::NamedData(const NamedData& named_data)
    {
        _identifier = named_data._identifier;
        _ascii = named_data._ascii;
        _latex = named_data._latex;
    }

    NamedData::~NamedData()
    {}

    const std::string& NamedData::get_identifier() const
    { return _identifier; }

    void NamedData::set_identifier(const std::string& identifier)
    { _identifier = identifier; }

    const std::string& NamedData::get_ascii() const
    { return _ascii; }

    void NamedData::set_ascii(const std::string& ascii)
    { _ascii = ascii; }

    const std::string& NamedData::get_latex() const
    { return _latex; }

    void NamedData::set_latex(const std::string& latex)
    { _latex = latex; }

    UnivariateDataFrame::UnivariateDataFrame(const UnivariateSampleSpace& sample_space) : NamedData()
    {
        _sample_space = sample_space.copy().release();
        _events.clear();
        _locked = false;
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
        _events = data._events;
        _locked = false;
    }

    UnivariateDataFrame::~UnivariateDataFrame()
    {
        delete _sample_space;
        _sample_space = nullptr;
        for(size_t index = 0, max_index = get_nb_events(); index < max_index; ++index)
        {
            if(_events[index])
            { delete _events[index]; }
            _events[index] = nullptr;
        }
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

    void UnivariateDataFrame::lock()
    { _locked = true; }

    void UnivariateDataFrame::unlock()
    { _locked = false; }

    const bool& UnivariateDataFrame::is_locked() const
    { return _locked; }

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
        if(_locked)
        { throw std::runtime_error("data is locked"); }
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
        if(_locked)
        { throw std::runtime_error("data is locked"); }
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
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        std::unique_ptr< UnivariateEvent > event(_events.back());
        _events.pop_back();
        return event;
    }

    void UnivariateDataFrame::insert_event(const size_t& index, const UnivariateEvent* event)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
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
        if(_locked)
        { throw std::runtime_error("data is locked"); }
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
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        else
        { _weights[index] = weight; }
    }

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
    { return std::make_unique< MultivariateDataFrame::Generator >(this); }


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

    void MultivariateDataFrame::lock()
    {
        for(size_t index = 0, max_index = get_nb_variables(); index < max_index; ++index)
        { _variables[index]->lock(); }
    }

    void MultivariateDataFrame::unlock()
    {
        for(size_t index = 0, max_index = get_nb_variables(); index < max_index; ++index)
        { _variables[index]->unlock(); }
    }

    bool MultivariateDataFrame::is_locked() const
    {
        bool locked = get_nb_variables() > 0;
        if(locked)
        { locked = _variables.back()->is_locked(); }
        return locked;
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
        if(_variables[index]->is_locked())
        { throw std::runtime_error("data is locked"); }
        delete _variables[index];
        _variables[index] = static_cast< UnivariateDataFrame* >(variable.copy().release());
    }

    void MultivariateDataFrame::add_variable(const UnivariateDataFrame& variable)
    {  
        if(is_locked())
        { throw std::runtime_error("data is locked"); }
        if(get_nb_variables() != 0 && variable.get_nb_events() != get_nb_events())
        { throw size_error("variable", get_nb_events(), size_error::equal); }
        _variables.push_back(static_cast< UnivariateDataFrame* >(variable.copy().release()));
    }

    std::unique_ptr< UnivariateDataFrame > MultivariateDataFrame::pop_variable()
    {  
        if(is_locked())
        { throw std::runtime_error("data is locked"); }
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
        if(is_locked())
        { throw std::runtime_error("data is locked"); }
        std::vector< UnivariateDataFrame* >::iterator it = _variables.begin();
        advance(it, index);
        _variables.insert(it, static_cast< UnivariateDataFrame* >(variable.copy().release()));
    }

    void MultivariateDataFrame::remove_variable(const size_t& index)
    {
        if(index > get_nb_variables())
        { throw size_error("index", get_nb_variables(), size_error::inferior); }       
        if(_variables[index]->is_locked())
        { throw std::runtime_error("data is locked"); }
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
        if(is_locked())
        { throw std::runtime_error("data is locked"); }
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
        if(is_locked())
        { throw std::runtime_error("data is locked"); }
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
        if(is_locked())
        { throw std::runtime_error("data is locked"); }
        std::unique_ptr< VectorEvent > event = std::make_unique< VectorEvent >(get_nb_variables());
        for(size_t index = 0, max_index = get_nb_variables(); index < max_index; ++index)
        { event->set(index, *(_variables[index]->pop_event().get())); }
        return event;
    }

    void MultivariateDataFrame::insert_event(const size_t& index, const MultivariateEvent* event)
    {
        if(is_locked())
        { throw std::runtime_error("data is locked"); }
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
        if(is_locked())
        { throw std::runtime_error("data is locked"); }
        for(size_t _index = 0, _max_index = get_nb_variables(); _index < _max_index; ++_index)
        { _variables[_index]->remove_event(index); }
    } 

    // const MultivariateEvent* MultivariateDataFrame::get_event(const size_t& index) const
    // { return new Event(&index, this); }

    // void MultivariateDataFrame::set_event(const size_t& index, const MultivariateEvent* event)
    // {
    //     if(_locked)
    //     { throw std::runtime_error("data is locked"); }
    //     if(event)
    //     {
    //         for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
    //         {
    //             _variables[variable]->unlock();
    //             const UnivariateEvent* uevent = event->get(variable);
    //             if(uevent)
    //             { _variables[variable]->set_event(index, uevent->copy().release()); }
    //             else
    //             { _variables[variable]->set_event(index, uevent); }
    //             _variables[variable]->lock();
    //         }
    //     }
    //     else
    //     {
    //         for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
    //         {
    //             _variables[variable]->unlock();
    //             _variables[variable]->set_event(index, nullptr);
    //             _variables[variable]->lock();
    //         }
    //     }
    // }

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

    /*void MultivariateDataFrame::set_event(const size_t& index)
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(*this)
            {
                for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                {
                    _variables[variable]->unlock();
                    _variables[variable]->set_event(index);
                    _variables[variable]->lock();
                }
            }
            else
            { throw std::runtime_error("invalid"); } // TODO error
        }
    }

    void MultivariateDataFrame::set_event(const size_t& index, const std::shared_ptr< MultivariateEvent >& event)
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(event->size() == get_nb_variables())
            {
                if(*this)
                {
                    for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                    {
                        _variables[variable]->unlock();
                        _variables[variable]->set_event(index, event->get_event(variable));
                        _variables[variable]->lock();
                    }
                    // TODO try/catch if failure
                }
                else
                { throw std::runtime_error("invalid"); } // TODO error
            }
            else
            { throw std::runtime_error("incompatible"); } // TODO error
        }
    }

    void MultivariateDataFrame::remove_event()
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(*this)
            {
                size_t _size = size();
                for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                {
                    if(_variables[variable]->size() == _size)
                    {
                        _variables[variable]->unlock();
                        _variables[variable]->remove_event();
                        _variables[variable]->lock();
                    }
                }
            }
            else
            { throw std::runtime_error("invalid"); } // TODO error
        }
    }

    void MultivariateDataFrame::remove_event(const size_t& index)
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(*this)
            {
                for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                {
                    _variables[variable]->unlock();
                    _variables[variable]->remove_event(index);
                    _variables[variable]->lock();
                }
                // TODO try/catch if failure
            }
            else
            { throw std::runtime_error("invalid"); } // TODO error
        }
    }

    void MultivariateDataFrame::insert_event(const size_t& index)
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(*this)
            {
                for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                {
                    _variables[variable]->unlock();
                    _variables[variable]->insert_event(index);
                    _variables[variable]->lock();
                }
            }
            else
            { throw std::runtime_error("invalid"); } // TODO error
        }
    }

    void MultivariateDataFrame::insert_event(const size_t& index, const std::shared_ptr< MultivariateEvent >& event)
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(event->size() == get_nb_variables())
            {
                if(*this)
                {
                    for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                    {
                        _variables[variable]->unlock();
                        _variables[variable]->insert_event(index, event->get_event(variable)); 
                        _variables[variable]->lock();
                    }
                    // TODO try/catch if failure
                }
                else
                { throw std::runtime_error("invalid"); } // TODO error
            } 
            else
            { throw std::runtime_error("incompatible"); } // TODO error
        }
    }

    void MultivariateDataFrame::append_event()
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(*this)
            {
                for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                {
                    _variables[variable]->unlock();
                    _variables[variable]->append_event();
                    _variables[variable]->lock();
                }
            }
            else
            { throw std::runtime_error("invalid"); } // TODO error
        }
    }*
    
    void MultivariateDataFrame::append_event(const std::shared_ptr< MultivariateEvent >& event)
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(event->size() == get_nb_variables())
            {
                if(*this)
                {
                    for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                    {
                        _variables[variable]->unlock();
                        _variables[variable]->append_event(event->get_event(variable));
                        _variables[variable]->lock();
                    }
                    // TODO try/catch if failure    
                }
                else
                { throw std::runtime_error("invalid"); } // TODO error
            }
            else
            { throw std::runtime_error("incompatible"); } // TODO error
        }
    }*/

    /*bool MultivariateDataFrame::is_weighted() const
    { return false; }
    
    double MultivariateDataFrame::get_weight(const size_t& index) const
    { return 1.0; }

    size_t MultivariateDataFrame::get_nb_variables() const
    { return _variables.size(); }

    const std::shared_ptr< UnivariateData >& MultivariateDataFrame::get_variable(const size_t& index) const
    { return _variables[index]; }

    std::shared_ptr< MultivariateData > MultivariateDataFrame::get_variables(const std::set< size_t >& indices) const
    { 
        std::vector< std::shared_ptr< UnivariateData > > variables(indices.size());
        subset(_variables.cbegin(), _variables.cend(), variables.begin(), indices.cbegin(), indices.cend());
        return std::make_shared< MultivariateDataFrame >(variables); 
    }

    void MultivariateDataFrame::set_variable(const size_t& index, const std::shared_ptr< UnivariateData >& variable)
    { 
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        if(variable)
        {
            if(variable->is_weighted())
            { throw std::runtime_error("cannot contains weighted data"); }
            variable->lock();
            _variables[index] = variable;
        }
        else
        { throw nullptr_error("variable"); } 
    }

    void MultivariateDataFrame::insert_variable(const size_t& index, const std::shared_ptr< UnivariateData >& variable)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        if(variable)
        {
            if(variable->is_weighted())
            { throw std::runtime_error("cannot contains weighted data"); }
            variable->lock();
            std::vector< std::shared_ptr< UnivariateData > >::iterator it = _variables.begin();
            advance(it, index);
            _variables.insert(it, variable);
        }
        else
        { throw nullptr_error("variable"); }
    }

    void MultivariateDataFrame::remove_variable(const size_t& index)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        else
        {
            std::vector< std::shared_ptr< UnivariateData > >::iterator it = _variables.begin();
            advance(it, index);
            _variables.erase(it);
        }
    }

    void MultivariateDataFrame::append_variable(const std::shared_ptr< UnivariateData >& variable)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        if(variable)
        {
            if(variable->is_weighted())
            { throw std::runtime_error("cannot contains weighted data"); }
            variable->lock();
            _variables.push_back(variable);
        }
        else
        { throw nullptr_error("variable"); }
    }

    double MultivariateDataFrame::compute_total() const
    {
        double total;
        if(get_nb_variables() > 0)
        {
            total = std::numeric_limits< double >::infinity();
            for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
            { total = std::min(total, _variables[variable]->compute_total()); }
        }
        return total;
    }

    std::unique_ptr< MultivariateData > MultivariateDataFrame::copy() const
    { return std::make_unique< MultivariateDataFrame >(*this); }

    MultivariateDataFrame::Event::Event(const size_t* index, const MultivariateDataFrame * data)
    {
        _index = index;
        _data = data;
    }

    MultivariateDataFrame::Event::Event(const Event& event)
    {
        _index = event._index;
        _data = event._data;
    }

    size_t MultivariateDataFrame::Event::size() const
    { 
        if(!_data)
        { throw proxy_connection_error(); }
        return _data->get_nb_variables();
    }

    const UnivariateEvent* MultivariateDataFrame::Event::get(const size_t& index) const
    {
        if(!_index || !_data)
        { throw proxy_connection_error(); }
        return _data->_variables[index]->get_event(*_index);
    }

    void MultivariateDataFrame::Event::set(const size_t& index, const UnivariateEvent* event)
    {
        if(!_index || !_data)
        { throw proxy_connection_error(); }
        _data->_variables[index]->set_event(*_index, event);
    }

    std::unique_ptr< MultivariateEvent > MultivariateDataFrame::Event::copy() const
    { return std::make_unique< Event >(*this); }

    MultivariateDataFrame::SampleSpace::SampleSpace(MultivariateDataFrame* data)
    { _data = data; }

    MultivariateDataFrame::SampleSpace::SampleSpace(const SampleSpace& sample_space)
    { _data = sample_space._data; }

    MultivariateDataFrame::SampleSpace::~SampleSpace()
    {}

    size_t MultivariateDataFrame::SampleSpace::size() const
    { return _data->get_nb_variables(); }

    const UnivariateSampleSpace* MultivariateDataFrame::SampleSpace::get(const size_t& index) const
    { return _data->get_variable(index)->get_sample_space(); }
 
    std::unique_ptr< MultivariateSampleSpace > MultivariateDataFrame::SampleSpace::copy() const
    { return std::make_unique< MultivariateDataFrame::SampleSpace >(*this); }*/

}
