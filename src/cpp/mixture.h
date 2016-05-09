/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_MIXTURE_H
#define STATISKIT_CORE_MIXTURE_H

namespace statiskit
{
    /*template<class O> class MixtureDistribution : public O::conditional_type
    {
        public:
            MixtureDistribution(const std::shared_ptr< CategoricalUnivariateDistribution >& latent, const std::shared_ptr< O >& observed);
            MixtureDistribution(const MixtureDistribution< D >& mixture);

            virtual unsigned int get_nb_parameters() const;

        protected:
            std::shared_ptr< CategoricalUnivariateDistribution >& latent;
            std::shared_ptr< O > _observed;
    };

    template<class O> struct UnivariateMixtureDistribution : MixtureDistribution< O >
    {
        using MixtureDistribution< O >::MixtureDistribution;
        
        virtual double ldf(const typename O::event_type::value_type& value) const;
        virtual double pdf(const typename O::event_type::value_type& value) const;
    };

    template<class O> struct QuantitativeUnivariteMixtureDistribution : UnivariateMixtureDistribution< O >
    {
        using MixtureDistribution< O >::MixtureDistribution;

        virtual double cdf(const typename O::conditional_type::event_type::value_type& value) const;
        
        virtual typename O::conditional_type::event_type::value_type quantile(const double& p) const;
    
        virtual double get_mean() const;
        
        virtual double get_variance() const;
    };*/
}

#include "mixture.hpp"
#endif
