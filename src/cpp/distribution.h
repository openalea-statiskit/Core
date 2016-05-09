/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_DISTRIBUTION_H
#define STATISKIT_CORE_DISTRIBUTION_H

#include "predictor.h"
#include "data.h"

#include <boost/random/poisson_distribution.hpp>
#include <boost/random/binomial_distribution.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/uniform_int_distribution.hpp>
#include <boost/random/variate_generator.hpp>
#include <boost/math/special_functions/erf.hpp>
#include <boost/math/special_functions/gamma.hpp>
#include <boost/math/special_functions/beta.hpp>

namespace statiskit
{
    /** Univariate Distribution class
     *
     */
    struct UnivariateDistribution
    {
        virtual std::unique_ptr< UnivariateSampleSpace > get_sample_space() const = 0;

        virtual unsigned int get_nb_parameters() const = 0;
        
        virtual double probability(const UnivariateEvent* event, const bool& logarithm) const = 0;

        double loglikelihood(const UnivariateData& data) const;

        virtual std::unique_ptr< UnivariateEvent > simulate() const = 0;

        virtual std::unique_ptr< UnivariateDistribution > copy() const = 0;
    }; 

    template<class T> class UnivariateFrequencyDistribution : public T
    {
        public:
            UnivariateFrequencyDistribution(const std::set< typename T::event_type::value_type >& values);
            UnivariateFrequencyDistribution(const std::set< typename T::event_type::value_type >& values, const std::vector< double >& pi);
            UnivariateFrequencyDistribution(const UnivariateFrequencyDistribution< T >& frequency);

            virtual unsigned int get_nb_parameters() const;

            virtual double ldf(const typename T::event_type::value_type& value) const;
            virtual double pdf(const typename T::event_type::value_type& value) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            const std::set< typename T::event_type::value_type >& get_values() const;

            const std::vector< double >& get_pi() const;
            void set_pi(const std::vector< double >& pi);

        protected:
            std::set< typename T::event_type::value_type > _values;
            std::vector< double > _pi;
    };

    struct CategoricalUnivariateDistribution : UnivariateDistribution
    {
        typedef CategoricalEvent event_type;
 
        virtual double probability(const UnivariateEvent*, const bool& logarithm) const;

        virtual double pdf(const std::string& value) const = 0;
        virtual double ldf(const std::string& value) const = 0;

        virtual const std::set< std::string >& get_values() const = 0;

        virtual const std::vector< double >& get_pi() const = 0;
    };

    struct NominalDistribution : UnivariateFrequencyDistribution< CategoricalUnivariateDistribution >
    { 
        using UnivariateFrequencyDistribution< CategoricalUnivariateDistribution >::UnivariateFrequencyDistribution;

        virtual std::unique_ptr< UnivariateSampleSpace > get_sample_space() const;

        virtual std::unique_ptr< UnivariateDistribution > copy() const;
    };

    class OrdinalDistribution : public UnivariateFrequencyDistribution< CategoricalUnivariateDistribution >
    {
        public:
            OrdinalDistribution(const std::vector< std::string >& values);
            OrdinalDistribution(const std::set< std::string >& values, const std::vector< size_t >& rank, const std::vector< double >& pi);
            OrdinalDistribution(const OrdinalDistribution& ordinal); 
            
            virtual std::unique_ptr< UnivariateSampleSpace > get_sample_space() const;        

            double cdf(const std::string& value) const;

            std::string quantile(const double& p) const;
            
            const std::vector< size_t >& get_rank() const;
            void set_rank(const std::vector< size_t >& rank);

            std::vector< std::string > get_ordered() const;
            
            virtual std::unique_ptr< UnivariateDistribution > copy() const;

        protected:
            std::vector< size_t > _rank;
    };
 
    template<class T> struct QuantitativeUnivariateFrequencyDistribution : UnivariateFrequencyDistribution< T >
    {
        using UnivariateFrequencyDistribution< T >::UnivariateFrequencyDistribution;

        virtual double cdf(const typename T::event_type::value_type& value) const;
        
        virtual typename T::event_type::value_type quantile(const double& p) const;
    
        virtual double get_mean() const;
        
        virtual double get_variance() const;
    };

