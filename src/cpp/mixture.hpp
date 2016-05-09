/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_MIXTURE_HPP
#define STATISKIT_CORE_MIXTURE_HPP

namespace statiskit
{
    /*template<class O>
        MixtureDistribution< O >::MixtureDistribution(const std::shared_ptr< CategoricalUnivariateDistribution >& latent, const std::shared_ptr< O >& observed)
        {
            if(!latent)
            { throw std::runtime_error("None"); }
            _latent = latent;
            if(!observed)
            { throw std::runtime_error("None"); }
            _observed = observed;
        }

    template<class O>
        MixtureDistribution< O >::MixtureDistribution(const MixtureDistribution< O >& mixture)
        {
            _latent = mixture._latent;
            _observed = mixture._observed;
        }

    template<class O>
        unsigned int MixtureDistribution< O >:get_nb_parameters() const
        { return _latent->get_nb_parameters() + _observed->get_nb_parameters(); }

    template<class O>
        double UnivariateMixtureDistribution< O >:ldf(const typename O::event_type::value_type& value) const
        { return log(pdf(value)); }

    template<class O>
        double UnivariateMixtureDistribution< O >:pdf(const typename O::event_type::value_type& value) const
        { 
            const std::set< std::string >& states = latent->get_values();
            std::set< std::string >::const_iterator it = states.cbegin(), it_end = states.cend();
            DetachedEvent state(std::vector< std::shared_ptr< UnivariateEvent > >(1, std::make_shared< CategoricalElementaryEvent >(*it)));
            double p = 0.;
            while(it != it_end)
            {
                observed->conditioning(state);
                p += latent->pdf(*(state.get(0))) * observed->pdf(value);
                ++it;
            }
            return p;
        }

    template<class O>
        double QuantitativeUnivariateMixtureDistribution< O >:cdf(const typename O::event_type::value_type& value) const
        { 
            const std::set< std::string >& states = latent->get_values();
            const std::vector< double >& masses = latent->get_masses();
            std::set< std::string >::const_iterator it_begin = states.cbegin(), it, it_end = states.cend();
            it = it_begin;
            DetachedEvent state(std::vector< std::shared_ptr< UnivariateEvent > >(1));
            double p = 0.;
            while(it != it_end)
            {
                state.set(0, std::make_shared< CategoricalElementaryEvent >(*it));
                observed->conditioning(state);
                p += masses[distance(it_begin, it)] * observed->cdf(value);
                ++it;
            }
            return p;
        }*/
}

#endif
