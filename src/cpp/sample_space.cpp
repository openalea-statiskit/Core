/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#include "sample_space.h"

namespace statiskit
{
    sample_space_error::sample_space_error(const std::string& parameter, const outcome_type& expected) : parameter_error(parameter, "expected " + to_string(expected) + " outcome")
    {}

    CategoricalSampleSpace::CategoricalSampleSpace(const std::set< std::string >& values)
    { _values = values; }

    CategoricalSampleSpace::CategoricalSampleSpace(const CategoricalSampleSpace& sample_space) 
    { 
    	_values = sample_space._values; 
    	_encoding = sample_space._encoding;
    }
    
    const std::set< std::string >& CategoricalSampleSpace::get_values() const
    { return _values; }
    
    encoding_type CategoricalSampleSpace::get_encoding() const
    { return _encoding; }
    
    size_t CategoricalSampleSpace::get_cardinality() const
    { return _values.size(); }

    outcome_type CategoricalSampleSpace::get_outcome() const
    { return CATEGORICAL; }

    bool CategoricalSampleSpace::is_compatible(const UnivariateEvent* event) const
    {
        bool compatible = !event;
        if(!compatible)
        {
            if(event->get_outcome() == CATEGORICAL)
            {
                switch(event->get_event())
                {
                    case ELEMENTARY:
                        compatible = _values.find(static_cast< const CategoricalElementaryEvent* >(event)->get_value()) != _values.cend();
                        break;
                    case SET:
                        {
                            const std::set< std::string >& __values = static_cast< const CategoricalSetCensoredEvent* >(event)->get_values();
                            std::set< std::string >::const_iterator it = __values.cbegin(), ite = __values.cend();
                            compatible = true;
                            while(compatible && it != ite)
                            {
                                compatible = _values.find(*it) != _values.cend();
                                ++it;
                            }
                        }
                        break;
                    default:
                        compatible = false;
                        break;
                }
            }
        }
        return compatible;
    }

    NominalSampleSpace::NominalSampleSpace(const std::set< std::string >& values) : CategoricalSampleSpace(values)
    { 
        _reference = _values.cend();
        --_reference;
        _encoding = TREATMENT;
    }

    NominalSampleSpace::NominalSampleSpace(const NominalSampleSpace& sample_space) : CategoricalSampleSpace(sample_space)
    {
        _reference = _values.cbegin();
        advance(_reference, distance(sample_space._values.cbegin(), sample_space._reference));
        _encoding = sample_space._encoding;
    }

    NominalSampleSpace::~NominalSampleSpace()
    {}

    ordering_type NominalSampleSpace::get_ordering() const
    { return NONE; }

    const std::string& NominalSampleSpace::get_reference() const
    { return *_reference; }

    void NominalSampleSpace::set_reference(const std::string& reference)
    {
        std::set< std::string >::const_iterator it = _values.find(reference);
        if(it != _values.cend())
        { _reference = it; }
        else
        { throw std::runtime_error("invalid reference"); }
    }
       
    void NominalSampleSpace::randomize()
    {
        _reference = _values.cbegin();
        boost::random::uniform_int_distribution<> dist(0, get_cardinality()-1);
        boost::variate_generator<boost::mt19937&, boost::random::uniform_int_distribution<>  > simulator(get_random_generator(), dist);
        advance(_reference, simulator());
    }

    void NominalSampleSpace::set_encoding(const encoding_type& encoding)
    {
        if(encoding > DEVIATION)
        { throw std::runtime_error("invalid encoding"); }
        _encoding = encoding;
    }

