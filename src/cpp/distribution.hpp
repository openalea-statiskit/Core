/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_DISTRIBUTION_HPP
#define STATISKIT_CORE_DISTRIBUTION_HPP

namespace statiskit
{
    template<class T>
        UnivariateFrequencyDistribution< T >::UnivariateFrequencyDistribution(const std::set< typename T::event_type::value_type >& values)
        {
            if(values.size() == 0)
            { throw size_error("values", 0, 0, size_error::superior); }
            _values = values;
            _pi = Eigen::VectorXd::Ones(values.size());
            _pi.normalize();
        }
    
    template<class T>
        UnivariateFrequencyDistribution< T >::UnivariateFrequencyDistribution(const std::set< typename T::event_type::value_type >& values, const Eigen::VectorXd& pi)
        {
            if(values.size() == 0)
            { throw size_error("values", 0, 0, size_error::superior); }
            if(values.size() != pi.size())
            { throw size_error("values", 0, values.size(), size_error::equal); }
            _values = values;
            set_pi(pi);
        }

    template<class T>
        UnivariateFrequencyDistribution< T >::UnivariateFrequencyDistribution(const UnivariateFrequencyDistribution< T >& frequency)
        {
            _values = frequency._values;
            _pi = frequency._pi;
        }

    template<class T>
        unsigned int UnivariateFrequencyDistribution< T >::get_nb_parameters() const
        { return _pi.size() - 1; }

    template<class T>
        double UnivariateFrequencyDistribution< T >::ldf(const typename T::event_type::value_type& value) const
        { return log(pdf(value)); }
    
    template<class T>
        double UnivariateFrequencyDistribution< T >::pdf(const typename T::event_type::value_type& value) const
        {
            double p;
            typename std::set< typename T::event_type::value_type >::const_iterator it = _values.find(value);
            if(it == _values.end())
            { p = 0.; }
            else
            { p = _pi[distance(_values.cbegin(), it)]; }
            return p;
        }
        
    template<class T>
        std::unique_ptr< UnivariateEvent > UnivariateFrequencyDistribution< T >::simulate() const
        {
            double cp = _pi[0], sp = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
            typename std::set< typename T::event_type::value_type >::const_iterator it = _values.cbegin();
            while(it != _values.cend() && cp < sp)
            {
                ++it;
                cp += _pi[distance(_values.cbegin(), it)];
            }
            if(it == _values.cend())
            { --it; }
            return std::make_unique< ElementaryEvent< typename T::event_type > >(*it);
        }

    template<class T>
        const std::set< typename T::event_type::value_type >& UnivariateFrequencyDistribution< T >::get_values() const
        { return _values; }

    template<class T>
        const Eigen::VectorXd& UnivariateFrequencyDistribution< T >::get_pi() const
        { return _pi; }

    template<class T>
        void UnivariateFrequencyDistribution< T >::set_pi(const Eigen::VectorXd& pi)
        {
        	if(pi.rows() == _values.size()-1)
        	{
		    	size_t j=0; 
		    	while(pi[j] >= 0. && j<pi.rows())
		    	{ ++j; }
		    	if(j < pi.rows())
		    	{ throw parameter_error("pi", "contains negative values"); } 
		    	double norm = pi.norm();
		    	if(norm < 1)
		    	{
					_pi.block(0, 0, _values.size()-1, 1) = pi;
					_pi[_values.size()-1] = 1 - norm;
		    	}
		    	else
		    	{ throw parameter_error("pi", "last category values"); } 		    	
        	}
        	else if(pi.rows() == _values.size())
        	{
		    	size_t j=0; 
		    	while(pi[j] >= 0. && j<pi.rows())
		    	{ ++j; }
		    	if(j < pi.rows())
		    	{ throw parameter_error("pi", "contains negative values"); } 
		        _pi = pi.normalized();
            }
            else
            { throw parameter_error("pi", "number of parameters"); } 	           
        }

    template<class T>
        double QuantitativeUnivariateFrequencyDistribution< T >::cdf(const typename T::event_type::value_type& value) const
        {
            double p = 0.;
            typename std::set< typename T::event_type::value_type >::const_iterator it = this->_values.cbegin();
            while(it != this->_values.cend() && *it <= value)
            {
                p += this->_pi[distance(this->_values.cbegin(), it)];
                ++it;
            }
            if(it == this->_values.cend())
            { p = 1.; }
            return p;
        }

    template<class T>
         typename T::event_type::value_type QuantitativeUnivariateFrequencyDistribution< T >::quantile(const double& p) const
        {
            double tp = 0.;
            typename T::event_type::value_type q;
            typename std::set< typename T::event_type::value_type >::const_iterator it_begin = this->_values.cbegin(), it, it_end = this->_values.cend();
            it = it_begin;
            while(it != it_end && tp < p)
            {
                tp += this->_pi[distance(it_begin, it)];
                ++it;
            }
            if(it != it_begin)
            { --it; }
            q = *it;
            return q;
        }

    template<class T>
        double QuantitativeUnivariateFrequencyDistribution< T >::get_mean() const
        {
            double mean = 0.;
            for(typename std::set< typename T::event_type::value_type >::const_iterator it = this->_values.cbegin(), it_end = this->_values.cend(); it != it_end; ++it)
            { mean += *it * this->_pi[distance(this->_values.cbegin(), it)]; }
            return mean;
        }

