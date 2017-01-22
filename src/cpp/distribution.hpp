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
            // _pi = arma::normalise(arma::colvec(values.size(), arma::fill::ones));
        }
    
    // template<class T>
    //     UnivariateFrequencyDistribution< T >::UnivariateFrequencyDistribution(const std::set< typename T::event_type::value_type >& values, const arma::colvec& pi)
    //     {
    //         if(values.size() == 0)
    //         { throw size_error("values", 0, 0, size_error::superior); }
    //         if(values.size() != pi.size())
    //         { throw size_error("values", 0, values.size(), size_error::equal); }
    //         _values = values;
    //         set_pi(pi);
    //     }

    template<class T>
        UnivariateFrequencyDistribution< T >::UnivariateFrequencyDistribution(const UnivariateFrequencyDistribution< T >& frequency)
        {
            _values = frequency._values;
            // _pi = frequency._pi;
        }

    template<class T>
        unsigned int UnivariateFrequencyDistribution< T >::get_nb_parameters() const
        { return 0;/*_pi.size() - 1; */ }

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
            // else
            // { p = _pi[distance(_values.cbegin(), it)]; }
            return p;
        }
        
  //   template<class T>        
		// double UnivariateFrequencyDistribution< T >::pdf(const int& position) const
		// { 
  //           // return _pi[position];
  //           return 0;
  //       }
		
    template<class T>
        std::unique_ptr< UnivariateEvent > UnivariateFrequencyDistribution< T >::simulate() const
        {
            // double cp = _pi[0], sp = boost::uniform_01<boost::mt19937&>(get_random_generator())();
            typename std::set< typename T::event_type::value_type >::const_iterator it = _values.cbegin();
            // while(it != _values.cend() && cp < sp)
            // {
            //     ++it;
            //     cp += _pi[distance(_values.cbegin(), it)];
            // }
            // if(it == _values.cend())
            // { --it; }
            return std::make_unique< ElementaryEvent< typename T::event_type > >(*it);
        }

    template<class T>
        const std::set< typename T::event_type::value_type >& UnivariateFrequencyDistribution< T >::get_values() const
        { return _values; }

    // template<class T>
    //     const arma::colvec& UnivariateFrequencyDistribution< T >::get_pi() const
    //     { return _pi; }

    // template<class T>
    //     void UnivariateFrequencyDistribution< T >::set_pi(const arma::colvec& pi)
    //     {
    //     	if(pi.n_rows == _values.size()-1)
    //     	{
		  //   	size_t j=0; 
		  //   	while(pi[j] >= 0. && j<pi.n_rows)
		  //   	{ ++j; }
		  //   	if(j < pi.n_rows)
		  //   	{ throw parameter_error("pi", "contains negative values"); } 
		  //   	double norm = arma::norm(pi);
		  //   	if(norm<1)
		  //   	{
				// 	_pi.subvec(0,_values.size()-2) = pi;
				// 	_pi[_values.size()-1] = 1-norm;
		  //   	}
		  //   	else
		  //   	{ throw parameter_error("pi", "last category values"); } 		    	
    //     	}
    //     	else if(pi.n_rows == _values.size())
    //     	{
		  //   	size_t j=0; 
		  //   	while(pi[j] >= 0. && j<pi.n_rows)
		  //   	{ ++j; }
		  //   	if(j < pi.n_rows)
		  //   	{ throw parameter_error("pi", "contains negative values"); } 
		  //       _pi = arma::normalise(pi);
    //         }
    //         else
    //         { throw parameter_error("pi", "number of parameters"); } 	           
    //     }

    template<class T>
        double QuantitativeUnivariateFrequencyDistribution< T >::cdf(const typename T::event_type::value_type& value) const
        {
            double p = 0.;
            // typename std::set< typename T::event_type::value_type >::const_iterator it = this->_values.cbegin();
            // while(it != this->_values.cend() && *it <= value)
            // {
            //     p += this->_pi[distance(this->_values.cbegin(), it)];
            //     ++it;
            // }
            // if(it == this->_values.cend())
            // { p = 1.; }
            return p;
        }

    template<class T>
         typename T::event_type::value_type QuantitativeUnivariateFrequencyDistribution< T >::quantile(const double& p) const
        {
            double tp = 0.;
            typename T::event_type::value_type q;
            // typename std::set< typename T::event_type::value_type >::const_iterator it_begin = this->_values.cbegin(), it, it_end = this->_values.cend();
            // it = it_begin;
            // while(it != it_end && tp < p)
            // {
            //     tp += this->_pi[distance(it_begin, it)];
            //     ++it;
            // }
            // if(it != it_begin)
            // { --it; }
            // q = *it;
            return q;
        }

    template<class T>
        double QuantitativeUnivariateFrequencyDistribution< T >::get_mean() const
        {
            double mean = 0.;
            // for(typename std::set< typename T::event_type::value_type >::const_iterator it = this->_values.cbegin(), it_end = this->_values.cend(); it != it_end; ++it)
            // { mean += *it * this->_pi[distance(this->_values.cbegin(), it)]; }
            return mean;
        }

    template<class T>
        double QuantitativeUnivariateFrequencyDistribution< T >::get_variance() const
        {
            double mean = get_mean(), variance = 0.;
            // for(typename std::set< typename T::event_type::value_type >::const_iterator it = this->_values.cbegin(), it_end = this->_values.cend(); it != it_end; ++it)
            // { variance += pow(*it-mean, 2) * this->_pi[distance(this->_values.cbegin(), it)]; }
            return variance;
        }

    /*template<class D>
        IndependentMultivariateDistribution< D >::IndependentMultivariateDistribution(const std::vector< std::shared_ptr< typename D::marginal_type > >& marginals)
        {
            for(size_t variable = 0, max_variable = marginals.size(); variable < max_variable; ++variable)
            { 
                if(!marginals[variable])
                { throw std::runtime_error("empty"); }
            }
            _marginals = marginals;
        }

    template<class D>
        IndependentMultivariateDistribution< D >::IndependentMultivariateDistribution(const IndependentMultivariateDistribution< D >& independent)
        { _marginals = independent._marginals; }

    template<class D>
        std::shared_ptr< MultivariateSampleSpace > IndependentMultivariateDistribution< D >::get_sample_space() const
        {
            std::vector< std::shared_ptr< UnivariateSampleSpace > > sample_spaces(get_nb_variables());
            for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
            { sample_spaces[variable] = _marginals[variable]->get_sample_space(); }
            return std::make_shared< MultivariateSampleSpace >(sample_spaces);
        }

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
        double IndependentMultivariateDistribution< D >::probability(const MultivariateEvent& event, const bool& logarithm) const
        {
            double p = 0.;
            for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
            { p += _marginals[variable]->probability(*(event.get_event(variable)), true); }
            if(!logarithm)
            { p = exp(p); }
            return p; 
        }

    template<class D>
        const std::shared_ptr< typename D::marginal_type >& IndependentMultivariateDistribution< D >:: get_marginal(const size_t& index) const
        {
            if(index > get_nb_variables())
            { throw std::runtime_error("index"); }
            return _marginals[index];
        }


    template<class D>
        void IndependentMultivariateDistribution< D >::set_marginal(const size_t& index, const std::shared_ptr< typename D::marginal_type >& marginal) 
        {
            if(index > get_nb_variables())
            { throw std::runtime_error("index"); }
            if(_marginals[index]->get_sample_space()->get_outcome() != marginal->get_sample_space()->get_outcome())
            { throw std::runtime_error("outcome"); }
            _marginals[index] = marginal;
        }

    template<class D>
        std::shared_ptr< MultivariateEvent > IndependentMultivariateDistribution< D >::simulate() const
        {
            std::vector< std::shared_ptr< UnivariateEvent > > event(get_nb_variables());
            for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
            { event[variable] = _marginals[variable]->simulate(); }
            return std::make_shared< DetachedEvent >(event);
        }*/
}

#endif