    // arma::rowvec NominalSampleSpace::encode(const std::string& value) const
    // {
    //     arma::rowvec dummy;
    //     size_t cardinality = get_cardinality();
    //     if(cardinality > 1)
    //     {
    //         --cardinality;
    //         std::set< std::string >::const_iterator it = _values.find(value);
    //         if(it == _values.cend())
    //         { dummy = std::numeric_limits< double >::quiet_NaN() * arma::rowvec(cardinality, arma::fill::ones); }
    //         else
    //         {
    //              size_t index = distance(_values.cbegin(), it), ref_index = distance(_values.cbegin(), _reference);
    //             switch(_encoding)
    //             {
    //                 case TREATMENT:
    //                     dummy = arma::rowvec(cardinality, arma::fill::zeros);
    //                     if(index < ref_index)
    //                     { dummy.at(index) = 1; }
    //                     else if(index > ref_index)
    //                     { 
    //                         --index;
    //                         dummy.at(index) = 1;
    //                     }
    //                     break;
    //                 case DEVIATION:
    //                     if(index == ref_index)
    //                     { dummy = -1 * arma::rowvec(cardinality, arma::fill::ones); }
    //                     else
    //                     {
    //                         dummy = arma::rowvec(cardinality, arma::fill::zeros);
    //                         if(index < ref_index)
    //                         { dummy.at(index) = 1; }
    //                         else if(index > ref_index)
    //                         { 
    //                             --index;
    //                             dummy.at(index) = 1;
    //                         }
    //                     }
    //                     break;
    //                 default:
    //                     break;
    //             }
    //         }
    //     }
    //     else
    //     { dummy = arma::rowvec(); }
    //     return dummy;
    // }

    std::unique_ptr< UnivariateSampleSpace > NominalSampleSpace::copy() const
    { return std::make_unique< NominalSampleSpace >(*this); }

    OrdinalSampleSpace::OrdinalSampleSpace(const std::vector< std::string >& values) : CategoricalSampleSpace(std::set< std::string >(values.cbegin(), values.cend()))
    {
        _encoding = CUMULATIVE;
        _rank = std::vector< size_t >(_values.size());
        for(size_t size = 0, max_size = _values.size(); size < max_size; ++size)
        { _rank[distance(_values.begin(), _values.find(values[size]))] = size; }
    }

    OrdinalSampleSpace::OrdinalSampleSpace(const OrdinalSampleSpace& sample_space) : CategoricalSampleSpace(sample_space)
    {
        _rank = sample_space._rank;
        _encoding = sample_space._encoding;
    }

    OrdinalSampleSpace::~OrdinalSampleSpace()
    {}

    ordering_type OrdinalSampleSpace::get_ordering() const
    { return TOTAL; }

    void OrdinalSampleSpace::set_encoding(const encoding_type& encoding)
    { _encoding = encoding; }

    // arma::rowvec OrdinalSampleSpace::encode(const std::string& value) const
    // {
    //     arma::rowvec dummy;
    //     size_t cardinality = get_cardinality();
    //     if(cardinality > 1)
    //     {
    //         --cardinality;
    //         std::set< std::string >::const_iterator it = _values.find(value);
    //         if(it == _values.cend())
    //         { dummy = std::numeric_limits< double >::quiet_NaN() * arma::rowvec(cardinality, arma::fill::ones); }
    //         else
    //         {
    //             switch(_encoding)
    //             {
    //                 case CUMULATIVE:
    //                     dummy = arma::rowvec(cardinality, arma::fill::zeros);
    //                     for(size_t index = 0, max_index = _rank[distance(_values.cbegin(), it)]; index < max_index; ++index)
    //                     { dummy.at(index) = 1; } 
    //                     break;
    //             }
    //         }
    //     }
    //     else
    //     { dummy = arma::rowvec(); }
    //     return dummy;
    // }

    std::vector< std::string > OrdinalSampleSpace::get_ordered() const
    {
        std::vector< std::string > values(get_cardinality());
        for(std::set< std::string >::const_iterator it = _values.cbegin(), ite = _values.cend(); it != ite; ++it)
        { values[_rank[distance(_values.cbegin(), it)]] = *it; }
        return values;
    }

    const std::vector< size_t >& OrdinalSampleSpace::get_rank() const
    { return _rank; }

    void OrdinalSampleSpace::set_rank(const std::vector< size_t >& rank)
    {
        if(rank.size() != _values.size())
        { throw std::runtime_error("rank"); }
        std::set< size_t > order = std::set< size_t >();
        for(size_t size = 0, max_size = _values.size(); size < max_size; ++size)
        { order.insert(order.end(), size); }
        for(size_t size = 0, max_size = _values.size(); size < max_size; ++size)
        {
            std::set< size_t >::iterator it = order.find(rank[size]);
            if(it == order.end())
            { throw std::runtime_error("rank"); }
            order.erase(it);
        }
        if(order.size() != 0)
        { throw std::runtime_error("rank"); }
        _rank = rank;
    }