    template<class T>
        double QuantitativeUnivariateFrequencyDistribution< T >::get_variance() const
        {
            double mean = get_mean(), variance = 0.;
            for(typename std::set< typename T::event_type::value_type >::const_iterator it = this->_values.cbegin(), it_end = this->_values.cend(); it != it_end; ++it)
            { variance += pow(*it-mean, 2) * this->_pi[distance(this->_values.cbegin(), it)]; }
            return variance;
        }

    template<class T>
        std::unique_ptr< UnivariateDistribution > QuantitativeUnivariateFrequencyDistribution< T >::copy() const
        { return std::make_unique< QuantitativeUnivariateFrequencyDistribution< T > >(*this); }

    template<class D>
        IndependentMultivariateDistribution< D >::IndependentMultivariateDistribution(const std::vector< typename D::marginal_type >& marginals)
        {
            _marginals.resize(marginals.size(), nullptr);
            for(size_t variable = 0, max_variable = marginals.size(); variable < max_variable; ++variable)
            { _marginals[variable] = static_cast< typename D::marginal_type* >(marginals[index].copy().release()); }
        }

    template<class D>
        IndependentMultivariateDistribution< D >::IndependentMultivariateDistribution(const IndependentMultivariateDistribution< D >& independent)
        {
            _marginals.resize(independent.get_nb_variables(), nullptr);
            for(size_t variable = 0, max_variable = independent.get_nb_variables(); variable < max_variable; ++variable)
            { _marginals[variable] = static_cast< typename D::marginal_type* >(independent._marginals[variable]->copy().release()); }
         }

    template<class D>
        IndependentMultivariateDistribution< D >::~IndependentMultivariateDistribution()
        {
            for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
            {
                if(_marginals[variable])
                { 
                    delete _marginals[variable];
                    _marginals[variable] = nullptr;
                }
            }
            _marginals.clear();
        }

    template<class D>
        std::unique_ptr< MultivariateSampleSpace > IndependentMultivariateDistribution< D >::get_sample_space() const
        {
            std::vector< UnivariateSampleSpace* > sample_spaces(get_nb_variables(), nullptr);
            for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
            { sample_spaces[variable] = _marginals[variable]->get_sample_space().release(); }
            return std::make_unique< VectorSampleSpace >(sample_spaces);
            for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
            { 
                delete sample_spaces[variable];
                sample_spaces[variable] = nullptr;
            }
        }

    // template<class D>
    //     std::unique_ptr< MultivariateSampleSpace > IndependentMultivariateDistribution< D >::get_sample_space() const
    //     {
    //         std::vector< std::unique_ptr< UnivariateSampleSpace > > sample_spaces(get_nb_variables());
    //         for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
    //         { sample_spaces.push_back(_marginals[variable]->get_sample_space()); }
    //         return std::make_unique< VectorSampleSpace >(sample_spaces);
    //     }
        
    template<class D>
        size_t IndependentMultivariateDistribution< D >::get_nb_variables() const
        { return _marginals.size(); }

    template<class D>
        unsigned int IndependentMultivariateDistribution< D >::get_nb_parameters() const
        {
            unsigned int nb_parameters = 0;
            for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
            { nb_parameters += _marginals[variable]->get_nb_parameters(); }
            return nb_parameters; 
        }

    template<class D>
        double IndependentMultivariateDistribution< D >::probability(const MultivariateEvent* event, const bool& logarithm) const
        {
            double p = 0.;
            if(event)
            {
                if(event->size() == get_nb_variables())
                {
                    for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                    { p += _marginals[variable]->probability(event->get(variable), true); }
                }
                else
                { throw size_error("event", get_nb_variables(), size_error::equal); }
                if(!logarithm)
                { p = exp(p); }
            }
            else if(logarithm)
            { p = 0.; }
            else
            { p = 1.; }
            return p; 
        }

    template<class D>
        typename D::marginal_type* IndependentMultivariateDistribution< D >:: get_marginal(const size_t& index) const
        {
            if(index > get_nb_variables())
            { throw size_error("index", get_nb_variables(), size_error::inferior); }
            return _marginals[index];
        }


    template<class D>
        void IndependentMultivariateDistribution< D >::set_marginal(const size_t& index, const typename D::marginal_type& marginal) 
        {
            if(index > get_nb_variables())
            { throw size_error("index", get_nb_variables(), size_error::inferior); }
            if(_marginals[index]->get_sample_space()->get_outcome() != marginal.get_sample_space()->get_outcome())
            { throw parameter_error("marginal", "incompatible sample space"); }
            delete _marginals[index];
            _marginals[index] = static_cast< typename D::marginal_type* >(marginal.copy().release());
        }

    template<class D>
        std::unique_ptr< MultivariateEvent > IndependentMultivariateDistribution< D >::simulate() const
        {
            std::unique_ptr< VectorEvent > event = std::make_unique< VectorEvent >(get_nb_variables());
            for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
            { event->set(variable, *(_marginals[variable]->simulate().get())); }
            return event;
        }
}

#endif
