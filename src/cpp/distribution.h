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
    
    /** \brief This virtual class DiscreteUnivariateDistribution represents the distribution of a random discrete variable \f$ N\f$. The support is \f$ \mathbb{Z} \f$ and we have \f$ \sum_{n\in \mathbb{Z}} P(N=n) = 1\f$.
     * 
     * */
    struct DiscreteUnivariateDistribution : UnivariateDistribution
    {
        typedef DiscreteEvent event_type;

        virtual std::unique_ptr< UnivariateSampleSpace > get_sample_space() const;
        
		/** \brief Compute the probability of a set of values.
         *
         * \details Let \f$A \in \mathbb{Z} \f$ denote the set of values. The probability function get \f$ P\left(N \in A\right) \f$ or \f$ \ln P\left(N \in A\right) \f$ according to the boolean parameter logarithm.
         * \param UnivariateEvent* The considered set of values.
         * \param logarithm The boolean.
         * */ 
        virtual double probability(const UnivariateEvent*, const bool& logarithm) const;
        
		/** \brief Compute the log-probability of a value.
         *
         * \details Let \f$n \in \mathbb{Z} \f$ denote the value, \f$ \ln P\left(N = n\right) \f$.
         * \param value The considered value.
         * */ 
        virtual double ldf(const int& value) const = 0;
        
		/** \brief Compute the probability of a value
         *
         * \details Let \f$n \in \mathbb{Z} \f$ denote the value, \f$ P\left(N = n\right) \f$.
         * \param value The considered value.
         * */        
        virtual double pdf(const int& value) const = 0;  
                  
		/** \brief Compute the cumulative probability of a value
         *
         * \details Let \f$n \in \mathbb{Z} \f$ denote the value
         *          \f[
         *              P\left(N \leq n\right)  =   \sum_{k \leq n} P\left(N = k\right).
         *          \f]
         * \param value The considered value.
         * */
        virtual double cdf(const int& value) const = 0;
        
        /** \brief Compute the quantile of a probability. This is the value \f$ n \in \mathbb{Z} \f$ such that \f$ P(N \leq n) \leq p < P(N \leq n+1) \f$.
          * \param value The considered value.       
        * */
        virtual int quantile(const double& p) const = 0;
        
        /// \brief Get mean of a discrete random variable \f$ E(N) = \sum_{n\in\mathbb{Z}} n P(N=n) \f$.
        virtual double get_mean() const = 0;
        
        /// \brief Get variance of a discrete random variable \f$ V(N) = \sum_{n\in\mathbb{Z}} \lbrace n-E(n) \rbrace^2 P(N=n) \f$  \f$ \mathbb{N} \f$.
        virtual double get_variance() const = 0;
    };

    typedef QuantitativeUnivariateFrequencyDistribution< DiscreteUnivariateDistribution > DiscreteUnivariateFrequencyDistribution;
    
    /** \brief This class PoissonDistribution represents a [Poisson distribution](https://en.wikipedia.org/wiki/Poisson_distribution)
     * 
     * \details The Poisson distribution is an univariate discrete distribution that expresses the probability of a given number of events occurring in a fixed interval of time and/or space if these events occur with a known average rate \f$\theta  \in \mathbb{R}_+^*  \f$ and independently of the time since the last event. The support of the Poisson distribution is the set of non-negative integer \f$ \mathbb{N} \f$.
     * */
    class PoissonDistribution : public DiscreteUnivariateDistribution
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a Poisson distribution with \f$ \theta = 1. \f$
             * */
            PoissonDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for Poisson distribution instantiation with specified \f$\theta \f$ parameter.
             *
             * \param theta The specified average rate \f$ \theta \in \mathbb{R}_+^* \f$.
             * */
            PoissonDistribution(const double& theta);
            PoissonDistribution(const PoissonDistribution& poisson);
            
            /** \brief Returns the number of parameters of the Poisson distribution
             *
             * \details The number of parameters of a Poisson distribution is \f$1\f$ (\f$\theta\f$).
             * */
            virtual unsigned int get_nb_parameters() const; 
            
            /** \brief Get the value of theta.
             * */           
            const double& get_theta() const;       
              
            /** \brief Set the value of theta.
             * */             
            void set_theta(const double& theta);

            /** \brief Compute the log-probability of an outcome
             *
             * \details Let \f$ n \in \mathbb{N} \f$ denote the outcome
             *          \f[
             *              \ln P\left(N = n\right) = n \ln \theta - \theta - \ln \Gamma (n+1),
             *          \f]      
             * where [\f$ \ln \Gamma \f$](http://www.boost.org/doc/libs/1_50_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/lgamma.html) is the log-Gamma function implemented in the Boost.Math library.       
             * \param value The considered outcome.
             * */
            virtual double ldf(const int& value) const;
            
            /** \brief Compute the probability of an outcome
             *
             * \details Let \f$ n \in \mathbb{N} \f$ denote the outcome
             *          \f[
             *              P\left(N = n\right) = \exp(-\theta) \frac{ \theta^n }{ \Gamma (n+1) },
             *          \f]      
             * where [\f$ \Gamma \f$](http://www.boost.org/doc/libs/1_42_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/tgamma.html) is the Gamma function implemented in the Boost.Math library.       
             * \param value The considered outcome.
             * */            
            virtual double pdf(const int& value) const;
            
			/** \brief Compute the cumulative probability of an outcome
             *
             * \details Let \f$n \in \mathbb{N} \f$ denote the outcome
             *          \f{eqnarray*}{
             *              P\left(N \leq n\right) & = &  \sum_{k = 0}^n P\left(N = k\right), \\
             *              P\left(N \leq n\right) & = &  Q(n+1, \theta),
             *          \f}
             *
             * where [\f$Q(a,z)\f$](http://www.boost.org/doc/libs/1_46_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/igamma.html) is the normalised upper incomplete gamma function implemented in the Boost.Math library.
             * \param value The considered outcome.
             * */             
            virtual double cdf(const int& value) const;
            
			/** \brief Compute the quantile of a probability
             *
             * \details Let \f$p \in [0,1]\f$ denote the probability
             *   \f[
             *       n = \textnormal{gamma}\_\textnormal{q}\_\textnormal{inva}(\theta, p)-1,  
             *   \f]
             * where [\f$\textnormal{gamma}\_\textnormal{q}\_\textnormal{inva}(x, q)\f$](http://www.boost.org/doc/libs/1_40_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/igamma_inv.html) a sepcific incomplete gamma function inverse implemented in the Boost.Math library.
             * \param p The considered probability.
             * */             
            virtual int quantile(const double& p) const;
            
 			/// \brief Simulate an outcome of a binomial distribution.        
            virtual std::unique_ptr< UnivariateEvent > simulate() const;
            
			/// \brief Get mean of a Poisson distribution \f$ E(N) = \theta \f$.
            virtual double get_mean() const;
             
			/// \brief Get variance of a Poisson distribution \f$ V(N) = \theta \f$.           
            virtual double get_variance() const;

            virtual std::unique_ptr< UnivariateDistribution > copy() const;

        protected:
            double _theta;
    };
    
    /** \brief This class BinomialDistribution represents a [binomial distribution](https://en.wikipedia.org/wiki/binomial_distribution)
     * 
     * \details The binomial distribution is an univariate discrete distribution of the number of successes in \f$ \kappa \in \mathbb{N}^* \f$ independent [Bernouilli trials](https://en.wikipedia.org/wiki/Bernoulli_trial) with a specified probability \f$\pi \in [0,1]\f$ of success.
     *          The support of the binomial distribution is the set all intergers betwwen $0$ and \f$ \kappa \f$.
     *          In the particular case of \f$ \kappa = 1\f$ the binomial distribution is the [Bernouilli distribution](https://en.wikipedia.org/wiki/Bernoulli_distribution). 
     * */
    class BinomialDistribution : public DiscreteUnivariateDistribution
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a binomial distribution with
             *
             * - \f$ \kappa = 1 \f$,
             * - \f$ \pi = 0.5 \f$. 
             * */
            BinomialDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for binomial distribution instantiation with specified \f$ \kappa \f$ and \f$\pi\f$ parameters.
             *
             * \param kappa The specified number of Bernouilli \f$ \kappa \in \mathbb{N}^* \f$ trials .
             * \param pi The specified probability of success of Bernouilli trials \f$ \pi \in [0,1] \f$.
             * */
            BinomialDistribution(const unsigned int& kappa, const double& pi);
            
            /** \brief Copy constructor */
            BinomialDistribution(const BinomialDistribution& binomial);
            
            /** \brief Returns the number of parameters of the binomial distribution
             *
             * \details The number of parameters of a binomial distribution is \f$2\f$ (\f$\kappa\f$ and \f$\pi\f$).
             * */
            virtual unsigned int get_nb_parameters() const;

            /** \brief Get the value of kappa 
             * */
            const unsigned int& get_kappa() const;
            
            /** \brief Set the value of kappa 
             * */
            void set_kappa(const unsigned int& kappa);
			/** \brief Get the value of pi 
			* */
            const double& get_pi() const;
            
            /** \brief Set the value of pi 
             * */            
            void set_pi(const double& pi);

            /** \brief Compute the log-probability of an outcome
             *
             * \details Let \f$n\f$ denote the outcome
             *          \f[
             *              \ln P\left(N = n\right) = \ln \Gamma (\kappa +1) - \ln \Gamma (\kappa -n +1) - \ln \Gamma (n +1) + n \ln \pi + (\kappa - n) \ln (1-\pi),
             *          \f]      
             * where [\f$ \ln \Gamma \f$](http://www.boost.org/doc/libs/1_50_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/lgamma.html) is the log-Gamma function implemented in the Boost.Math library.       
             * \param value The considered outcome.
             * */
            virtual double ldf(const int& value) const;
            
			/** \brief Compute the probability of an outcome
             *
             * \details Let \f$n\f$ denote the outcome
             *          \f{eqnarray*}{
             *				P(N=n) & = & {\kappa \choose n} \pi^n (1-\pi)^{\kappa - n}, \\
             *              P(N=n) & = &  \textnormal{ibeta\_derivative}(n+1, \kappa -n + 1, \pi) / (\kappa +1),
             *          \f}            
			 *
			 * where [\f$\textnormal{ibeta\_derivative}(a,b,x)\f$](http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/beta_derivative.html) is the inverse beta derivative function implemented in the Boost.Math library.
             * \param value The considered outcome.
             * */
            virtual double pdf(const int& value) const;
            
			/** \brief Compute the cumulative probability of an outcome
             *
             * \details Let \f$n\f$ denote the outcome
             *          \f{eqnarray*}{
             *              P\left(N \leq n\right) & = &  \sum_{k = 0}^n P\left(N = k\right), \\
             *              P\left(N \leq n\right) & = &  \textnormal{ibetac}(n+1,\kappa-n,\pi),
             *          \f}
             *
             * where [\f$\textnormal{ibetac}(a,b,x)\f$](http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/ibeta_function.html) is the complement of the normalized incomplete beta function implemented in the Boost.Math library.
             * \param value The considered outcome.
             * */            
            virtual double cdf(const int& value) const;

			/** \brief Compute the quantile of a probability
             *
             * \param p The considered probability.
             * */            
            virtual int quantile(const double& p) const;
            
			/** \brief Simulate an outcome of a binomial distribution.
             *
             * */            
            virtual std::unique_ptr< UnivariateEvent > simulate() const;
            
            
			/** \brief Get mean of a binomial distribution \f$ E(N) = \kappa \pi \f$.
             *
             * */  
            virtual double get_mean() const;
            
 			/** \brief Get variance of a binomial distribution \f$ V(N) = \kappa \pi (1-\pi) \f$.
             *
             * */            
            virtual double get_variance() const;

            virtual std::unique_ptr< UnivariateDistribution > copy() const;

        protected:
            unsigned int _kappa;
            double _pi;
    };

    /** \brief This class NegativeBinomialDistribution represents a [negative binomial distribution](https://en.wikipedia.org/wiki/Negative_binomial_distribution)
     * 
     * \details The negative binomial distribution is an univariate discrete distribution of the number of successes in independent [Bernouilli trials](https://en.wikipedia.org/wiki/Bernoulli_trial) with a specified probability \f$\pi \in [0,1]\f$ of success before a specified number of failures denoted \f$\kappa \in \mathbb{R}_+^* \f$.
     *         The support of the negative binomial distribution is the set of non-negative integer \f$\mathbb{N}\f$.
     *         In the particular case of \f$\kappa = 1.\f$ the negative binomial distribution represents a [geometric distribution](https://en.wikipedia.org/wiki/Geometric_distribution) with \f$\mathbb{N}\f$ as support.
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
             * \param kappa The specified number of failures \f$ \kappa \in \mathbb{R}_+^* \f$.
             * \param pi The specified probability of success of Bernouilli trials  \f$ \pi \in [0,1] \f$.
             * */
            NegativeBinomialDistribution(const double& kappa, const double& pi);

            /** \brief Copy constructor */
            NegativeBinomialDistribution(const NegativeBinomialDistribution& negbinomial);

            /** \brief Returns the number of parameters of the negative binomial distribution
             *
             * \details The number of parameters of a negative binomial distribution is \f$2\f$ (\f$\kappa\f$ and \f$\pi\f$).
             * */
            virtual unsigned int get_nb_parameters() const;

            /// \brief Get the value of kappa 
            const double& get_kappa() const;

            /// \brief Set the value of kappa 

            void set_kappa(const double& kappa);

            /// \brief Get the value of pi 
            const double& get_pi() const;

            /// \brief Set the value of pi        
            void set_pi(const double& pi);

            /** \brief Compute the log-probability of an outcome
             *
             * \details Let \f$n \in \mathbb{N} \f$ denote the outcome
             *          \f[
             *              \ln P\left(N = n\right) = \ln \Gamma (\kappa +n) - \ln \Gamma (\kappa ) - \ln \Gamma (n +1) + n \ln \pi + \kappa  \ln (1-\pi)
             *          \f]
             *          
             * where [\f$ \ln \Gamma \f$](http://www.boost.org/doc/libs/1_50_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/lgamma.html) is the log-Gamma function implemented in the Boost.Math library.                   
             * \param value The considered outcome.
             * */
            virtual double ldf(const int& value) const;

            /** \brief Compute the probability of an outcome
             *
             *
             * \param value The considered outcome.
             * \see \ref statiskit::NegativeBinomialDistribution::ldf.
             * */
            virtual double pdf(const int& value) const;

            /** \brief Compute the cumulative probability of an outcome
             *
             * \details Let \f$n\f$ denote the outcome
             *          \f{eqnarray*}{
             *              P\left(N \leq n\right) & = &  \sum_{k = 0}^n P\left(N = k\right), \\
             *              P\left(N \leq n\right) & = & \textnormal{ibeta}(\kappa ,n+1 ,1-\pi),
             *          \f}
             * where [\f$\textnormal{ibeta}(a,b,x)\f$](http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/ibeta_function.html) is the normalized incomplete beta function implemented in the Boost.Math library. 
             * */
            virtual double cdf(const int& value) const;
            
 			/** \brief Compute the quantile of a probability
             *
             * \param p The considered probability.
             * */            
            virtual int quantile(const double& p) const;
            
			/// \brief Simulate an outcome of a negative binomial distribution.            
            virtual std::unique_ptr< UnivariateEvent > simulate() const;
            
 			/// \brief Get mean of a negative binomial distribution \f$ E(N) = \kappa \pi / (1-\pi) \f$.
            virtual double get_mean() const;
            
 			/// \brief Get variance of a negative binomial distribution \f$ V(N) = \kappa \pi / (1-\pi)^2 \f$.           
            virtual double get_variance() const;

            virtual std::unique_ptr< UnivariateDistribution > copy() const;

        protected:
            double _kappa;
            double _pi;
    };
    
    /** \brief This virtual class ContinuousUnivariateDistribution represents the distribution of a random continuous variable \f$ X\f$. The support is \f$ \mathbb{R} \f$ and we have \f$ \int_{-\infty}^{\infty} f(x) dx = 1\f$.
     * 
     * */
    struct ContinuousUnivariateDistribution : UnivariateDistribution
    { 
        typedef ContinuousEvent event_type;

        virtual std::unique_ptr< UnivariateSampleSpace > get_sample_space() const;
        
		/** \brief Compute the probability of a set of values.
         *
         * \details Let \f$A \in \mathbb{R} \f$ denote the set of values. The probability function get \f$ P\left(X \in A\right) \f$ or \f$ \ln P\left(X \in A\right) \f$ according to the boolean parameter logarithm.
         * \param UnivariateEvent* The considered set of values.
         * \param logarithm The boolean.
         * */ 
        virtual double probability(const UnivariateEvent*, const bool& logarithm) const;
        
		/** \brief Compute the log-probability density of a value.
         *
         * \details Let \f$x \in \mathbb{R} \f$ denote the value, \f$ \ln f(x) = \ln P\left(X \in dx\right) \f$.
         * \param value The considered value.
         * */ 
        virtual double ldf(const double& value) const = 0;
         
		/** \brief Compute the probability density of a value.
         *
         * \details Let \f$x \in \mathbb{R} \f$ denote the value, \f$ f(x) = P\left(X \in dx\right) \f$.
         * \param value The considered value.
         * */        
        virtual double pdf(const double& value) const = 0;
         
		/** \brief Compute the cumulative probability of a value.
         *
         * \details Let \f$x \in \mathbb{R} \f$ denote the value, \f$ P\left(X \leq x \right) = \int_{-\infty}^x f(t) dt \f$.
         * \param value The considered value.
         * */         
        virtual double cdf(const double& value) const = 0;
               
        /** \brief Compute the quantile of a probability. This is the value \f$ x \in \mathbb{R} \f$ such that \f$ P(X \leq x) = p \f$.
          * \param value The considered value.       
        * */        
        virtual double quantile(const double& p) const = 0;
        
        /// \brief Get mean of a continuous random variable \f$ E(X) = \int_{-\infty}^{\infty} x f(x) dx \f$.
        virtual double get_mean() const = 0;
        
        /// \brief Get variance of a continuous random variable \f$ V(X) = \int_{-\infty}^{\infty} \lbrace x-E(X) \rbrace^2 f(x) dx \f$.
        virtual double get_variance() const = 0;    
    };

    typedef QuantitativeUnivariateFrequencyDistribution< ContinuousUnivariateDistribution >
 ContinuousUnivariateFrequencyDistribution;

    /** \brief This class NormalDistribution represents a [normal distribution](https://en.wikipedia.org/wiki/Normal_distribution).
     * 
     * \details The normal distribution is an univariate continuous distribution.
     *         The support is the set of real values \f$\mathbb{R}\f$.
     * */
    class NormalDistribution : public ContinuousUnivariateDistribution
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a normal distribution with
             *
             * - \f$\mu = 0.\f$,
             * - \f$\sigma = 1.\f$. 
             * */
            NormalDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for normal distribution instantiation with specified \f$\mu\f$ and \f$\sigma\f$ parameters.
             *
             * \param mu The specified mean \f$ \mu \in \mathbb{R} \f$.
             * \param sigma The specified standard deviation \f$ \sigma \in \mathbb{R}_+^* \f$.
             * */
            NormalDistribution(const double& mu, const double& sigma);
            
            /// \brief A copy constructor
            NormalDistribution(const NormalDistribution& normal);

            /** \brief Returns the number of parameters of the normal distribution
             *
             * \details The number of parameters of a normal distribution is \f$2\f$ (\f$\mu\f$ and \f$\sigma\f$).
             * */
            virtual unsigned int get_nb_parameters() const;
        
        	/// \brief Get the value of mu.
            const double& get_mu() const;
            
            /// \brief Set the value of mu.
            void set_mu(const double& mu);
            
			/// \brief Get the value of sigma.
            const double& get_sigma() const;
            
  			/// \brief Set the value of sigma.          
            void set_sigma(const double& sigma);
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 \ln f(x) = - \frac{1}{2} \left( \frac{x-\mu}{\sigma} \right)^2  - \ln \sigma  - \ln \sqrt{2\pi}, 
		     *			\f]
		     * where  [\f$ \sqrt{2\pi} \f$](http://www.boost.org/doc/libs/1_46_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is a constant computed in Boost.Math library.
		     * \param value The considered value.
		     * */ 
            virtual double ldf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
			 * \details The pdf value is computed as the exponential of the ldf value.
			 *  @see statiskit::NormalDistribution::ldf()
			 * */
            virtual double pdf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     * 			\f{eqnarray*}{
		     *				P(X \leq x) & = & \frac{1}{\sigma \sqrt{2\pi}}  \int_{-\infty}^x  \exp\left\lbrace- \left( \frac{t-\mu}{2\sigma} \right)^2 \right\rbrace dt, \\
		     *				P(X \leq x) & = & 0.5 \; \textnormal{erfc}\left( \frac{\mu-x}{\sigma \sqrt{2}} \right),
		     *			\f}
		     * where [\f$ \textnormal{erfc} \f$](http://www.cplusplus.com/reference/cmath/erfc/) is a function implemented in C++ standard library and [\f$\sqrt{2}\f$](http://www.boost.org/doc/libs/1_46_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is a constant implemented in Boost.Math library.
			 * */            
            virtual double cdf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
			*  The quantile is computed as \f$ x = \mu - \sigma \sqrt{2} \; \textnormal{erfc}\_\textnormal{inv}(2p) \f$ where [\f$\sqrt{2}\f$](http://www.boost.org/doc/libs/1_46_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is a constant implemented in Boost.Math library and [\f$ \textnormal{erfc}\_\textnormal{inv} \f$](http://www.boost.org/doc/libs/1_53_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_erf/error_inv.html) is a function implemented in Boost.Math library.
			* */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

			/// \brief Get mean of a normal distribution \f$ E(X) = \mu \f$.
            virtual double get_mean() const;
            
			/// \brief Get variance of a normal distribution \f$ V(X) = \sigma^2 \f$.
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

    /** \brief This class LogisticDistribution represents a [logistic distribution](https://en.wikipedia.org/wiki/Logistic_distribution).
     * 
     * \details The logistic distribution is an univariate continuous distribution.
     *         The support is the set of real values \f$\mathbb{R}\f$.
     * */                
    class LogisticDistribution : public ContinuousUnivariateDistribution
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a normal distribution with
             *
             * - \f$\mu = 0.\f$,
             * - \f$s = 1.\f$. 
             * */
            LogisticDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for logistic distribution instantiation with specified \f$\mu\f$ and \f$s\f$ parameters.
             *
             * \param mu The specified mean \f$ \mu \in \mathbb{R} \f$.
             * \param scale The specified scale \f$ s \in \mathbb{R}_+^* \f$.
             * */            
            LogisticDistribution(const double& mu, const double& scale);
            
            /// \brief A copy constructor
            LogisticDistribution(const LogisticDistribution& logistic);

            /** \brief Returns the number of parameters of the logistic distribution
             *
             * \details The number of parameters of a logistic distribution is \f$2\f$ (\f$\mu\f$ and \f$s\f$).
             * */
            virtual unsigned int get_nb_parameters() const;
        	
        	/// \brief Get the value of mu.
            const double& get_mu() const;
            
            /// \brief Set the value of mu.
            void set_mu(const double& mu);

			/// \brief Get the value of scale.
            const double& get_scale() const;
            
            /// \brief Set the value of scale.
            void set_scale(const double& scale);
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 \ln f(x) = - 2 \ln \left\lbrace \cosh \left( 0.5 \; \frac{x-\mu}{s} \right) \right\rbrace - \ln (4s).
		     *			\f]
		     * \param value The considered value.
		     * */ 
            virtual double ldf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 f(x) =  \frac{4s}{\cosh^2 \left( 0.5 \; \frac{x-\mu}{s} \right)}.
		     *			\f]
		     * \param value The considered value.
		     * */             
            virtual double pdf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 P(X \leq x) = 0.5 \; \left\lbrace 1+\tanh \left( 0.5 \; \frac{x-\mu}{s} \right) \right\rbrace.
		     *			\f]
		     * \param value The considered value.
		     * */             
            virtual double cdf(const double& value) const;

			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
			*  The quantile is computed as \f$ x = \mu + s \ln \left( \frac{p}{1-p} \right) \f$.
			* */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

			/// \brief Get mean of logistic distribution \f$ E(X) = \mu \f$.
            virtual double get_mean() const;

			/// \brief Get variance of logistic distribution \f$ V(X) = \frac{s^2 \pi^2}{3} \f$.
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