    void OrdinalSampleSpace::randomize()
    {
        std::set< std::string >::iterator ita = _values.begin(), ite = _values.end();
        ++ita;
        while(ita != ite)
        {
            std::set< std::string >::iterator itb = _values.begin();
            boost::random::uniform_int_distribution<> dist(0, distance(_values.begin(), ita));
            boost::variate_generator<boost::mt19937&, boost::random::uniform_int_distribution<>  > simulator(get_random_generator(), dist);
            advance(itb, simulator());
            size_t buffer = _rank[distance(_values.cbegin(), ita)];
            _rank[distance(_values.cbegin(), ita)] = _rank[distance(_values.cbegin(), itb)];
            _rank[distance(_values.cbegin(), itb)] = buffer;
            ++ita;
        }
    }

    std::unique_ptr< UnivariateSampleSpace > OrdinalSampleSpace::copy() const
    { return std::make_unique< OrdinalSampleSpace >(*this); }

    outcome_type DiscreteSampleSpace::get_outcome() const
    { return DISCRETE; }

    ordering_type DiscreteSampleSpace::get_ordering() const
    { return TOTAL; }

    IntegerSampleSpace::IntegerSampleSpace(const int& lower_bound, const int& upper_bound)
    {
        _lower_bound = lower_bound;
        _upper_bound = upper_bound;
    }

    IntegerSampleSpace::~IntegerSampleSpace()
    {}

    bool IntegerSampleSpace::is_compatible(const UnivariateEvent* event) const
    {
        bool compatible = !event;
        if(!compatible)
        {
            if(event->get_outcome() == DISCRETE)
            {
                switch(event->get_event())
                {
                    case ELEMENTARY:
                        {
                            int value = static_cast< const DiscreteElementaryEvent* >(event)->get_value();
                            compatible = value >= _lower_bound && value <= _upper_bound;
                        }    
                        break;
                    case SET:
                        {
                            const std::set< int >& __values = static_cast< const DiscreteSetCensoredEvent* >(event)->get_values();
                            std::set< int >::const_iterator it = __values.cbegin(), ite = __values.cend();
                            compatible = true;
                            while(compatible && it != ite)
                            {
                                compatible = *it >= _lower_bound && *it <= _upper_bound;
                                ++it;
                            }
                        }
                        break;
                    case LEFT:
                        if(_lower_bound == std::numeric_limits< int >::min())
                        {
                            int value = static_cast< const DiscreteLeftCensoredEvent* >(event)->get_upper_bound();
                            compatible = value >= _lower_bound && value <= _upper_bound;
                        }
                        else
                        { compatible = false; }
                        break;
                    case RIGHT:
                        if(_upper_bound == std::numeric_limits< int >::max())
                        {
                            int value = static_cast< const DiscreteRightCensoredEvent* >(event)->get_lower_bound();
                            compatible = value >= _lower_bound && value <= _upper_bound;
                        }
                        else
                        { compatible = false; }
                        break;
                    case INTERVAL:
                        {
                            int value = static_cast< const DiscreteIntervalCensoredEvent* >(event)->get_upper_bound();
                            compatible = value >= _lower_bound && value <= _upper_bound;
                            if(compatible)
                            {
                                value = static_cast< const DiscreteIntervalCensoredEvent* >(event)->get_upper_bound();
                                compatible = value >= _lower_bound && value <= _upper_bound;
                            }
                        }
                        break;
                }
            }
        }
        return compatible;
    }

    const int& IntegerSampleSpace::get_lower_bound() const
    { return _lower_bound; }

    const int& IntegerSampleSpace::get_upper_bound() const
    { return _upper_bound; }

    std::unique_ptr< UnivariateSampleSpace > IntegerSampleSpace::copy() const
    { return std::make_unique< IntegerSampleSpace >(*this); }

    const IntegerSampleSpace NN = IntegerSampleSpace(0);

    const IntegerSampleSpace& get_NN()
    { return NN; }

    const IntegerSampleSpace ZZ = IntegerSampleSpace();

    const IntegerSampleSpace& get_ZZ()
    { return ZZ; }

