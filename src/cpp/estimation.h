
#ifndef STATISKIT_CORE_ESTIMATION_H
#define STATISKIT_CORE_ESTIMATION_H

#include "base.h"
#include "sample_space.h"
#include "data.h"
#include "distribution.h"

namespace statiskit
{
    struct STATISKIT_CORE_API sample_space_error : parameter_error
    { sample_space_error(const outcome_type& expected); };

    struct STATISKIT_CORE_API sample_size_error : parameter_error
    { sample_size_error(const unsigned int& minsize); };

    struct STATISKIT_CORE_API overdispersion_error : parameter_error
    { overdispersion_error(); };

    struct STATISKIT_CORE_API underdispersion_error : parameter_error
    { underdispersion_error(); };

    struct STATISKIT_CORE_API UnivariateDistributionEstimation
    {
        typedef UnivariateData data_type;
        typedef UnivariateDistribution estimated_type;

        virtual ~UnivariateDistributionEstimation() = 0;

        virtual estimated_type const * get_estimated() const = 0;
        
        struct STATISKIT_CORE_API Estimator
        { 
            typedef UnivariateDistributionEstimation estimation_type;

            virtual ~Estimator() = 0;

            virtual std::unique_ptr< estimation_type > operator() (const MultivariateData& data, const size_t& index) const;
            virtual std::unique_ptr< estimation_type > operator() (const data_type& data, const bool& lazy=true) const = 0;

            virtual std::unique_ptr< Estimator > copy() const = 0;
        };
    };

    template<class D, class B>
    class LazyEstimation : public B
    {
        public:
            LazyEstimation();
            LazyEstimation(D const * estimated);
            LazyEstimation(const LazyEstimation< D, B >& estimation);
            virtual ~LazyEstimation();

            virtual typename B::estimated_type const * get_estimated() const;

        protected:
            D const * _estimated;
    };

    template<class D, class B> class ActiveEstimation : public LazyEstimation< D, B >
    {
        public:
            ActiveEstimation();
            ActiveEstimation(D const * estimated, typename B::data_type const * data);
            ActiveEstimation(const ActiveEstimation< D, B >& estimation);
            virtual ~ActiveEstimation();

            typename B::data_type const * get_data() const;

        protected:
            typename B::data_type const * _data;
    };

    template<class D, class B> class ListEstimation : public ActiveEstimation< D, B >
    {
        public:
            ListEstimation();
            ListEstimation(D const * estimated, typename B::data_type const * data);
            ListEstimation(const ListEstimation< D, B >& estimation);
            virtual ~ListEstimation();

            size_t size() const;

            B const * get_estimation(const size_t& index) const;

            const double& get_score(const size_t& index) const;

            class STATISKIT_CORE_API Estimator : public B::Estimator
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
                  
                    virtual std::unique_ptr< typename B::estimation_type > operator() (typename B::estimation_type::data_type const & data, const bool& lazy=true) const;

                    size_t size() const;

                    typename B::Estimator * get_estimator(const size_t& index);
                    void set_estimator(const size_t& index, const typename B::Estimator& estimator);

                    void add_estimator(const typename B::Estimator& estimator);
                    void remove_estimator(const size_t& index);

                protected:
                    std::vector< typename B::Estimator * > _estimators;

                    virtual double scoring(const typename B::estimation_type::estimated_type * estimated, typename B::estimation_type::data_type const & data) const = 0;
            };

        protected:
            std::vector< B * > _estimations;
            std::vector< double > _scores;