    struct DiscreteUnivariateDistribution : UnivariateDistribution
    {
        typedef DiscreteEvent event_type;

        virtual std::unique_ptr< UnivariateSampleSpace > get_sample_space() const;

        virtual double probability(const UnivariateEvent*, const bool& logarithm) const;

        virtual double ldf(const int& value) const = 0;
        virtual double pdf(const int& value) const = 0;
        virtual double cdf(const int& value) const = 0;
        
        virtual int quantile(const double& p) const = 0;

        virtual double get_mean() const = 0;

        virtual double get_variance() const = 0;
    };

    typedef QuantitativeUnivariateFrequencyDistribution< DiscreteUnivariateDistribution > DiscreteUnivariateFrequencyDistribution;

    class PoissonDistribution : public DiscreteUnivariateDistribution
    {
        public:
            PoissonDistribution();
            PoissonDistribution(const double& theta);
            PoissonDistribution(const PoissonDistribution& poisson);

            virtual unsigned int get_nb_parameters() const;
           
            const double& get_theta() const;
            void set_theta(const double& theta);

            virtual double ldf(const int& value) const;
            virtual double pdf(const int& value) const;
            virtual double cdf(const int& value) const;
            
            virtual int quantile(const double& p) const;
            
            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            virtual double get_mean() const;
            
            virtual double get_variance() const;

            virtual std::unique_ptr< UnivariateDistribution > copy() const;

        protected:
            double _theta;
    };

    class BinomialDistribution : public DiscreteUnivariateDistribution
    {
        public:
            BinomialDistribution();
            BinomialDistribution(const unsigned int& kappa, const double& pi);
            BinomialDistribution(const BinomialDistribution& binomial);

            virtual unsigned int get_nb_parameters() const;

            const unsigned int& get_kappa() const;
            void set_kappa(const unsigned int& kappa);

            const double& get_pi() const;
            void set_pi(const double& pi);

            virtual double ldf(const int& value) const;
            virtual double pdf(const int& value) const;
            virtual double cdf(const int& value) const;
            
            virtual int quantile(const double& p) const;
            
            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            virtual double get_mean() const;
            
            virtual double get_variance() const;

            virtual std::unique_ptr< UnivariateDistribution > copy() const;

        protected:
            unsigned int _kappa;
            double _pi;
    };

    /** \brief This class NegativeBinomialDistribution represents a [negative binomial distribution](https://en.wikipedia.org/wiki/Negative_binomial_distribution)
     * 
     * \details The negative binomial distribution is an univariate discrete distribution of the number of successes in independent [Bernouilli trials](https://en.wikipedia.org/wiki/Bernoulli_trial) with a specified probability \f$\pi \in [0,1]\f$ of success before a specified number of failures denoted \f$\kappa \in (0, +\infty)\f$.
     *          In the particular case of \f$\kappa = 1.\f$ the negative binomial distribution represents a [geometric distribution](https://en.wikipedia.org/wiki/Geometric_distribution) with \f$\mathbb{N}\f$ as support.
     * */
    class NegativeBinomialDistribution : public DiscreteUnivariateDistribution
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a negative binomial distribution with
             *
             * - \f$\kappa = 1.\f$,
             * - \f$\pi = 0.5\f$. 
             * */
            NegativeBinomialDistribution();

            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for negative binomial distribution instantiation with specified \f$\kappa\f$ and \f$\pi\f$ parameters.
             *
             * \param kappa The specified number of failures.
             * \param pi The specified probability of success of Bernouilli trials
             * */
            NegativeBinomialDistribution(const double& kappa, const double& pi);

            /** \brief Copy constructor */
            NegativeBinomialDistribution(const NegativeBinomialDistribution& negbinomial);