    outcome_type ContinuousSampleSpace::get_outcome() const
    { return CONTINUOUS; }

    ordering_type ContinuousSampleSpace::get_ordering() const
    { return TOTAL; }

    RealSampleSpace::RealSampleSpace(const double& lhs, const double& rhs, const bool& left_closed, const bool& right_closed)
    {
        if(lhs < rhs)
        {
            _lower_bound = lhs;
            _upper_bound = rhs;
        }
        else
        {
            _lower_bound = rhs;
            _upper_bound = lhs;
        }
        _left_closed = left_closed && !boost::math::isinf(_lower_bound);
        _right_closed = right_closed && !boost::math::isinf(_upper_bound);
    }

    RealSampleSpace::~RealSampleSpace()
    {}

    bool RealSampleSpace::is_compatible(const UnivariateEvent* event) const
    {
        bool compatible = !event;
        if(!compatible)
        {
            if(event->get_outcome() == CONTINUOUS)
            {
                switch(event->get_event())
                {
                    case ELEMENTARY:
                        {
                            double value = static_cast< const ContinuousElementaryEvent* >(event)->get_value();
                            compatible = boost::math::isfinite(value);
                            if(compatible)
                            {
                                if(_left_closed)
                                { compatible = value >= _lower_bound; }
                                else
                                { compatible = value > _lower_bound; }
                                if(compatible)
                                {
                                    if(_right_closed)
                                    { compatible = value <= _upper_bound; }
                                    else
                                    { compatible = value < _upper_bound; }
                                }
                            }
                        }    
                        break;
                    case SET:
                        {
                            const std::set< double >& __values = static_cast< const ContinuousSetCensoredEvent* >(event)->get_values();
                            std::set< double >::const_iterator it = __values.cbegin(), ite = __values.cend();
                            compatible = true;
                            while(compatible && it != ite)
                            {
                                compatible = boost::math::isfinite(*it);
                                if(compatible)
                                {
                                    if(_left_closed)
                                    { compatible = *it >= _lower_bound; }
                                    else
                                    { compatible = *it > _lower_bound; }
                                    if(compatible)
                                    {
                                        if(_right_closed)
                                        { compatible = *it <= _upper_bound; }
                                        else
                                        { compatible = *it < _upper_bound; }
                                    }
                                }
                                ++it;
                            }
                        }
                        break;
                    case LEFT:
                        if(boost::math::isinf(_lower_bound) and _lower_bound < 0)
                        {
                            double value = static_cast< const ContinuousLeftCensoredEvent* >(event)->get_upper_bound();
                            compatible = boost::math::isfinite(value) && value >= _lower_bound && value <= _upper_bound;
                        }
                        else
                        { compatible = false; }
                        break;
                    case RIGHT:
                        if(boost::math::isinf(_upper_bound) and _upper_bound > 0)
                        {
                            double value = static_cast< const ContinuousRightCensoredEvent* >(event)->get_lower_bound();
                            compatible = boost::math::isfinite(value) && value >= _lower_bound && value <= _upper_bound;
                        }
                        else
                        { compatible = false; }
                        break;
                    case INTERVAL:
                        {
                            double value = static_cast< const ContinuousIntervalCensoredEvent* >(event)->get_upper_bound();
                        compatible = boost::math::isfinite(value) && value >= _lower_bound && value <= _upper_bound;
                            if(compatible)
                            {
                                value = static_cast< const ContinuousIntervalCensoredEvent* >(event)->get_upper_bound();
                                compatible = boost::math::isfinite(value) && value >= _lower_bound && value <= _upper_bound;
                            }
                        }
                        break;
                }
            }
        }
        return compatible;
    }

    const double& RealSampleSpace::get_lower_bound() const
    { return _lower_bound; }

    const double& RealSampleSpace::get_upper_bound() const
    { return _upper_bound; }

    const bool& RealSampleSpace::get_left_closed() const
    { return _left_closed; }

    const bool& RealSampleSpace::get_right_closed() const
    { return _right_closed; }
    
    std::unique_ptr< UnivariateSampleSpace > RealSampleSpace::copy() const
    { return std::make_unique< RealSampleSpace >(*this); }