            void finalize();
    };

    namespace __impl 
    {
        template<class T, class D, class B> class OptimizationEstimation : public ActiveEstimation< D, B >
        {
            public:
                OptimizationEstimation();
                OptimizationEstimation(D const * estimated, typename B::data_type const * data);            
                OptimizationEstimation(const OptimizationEstimation< T, D, B >& estimation);
                virtual ~OptimizationEstimation();

                size_t size() const;

                const T get_step(const size_t& index) const;

                class Estimator : public B::Estimator
                {
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
                        virtual ~Estimator();

                        const double& get_mindiff() const;
                        void set_mindiff(const double& mindiff);
                        
                        unsigned int get_minits() const;
                        void set_minits(const unsigned int& maxits);

                        unsigned int get_maxits() const;
                        void set_maxits(const unsigned int& maxits);

                    protected:
                        double _mindiff;
                        unsigned int _minits;
                        unsigned int _maxits;

                        bool run(const unsigned int& its, const T& prev, const T& curr) const;
                };

            protected:
                std::vector< T > _steps;
        };
    }

    template<class T, class D, class B> struct OptimizationEstimation : __impl::OptimizationEstimation<T, D, B >
    {
        using __impl::OptimizationEstimation<T, D, B >::OptimizationEstimation;
        virtual ~OptimizationEstimation();

        struct Estimator : __impl::OptimizationEstimation<T, D, B >::Estimator
        { 
            using __impl::OptimizationEstimation<T, D, B >::Estimator::Estimator;
            virtual ~Estimator();
        };
    };

    template<class T, class D, class B> struct OptimizationEstimation< T*, D, B> : __impl::OptimizationEstimation<T*, D, B >
    {
        using __impl::OptimizationEstimation<T*, D, B >::OptimizationEstimation;
        OptimizationEstimation(const OptimizationEstimation< T*, D, B>& estimation);
        virtual ~OptimizationEstimation();

        struct Estimator : __impl::OptimizationEstimation<T*, D, B >::Estimator
        { 
            using __impl::OptimizationEstimation<T*, D, B >::Estimator::Estimator;
            virtual ~Estimator();
        };
    };

    struct STATISKIT_CORE_API CategoricalUnivariateDistributionEstimation : UnivariateDistributionEstimation
    { struct STATISKIT_CORE_API Estimator; };

    typedef LazyEstimation< CategoricalUnivariateDistribution, CategoricalUnivariateDistributionEstimation > CategoricalUnivariateDistributionLazyEstimation;
    typedef ActiveEstimation< CategoricalUnivariateDistribution, CategoricalUnivariateDistributionEstimation > CategoricalUnivariateDistributionActiveEstimation;

    struct STATISKIT_CORE_API DiscreteUnivariateDistributionEstimation : UnivariateDistributionEstimation
    { struct STATISKIT_CORE_API Estimator : UnivariateDistributionEstimation::Estimator {}; };

    struct STATISKIT_CORE_API ContinuousUnivariateDistributionEstimation : UnivariateDistributionEstimation
    { struct STATISKIT_CORE_API Estimator : UnivariateDistributionEstimation::Estimator {}; };

    struct STATISKIT_CORE_API MultivariateDistributionEstimation
    {
        typedef MultivariateData data_type;
        typedef MultivariateDistribution estimated_type;
        typedef UnivariateDistributionEstimation marginal_type;

        virtual ~MultivariateDistributionEstimation() = 0;

        virtual estimated_type const * get_estimated() const = 0;
        
        struct STATISKIT_CORE_API Estimator
        {
            typedef MultivariateDistributionEstimation estimation_type;
            typedef UnivariateDistributionEstimation marginal_type;

            virtual ~Estimator() = 0;

            virtual std::unique_ptr< estimation_type > operator() (const data_type& data, const bool& lazy=true) const = 0;

            virtual std::unique_ptr< Estimator > copy() const = 0;
        };
    };

    struct STATISKIT_CORE_API CategoricalMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        typedef CategoricalUnivariateDistributionEstimation marginal_type;

        struct STATISKIT_CORE_API Estimator : MultivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API DiscreteMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        typedef DiscreteUnivariateDistributionEstimation marginal_type;

        struct STATISKIT_CORE_API Estimator : MultivariateDistributionEstimation::Estimator {};
    };

    struct STATISKIT_CORE_API ContinuousMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        typedef ContinuousUnivariateDistributionEstimation marginal_type;

        struct STATISKIT_CORE_API Estimator : MultivariateDistributionEstimation::Estimator {};
    };
}

#include "estimation.hpp"
#endif