            /** \brief Returns the number of parameters of the negative binomial distribution
             *
             * \details The number of parameters of a negative binomial distribution is \f$2\f$ (\f$\kappa\f$ and \f$\pi\f$).
             * */
            virtual unsigned int get_nb_parameters() const;

            /** \brief Get the value of kappa 
             *
             * @see kappa
             * */
            const double& get_kappa() const;

            /** \brief Set the value of kappa 
             *
             * @see kappa
             * */
            void set_kappa(const double& kappa);

            /** \brief Get the value of pi 
             * */
            const double& get_pi() const;

            /** \brief Set the value of pi 
             * */
            void set_pi(const double& pi);

            /** \brief Compute the log-probability of an outcome
             *
             * \param value The considered outcome.
             * \see \ref ::NegativeBinomialDistribution::pdf.
             * */
            virtual double ldf(const int& value) const;

            /** \brief Compute the probability of an outcome
             *
             * \details Let \f$x\f$ denote the outcome
             *          \f[
             *              P\left(X = x\right) = \binom{x + \kappa - 1}{x} \left(1 - \pi\right)^{\kappa} \pi^x
             *          \f]
             *
             * \param value The considered outcome.
             * \see ::NegativeBinomialDistribution::pdf.
             * */
            virtual double pdf(const int& value) const;

            /** \brief Compute the cumulative probability of an outcome
             *
             * \details Let \f$x\f$ denote the outcome
             *          \f[
             *              P\left(X \leq x\right) = \sum_{x' \in [0, x]} P\left(X = x'\right)
             *          \f]
             * 
             * */
            virtual double cdf(const int& value) const;
            
            virtual int quantile(const double& p) const;
            
            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            virtual double get_mean() const;
            
            virtual double get_variance() const;

            virtual std::unique_ptr< UnivariateDistribution > copy() const;