    const RealSampleSpace RR = RealSampleSpace();

    const RealSampleSpace& get_RR()
    { return RR; }

    const RealSampleSpace PR = RealSampleSpace(0);

    const RealSampleSpace& get_PR()
    { return PR; }

    const RealSampleSpace NR = RealSampleSpace(-1*std::numeric_limits< double >::infinity(), 0);

    const RealSampleSpace& get_NR()
    { return NR; }

    /*Eigen::MatrixXd MultivariateSampleSpace::encode(const MultivariateEvent& event, const std::set< std::set<size_t> >& interactions) const
    {
        Eigen::MatrixXd dummy = Eigen::MatrixXd::Zero(1, compute_encode_length(interactions));
        size_t dindex = 0;
        for(size_t index = 0, max_index = size(); index < max_index; ++index)
        {
            if(_sample_spaces[index]->get_outcome() == CATEGORICAL)
            {
                Eigen::MatrixXd tdummy;
                if(event[index].get_event() == ELEMENTARY)
                { tdummy = boost::static_pointer_cast< CategoricalSampleSpace >(_sample_spaces[index])->encode(static_cast< const CategoricalElementaryEvent& >(event[index]).get_outcome()) ; }
                else
                { 
                    size_t cardinality = boost::static_pointer_cast< CategoricalSampleSpace >(_sample_spaces[index])->get_cardinality();
                    if(cardinality > 1)
                    { tdummy = Eigen::MatrixXd::Constant(1, cardinality-1, NAN) ; }
                    else
                    { tdummy = Eigen::MatrixXd::Zero(1,0); }
                }
                dummy.block(0, dindex, 1, tdummy.cols()) = tdummy;
                dindex += tdummy.cols();
            }
            else
            {
                if(event[index].get_event() == ELEMENTARY)
                {
                    if(event[index].get_outcome() == DISCRETE)
                    { dummy(0, index) = static_cast< const DiscreteElementaryEvent& >(event[index]).get_outcome(); }
                    else if(event[index].get_outcome() == CONTINUOUS)
                    { dummy(0, index) = static_cast< const ContinuousElementaryEvent& >(event[index]).get_outcome(); }
                    else
                    { dummy(0, index) = NAN; }
                }
                else
                { dummy(0, dindex) = NAN; }
                ++dindex;
            }
        }
        for(std::set< std::set<size_t> >::const_iterator it = interactions.cbegin(), ite = interactions.cend(); it != ite; ++it)
        {
            for(std::set<size_t>::const_iterator itb = it->cbegin(), itbe = it->cend(); itb != itbe; ++itb)
            {
                Eigen::MatrixXd tdummy = Eigen::MatrixXd::Ones(1,1);
                if(_sample_spaces[*itb]->get_outcome() == CATEGORICAL)
                {
                    if(event[*itb].get_event() == ELEMENTARY)
                    { tdummy = Eigen::kroneckerProduct(tdummy, boost::static_pointer_cast< CategoricalSampleSpace >(_sample_spaces[*itb])->encode(static_cast< const CategoricalElementaryEvent& >(event[*itb]).get_outcome())).eval(); }
                    else
                    { 
                        size_t cardinality = boost::static_pointer_cast< CategoricalSampleSpace >(_sample_spaces[*itb])->get_cardinality();
                        if(cardinality > 1)
                        { tdummy = Eigen::kroneckerProduct(tdummy, Eigen::MatrixXd::Constant(1, cardinality-1, NAN)).eval(); }
                        else
                        { tdummy = Eigen::MatrixXd::Zero(1,0); }
                    }
                }
                else
                {
                    if(event[*itb].get_event() == ELEMENTARY)
                    {
                        if(event[*itb].get_outcome() == DISCRETE)
                        { tdummy *= static_cast< const DiscreteElementaryEvent& >(event[*itb]).get_outcome(); }
                        else if(event[*itb].get_outcome() == CONTINUOUS)
                        { tdummy *= static_cast< const ContinuousElementaryEvent& >(event[*itb]).get_outcome(); }
                        else
                        { tdummy *= NAN; }
                    }
                    else
                    { tdummy *= NAN; }
                }
                dummy.block(0, dindex, 1, tdummy.cols()) = tdummy;
                dindex += tdummy.cols();
            }
        }
        return dummy;
    }*/