        protected:
            double _kappa;
            double _pi;
    };

    struct ContinuousUnivariateDistribution : UnivariateDistribution
    { 
        typedef ContinuousEvent event_type;

        virtual std::unique_ptr< UnivariateSampleSpace > get_sample_space() const;

        virtual double probability(const UnivariateEvent*, const bool& logarithm) const;

        virtual double ldf(const double& value) const = 0;
        virtual double pdf(const double& value) const = 0;
        virtual double cdf(const double& value) const = 0;
        
        virtual double quantile(const double& p) const = 0;

        virtual double get_mean() const = 0;

        virtual double get_variance() const = 0;    
    };

    typedef QuantitativeUnivariateFrequencyDistribution< ContinuousUnivariateDistribution >
 ContinuousUnivariateFrequencyDistribution;

    class NormalDistribution : public ContinuousUnivariateDistribution
    {
        public:
            NormalDistribution();
            virtual ~NormalDistribution();
            NormalDistribution(const double& mu, const double& sigma);
            NormalDistribution(const NormalDistribution& normal);

            virtual unsigned int get_nb_parameters() const;
        
            const double& get_mu() const;
            void set_mu(const double& mu);

            const double& get_sigma() const;
            void set_sigma(const double& sigma);

            virtual double ldf(const double& value) const;
            virtual double pdf(const double& value) const;
            virtual double cdf(const double& value) const;

            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            virtual double get_mean() const;

            virtual double get_variance() const;

            virtual std::unique_ptr< UnivariateDistribution > copy() const;

        protected:
            double _mu;
            double _sigma;
    };
    
    class UnivariateHistogramDistribution : public ContinuousUnivariateDistribution
    {
        public: 
            UnivariateHistogramDistribution(const std::set<double>& bins, const std::vector<double>& densities);
            UnivariateHistogramDistribution(const UnivariateHistogramDistribution& histogram);
            virtual ~UnivariateHistogramDistribution();

            virtual unsigned int get_nb_parameters() const;

            const std::set<double>& get_bins() const;
            
            const std::vector<double>& get_densities() const;

            virtual double ldf(const double& value) const;
            virtual double pdf(const double& value) const;
            virtual double cdf(const double& value) const;

            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            virtual double get_mean() const;

            virtual double get_variance() const;

            virtual std::unique_ptr< UnivariateDistribution > copy() const;            

        protected:
            std::set<double> _bins;
            std::vector<double> _densities;

            void normalize();
    };
                
    class LogisticDistribution : public ContinuousUnivariateDistribution
    {
        public:
            LogisticDistribution();
            virtual ~LogisticDistribution();
            LogisticDistribution(const double& mu, const double& scale);
            LogisticDistribution(const LogisticDistribution& logistic);

            virtual unsigned int get_nb_parameters() const;
        
            const double& get_mu() const;
            void set_mu(const double& mu);

            const double& get_scale() const;
            void set_scale(const double& scale);

            virtual double ldf(const double& value) const;
            virtual double pdf(const double& value) const;
            virtual double cdf(const double& value) const;

            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            virtual double get_mean() const;

            virtual double get_variance() const;

            virtual std::unique_ptr< UnivariateDistribution > copy() const;            

        protected:
            double _mu;
            double _scale;
    };

    /*struct MultivariateDistribution
    {
        typedef UnivariateDistribution marginal_type;

        virtual std::shared_ptr< MultivariateSampleSpace > get_sample_space() const = 0;
            
        virtual size_t get_nb_variables() const = 0;

        virtual unsigned int get_nb_parameters() const = 0;
        
        virtual double probability(const MultivariateEvent& event, const bool& logarithm) const = 0;

        std::shared_ptr< MultivariateDataFrame > simulation(const unsigned int& nb) const;

        virtual std::shared_ptr< MultivariateEvent > simulate() const = 0;
    };

    struct CategoricalMultivariateDistribution : MultivariateDistribution
    {
        typedef CategoricalUnivariateDistribution marginal_type;
    };

    struct DiscreteMultivariateDistribution : MultivariateDistribution
    {
        typedef DiscreteUnivariateDistribution marginal_type;
    };

    struct ContinuousMultivariateDistribution : MultivariateDistribution
    {
        typedef ContinuousUnivariateDistribution marginal_type;
    };

    template<class D> class IndependentMultivariateDistribution : public D
    {
        public:
            IndependentMultivariateDistribution(const std::vector< std::shared_ptr< typename D::marginal_type > >& marginals);
            IndependentMultivariateDistribution(const IndependentMultivariateDistribution< D >& independent);

            virtual std::shared_ptr< MultivariateSampleSpace > get_sample_space() const;

            virtual size_t get_nb_variables() const;

            virtual unsigned int get_nb_parameters() const;

            virtual double probability(const MultivariateEvent& event, const bool& logarithm) const;

            const std::shared_ptr< typename D::marginal_type >& get_marginal(const size_t& index) const;

            void set_marginal(const size_t& index, const std::shared_ptr< typename D::marginal_type >& marginal);

            virtual std::shared_ptr< MultivariateEvent > simulate() const;

        protected:
            std::vector< std::shared_ptr< typename D::marginal_type > > _marginals; 
    };

    typedef IndependentMultivariateDistribution< MultivariateDistribution > MixedIndependentMultivariateDistribution;
    typedef IndependentMultivariateDistribution< CategoricalMultivariateDistribution > CategoricalIndependentMultivariateDistribution;
    typedef IndependentMultivariateDistribution< DiscreteMultivariateDistribution > DiscreteIndependentMultivariateDistribution;
    typedef IndependentMultivariateDistribution< ContinuousMultivariateDistribution > ContinuousIndependentMultivariateDistribution;*/

    /*class NormalRegression : public NormalDistribution, public ConditionalDistribution
    {
        public:
            NormalRegression(const std::shared_ptr< ScalarPredictor >& predictor, const double& sigma);
            virtual ~NormalRegression();
            NormalRegression(const NormalRegression& normal);

            virtual void conditioning(const MultivariateEvent& event);

            const std::shared_ptr< ScalarPredictor >& get_predictor() const;

        protected:
            std::shared_ptr< ScalarPredictor > _predictor;
    };*/
}

#include "distribution.hpp"
#endif