    /*MultivariateSampleSpace::MultivariateSampleSpace(const std::vector< std::shared_ptr< UnivariateSampleSpace > >& sample_spaces)
    { _sample_spaces = sample_spaces; }

    MultivariateSampleSpace::MultivariateSampleSpace(const MultivariateSampleSpace& sample_space)
    {
        _sample_spaces.resize(sample_space.size());
        for(size_t index = 0, max_index = sample_space.size(); index < max_index; ++index)
        {
            std::shared_ptr< UnivariateSampleSpace > marginal_sample_space = sample_space.get_sample_space(index);
            if(marginal_sample_space)
            {
                if(marginal_sample_space->get_outcome() == CATEGORICAL)
                { _sample_spaces[index] = std::shared_ptr< UnivariateSampleSpace >(marginal_sample_space->copy()); }
                else
                { _sample_spaces[index] = marginal_sample_space; }
            }
        }
    }

    MultivariateSampleSpace::~MultivariateSampleSpace()
    {}

    size_t MultivariateSampleSpace::size() const
    { return _sample_spaces.size(); }

    const std::shared_ptr< UnivariateSampleSpace >& MultivariateSampleSpace::get_sample_space(const size_t& index) const
    { return _sample_spaces[index]; }*/

    size_t MultivariateSampleSpace::encode() const
    {
        size_t _size = 0;
        for(size_t index = 0, max_index = size(); index< max_index; ++index)
        {
            const UnivariateSampleSpace* sample_space = get(index);
            if(sample_space->get_outcome() == CATEGORICAL)
            {
                _size += static_cast< const CategoricalSampleSpace* >(sample_space)->get_cardinality();
                _size -= 1;
            }
            else
            { _size += 1; }
        }
        return _size;
    }

    // arma::rowvec MultivariateSampleSpace::encode(const MultivariateEvent& event) const
    // {
    //     arma::rowvec dummy;
    //     if(event.size() != size())
    //     { dummy = std::numeric_limits< double >::quiet_NaN() * arma::rowvec(encode()); }
    //     else
    //     {
    //         size_t shift = 0;
    //         dummy = arma::rowvec(encode());
    //         arma::rowvec temp;
    //         for(size_t index = 0, max_index = size(); index< max_index; ++index)
    //         {
    //             const UnivariateEvent* uevent = event.get(index);
    //             if(uevent->get_event() == ELEMENTARY)
    //             {
    //                 const UnivariateSampleSpace* sample_space = get(index);
    //                 switch(sample_space->get_outcome())
    //                 {
    //                     case CATEGORICAL:
    //                         {
    //                             temp = arma::fliplr(static_cast< const CategoricalSampleSpace* >(sample_space)->encode(static_cast< const CategoricalElementaryEvent* >(uevent)->get_value()));
    //                             size_t max_size = index + shift + temp.n_cols;
    //                             while(index + shift < max_size)
    //                             {
    //                                 dummy.at(index + shift) = temp.at(max_size - index - shift - 1);
    //                                 ++shift;
    //                             }
    //                         }
    //                         break;
    //                     case DISCRETE:
    //                         dummy.at(index + shift) = static_cast< const DiscreteElementaryEvent* >(uevent)->get_value();
    //                         break;
    //                     case CONTINUOUS:
    //                         dummy.at(index + shift) = static_cast< const ContinuousElementaryEvent* >(uevent)->get_value();
    //                         break;
    //                 }
    //             }
    //             else
    //             {
    //                 const UnivariateSampleSpace* sample_space = get(index);
    //                 if(sample_space->get_outcome() == CATEGORICAL)
    //                 {
    //                     size_t max_size = index + shift + static_cast< const CategoricalSampleSpace* >(sample_space)->get_cardinality();
    //                     while(index + shift < max_size)
    //                     {
    //                         dummy.at(index + shift) = std::numeric_limits< double >::quiet_NaN();
    //                         ++shift;
    //                     }
    //                 }
    //                 else
    //                 { dummy.at(index + shift) = std::numeric_limits< double >::quiet_NaN(); }
    //             }
    //         }
    //     }
    //     return dummy;
    // }
}
