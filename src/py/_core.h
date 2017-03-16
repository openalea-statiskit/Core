#ifndef AUTOWIG__CORE
#define AUTOWIG__CORE

#include <boost/python.hpp>
#include <type_traits>
#include <statiskit/core/event.h>
#include <statiskit/core/slope_heuristic.h>
#include <statiskit/core/moment.h>
#include <statiskit/core/mixture.h>
#include <statiskit/core/sample_space.h>
#include <statiskit/core/base.h>
#include <statiskit/core/estimation.h>
#include <statiskit/core/estimator.h>
#include <statiskit/core/data.h>
#include <statiskit/core/distribution.h>
#include <memory>

namespace autowig
{
     template<class T> struct Held {
        typedef std::shared_ptr< T > Type;
        static bool const is_class = true;
    };
}

/*namespace autowig
{
    class Wrap_0f631b8bbb065d39a1378915b306a904 : public ::statiskit::UnivariateSampleSpace, public boost::python::wrapper< struct ::statiskit::UnivariateSampleSpace >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
            virtual bool  is_compatible(struct ::statiskit::UnivariateEvent const * param_0) const
            { return this->get_override("is_compatible")(param_0); }
            virtual enum ::statiskit::ordering_type  get_ordering() const
            { return this->get_override("get_ordering")(); }
            virtual enum ::statiskit::outcome_type  get_outcome() const
            { return this->get_override("get_outcome")(); }

        protected:
            

        private:
            

    };

    class Wrap_2513f8d88792503e97d2b3f6b8c31e6f : public ::statiskit::UnivariateData, public boost::python::wrapper< struct ::statiskit::UnivariateData >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > (result);
            }
            virtual struct ::statiskit::UnivariateSampleSpace const * get_sample_space() const
            { return this->get_override("get_sample_space")(); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >  generator() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > > ::element_type* result = this->get_override("generator")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_340c5465095052af9d63bdb8d9799d79 : public ::statiskit::UnivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::UnivariateDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::UnivariateDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }

        protected:
            

        private:
            

    };

    class Wrap_38789725488459f2828bf83b439865f4 : public ::statiskit::MeanEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::MeanEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MeanEstimation, struct ::std::default_delete< struct ::statiskit::MeanEstimation > >  operator()(struct ::statiskit::UnivariateData const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MeanEstimation, struct ::std::default_delete< struct ::statiskit::MeanEstimation > > ::element_type* result = this->get_override("operator()")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MeanEstimation, struct ::std::default_delete< struct ::statiskit::MeanEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_39737fb8eb785c29bb3a9eca8ab9e325 : public ::statiskit::UnivariateData::Generator, public boost::python::wrapper< struct ::statiskit::UnivariateData::Generator >
    {
        public:
            
            virtual double  weight() const
            { return this->get_override("weight")(); }
            virtual struct ::statiskit::UnivariateEvent const * event() const
            { return this->get_override("event")(); }
            virtual struct ::statiskit::UnivariateData::Generator & operator++() 
            { return this->get_override("operator++")(); }
            virtual bool  is_valid() const
            { return this->get_override("is_valid")(); }

        protected:
            

        private:
            

    };

    class Wrap_3e3d38965c5e5a02ae621877dba470cf : public ::statiskit::SlopeHeuristicSelector, public boost::python::wrapper< struct ::statiskit::SlopeHeuristicSelector >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > > (result);
            }
            virtual ::statiskit::Index  operator()(class ::statiskit::SlopeHeuristic const & param_0) const
            { return this->get_override("operator()")(param_0); }

        protected:
            

        private:
            

    };

    class Wrap_41e812da3d3654cd9fb33041c3acf25f : public ::statiskit::UnivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::UnivariateDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  operator()(::statiskit::UnivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_43ff7c79dcd15ad9995fd0d0ccc6d440 : public ::statiskit::MultivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::MultivariateDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::MultivariateDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }

        protected:
            

        private:
            

    };

    class Wrap_4540538b16205d90be33cf08feed0673 : public ::statiskit::MultivariateDistribution, public boost::python::wrapper< struct ::statiskit::MultivariateDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }

        protected:
            

        private:
            

    };

    class Wrap_5186497276525dcc88f6e6e8b313d2af : public ::statiskit::SlopeHeuristicSolver, public boost::python::wrapper< class ::statiskit::SlopeHeuristicSolver >
    {
        public:
            
            virtual class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > >  copy() const
            {
                 ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > (result);
            }
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  operator()(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & param_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_1) const
            { return this->get_override("operator()")(param_0, param_1); }

        protected:
            

        private:
            

    };

    class Wrap_6eb1ba92b1d158b09999c16267a2ec28 : public ::statiskit::MultivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::MultivariateDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  operator()(::statiskit::MultivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_7ed55bcdec33582fb2767f7d96937c85 : public ::statiskit::UnivariateConditionalDistribution, public boost::python::wrapper< struct ::statiskit::UnivariateConditionalDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > (result);
            }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
            virtual struct ::statiskit::MultivariateSampleSpace const * get_explanatory_space() const
            { return this->get_override("get_explanatory_space")(); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  get_response_space() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("get_response_space")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
            virtual struct ::statiskit::UnivariateDistribution const * operator()(struct ::statiskit::MultivariateEvent const & param_0) 
            { return this->get_override("operator()")(param_0); }

        protected:
            

        private:
            

    };

    class Wrap_88cb53c05b215504b1f0ee0564765af0 : public ::statiskit::MultivariateData, public boost::python::wrapper< struct ::statiskit::MultivariateData >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  extract(class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > ::element_type* result = this->get_override("extract")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  extract(::statiskit::Index const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > ::element_type* result = this->get_override("extract")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > (result);
            }
            virtual struct ::statiskit::MultivariateSampleSpace const * get_sample_space() const
            { return this->get_override("get_sample_space")(); }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  generator() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > > ::element_type* result = this->get_override("generator")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_98e77d2afcc252cba528077bc2cc3103 : public ::statiskit::MultivariateData::Generator, public boost::python::wrapper< struct ::statiskit::MultivariateData::Generator >
    {
        public:
            
            virtual double  weight() const
            { return this->get_override("weight")(); }
            virtual struct ::statiskit::MultivariateEvent const * event() const
            { return this->get_override("event")(); }
            virtual struct ::statiskit::MultivariateData::Generator & operator++() 
            { return this->get_override("operator++")(); }
            virtual bool  is_valid() const
            { return this->get_override("is_valid")(); }

        protected:
            

        private:
            

    };

    class Wrap_99c254a34dca5e70bdf05b701c5b7360 : public ::statiskit::VarianceEstimation, public boost::python::wrapper< class ::statiskit::VarianceEstimation >
    {
        public:
            
            virtual double const & get_variance() const
            { return this->get_override("get_variance")(); }

        protected:
            

        private:
            

    };

    class Wrap_a40e46e6e0ca59f7a440e68cd5fd7072 : public ::statiskit::MultivariateEvent, public boost::python::wrapper< struct ::statiskit::MultivariateEvent >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
            virtual struct ::statiskit::UnivariateEvent const * get(::statiskit::Index const & param_0) const
            { return this->get_override("get")(param_0); }
            virtual ::statiskit::Index  size() const
            { return this->get_override("size")(); }

        protected:
            

        private:
            

    };

    class Wrap_c9a2f82a42795e79b282609850c28571 : public ::statiskit::MeanEstimation, public boost::python::wrapper< struct ::statiskit::MeanEstimation >
    {
        public:
            
            virtual double const & get_mean() const
            { return this->get_override("get_mean")(); }

        protected:
            

        private:
            

    };

    class Wrap_ce83e073e997563e890b79b6b3db0bed : public ::statiskit::VarianceEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::VarianceEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > >  operator()(struct ::statiskit::UnivariateData const & param_0, double const & param_1) const
            {
                 ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_daf74149f27453a7a5360a8ea7e9d69c : public ::statiskit::UnivariateDistribution, public boost::python::wrapper< struct ::statiskit::UnivariateDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
            virtual double  probability(struct ::statiskit::UnivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }

        protected:
            

        private:
            

    };

    class Wrap_e695b5b519815f1f96debe2f459d2f2b : public ::statiskit::UnivariateEvent, public boost::python::wrapper< struct ::statiskit::UnivariateEvent >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
            virtual enum ::statiskit::event_type  get_event() const
            { return this->get_override("get_event")(); }
            virtual enum ::statiskit::outcome_type  get_outcome() const
            { return this->get_override("get_outcome")(); }

        protected:
            

        private:
            

    };

    class Wrap_faed70c01c41556a87ba6c938ce7c777 : public ::statiskit::MultivariateSampleSpace, public boost::python::wrapper< struct ::statiskit::MultivariateSampleSpace >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > (result);
            }
            virtual struct ::statiskit::UnivariateSampleSpace const * get(::statiskit::Index const & param_0) const
            { return this->get_override("get")(param_0); }
            virtual ::statiskit::Index  size() const
            { return this->get_override("size")(); }

        protected:
            

        private:
            

    };

    class Wrap_02cb27a2f5305d6eaf2fc0d0977b5565 : public ::statiskit::DiscreteUnivariateDistribution, public boost::python::wrapper< struct ::statiskit::DiscreteUnivariateDistribution >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
            virtual int  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
            virtual double  cdf(int const & param_0) const
            { return this->get_override("cdf")(param_0); }
            virtual double  pdf(int const & param_0) const
            { return this->get_override("pdf")(param_0); }
            virtual double  ldf(int const & param_0) const
            { return this->get_override("ldf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }

        protected:
            

        private:
            

    };

    class Wrap_09231b7789ec5a69ad76d8618a8abb42 : public ::statiskit::IndependentMultivariateDistribution< ::statiskit::MultivariateDistribution >, public boost::python::wrapper< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::MultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_14a9cd2a8d9a572e8c7d58d490e5269e : public ::statiskit::CategoricalSampleSpace, public boost::python::wrapper< struct ::statiskit::CategoricalSampleSpace >
    {
        public:
            
            virtual class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  encode(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_0) const
            { return this->get_override("encode")(param_0); }
            virtual void  set_encoding(enum ::statiskit::encoding_type const & param_0) 
            { this->get_override("set_encoding")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
            virtual enum ::statiskit::ordering_type  get_ordering() const
            { return this->get_override("get_ordering")(); }

        protected:
            

        private:
            

    };

    class Wrap_206185953d7651e78a6714d1fe602758 : public ::statiskit::ContinuousUnivariateConditionalDistribution, public boost::python::wrapper< struct ::statiskit::ContinuousUnivariateConditionalDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > (result);
            }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
            virtual struct ::statiskit::MultivariateSampleSpace const * get_explanatory_space() const
            { return this->get_override("get_explanatory_space")(); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  get_response_space() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("get_response_space")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
            virtual struct ::statiskit::UnivariateDistribution const * operator()(struct ::statiskit::MultivariateEvent const & param_0) 
            { return this->get_override("operator()")(param_0); }

        protected:
            

        private:
            

    };

    class Wrap_295ece6953a856c8b865758b0a34795c : public ::statiskit::CategoricalUnivariateConditionalDistribution, public boost::python::wrapper< struct ::statiskit::CategoricalUnivariateConditionalDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > (result);
            }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
            virtual struct ::statiskit::MultivariateSampleSpace const * get_explanatory_space() const
            { return this->get_override("get_explanatory_space")(); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  get_response_space() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("get_response_space")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
            virtual struct ::statiskit::UnivariateDistribution const * operator()(struct ::statiskit::MultivariateEvent const & param_0) 
            { return this->get_override("operator()")(param_0); }

        protected:
            

        private:
            

    };

    class Wrap_31aa0a631312549a9cf4cb8740b55a7f : public ::statiskit::DiscreteMultivariateDistribution, public boost::python::wrapper< struct ::statiskit::DiscreteMultivariateDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }

        protected:
            

        private:
            

    };

    class Wrap_354f862e227e590491c20a9acad58d0b : public ::statiskit::DiscreteUnivariateConditionalDistribution, public boost::python::wrapper< struct ::statiskit::DiscreteUnivariateConditionalDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > (result);
            }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
            virtual struct ::statiskit::MultivariateSampleSpace const * get_explanatory_space() const
            { return this->get_override("get_explanatory_space")(); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  get_response_space() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("get_response_space")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
            virtual struct ::statiskit::UnivariateDistribution const * operator()(struct ::statiskit::MultivariateEvent const & param_0) 
            { return this->get_override("operator()")(param_0); }

        protected:
            

        private:
            

    };

    class Wrap_3ae69567ec205969a9f2da364450fd2e : public ::statiskit::DiscreteEvent, public boost::python::wrapper< struct ::statiskit::DiscreteEvent >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
            virtual enum ::statiskit::event_type  get_event() const
            { return this->get_override("get_event")(); }

        protected:
            

        private:
            

    };

    class Wrap_413148ff15d05180b4dbaaac395b3625 : public ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  operator()(::statiskit::MultivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_54cf6a9a8b6f55e88b9761ceaf79ba3f : public ::statiskit::ContinuousUnivariateDistribution, public boost::python::wrapper< struct ::statiskit::ContinuousUnivariateDistribution >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
            virtual double  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
            virtual double  cdf(double const & param_0) const
            { return this->get_override("cdf")(param_0); }
            virtual double  pdf(double const & param_0) const
            { return this->get_override("pdf")(param_0); }
            virtual double  ldf(double const & param_0) const
            { return this->get_override("ldf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }

        protected:
            

        private:
            

    };

    class Wrap_5b5f1c1f4aa852eab398cea6df20fee2 : public ::statiskit::WeightedData< ::statiskit::MultivariateData >, public boost::python::wrapper< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  extract(class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > ::element_type* result = this->get_override("extract")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  extract(::statiskit::Index const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > ::element_type* result = this->get_override("extract")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_622b4b6c4fef5b119cba23181cff6cf6 : public ::statiskit::ContinuousMultivariateDistribution, public boost::python::wrapper< struct ::statiskit::ContinuousMultivariateDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }

        protected:
            

        private:
            

    };

    class Wrap_643847dccc2b560082343f2bbda15cba : public ::statiskit::SlopeHeuristicIWLSSolver, public boost::python::wrapper< class ::statiskit::SlopeHeuristicIWLSSolver >
    {
        public:
            
            virtual class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > >  copy() const
            {
                 ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > (result);
            }

        protected:
            
            virtual void  update(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_1, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & param_2, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_3) const
            { this->get_override("update")(param_0, param_1, param_2, param_3); }

        private:
            

    };

    class Wrap_64ae6eddce405116ba534ed722881799 : public ::statiskit::WeightedData< ::statiskit::UnivariateData >, public boost::python::wrapper< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 : public ::statiskit::DiscreteSampleSpace, public boost::python::wrapper< struct ::statiskit::DiscreteSampleSpace >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
            virtual bool  is_compatible(struct ::statiskit::UnivariateEvent const * param_0) const
            { return this->get_override("is_compatible")(param_0); }

        protected:
            

        private:
            

    };

    class Wrap_69ca358c24cd5cabb1a6b9e1358519e4 : public ::statiskit::ContinuousEvent, public boost::python::wrapper< struct ::statiskit::ContinuousEvent >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
            virtual enum ::statiskit::event_type  get_event() const
            { return this->get_override("get_event")(); }

        protected:
            

        private:
            

    };

    class Wrap_9b457c1fefee52aeba68eb2ee374d6c8 : public ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  operator()(::statiskit::MultivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_a744c0e699b3529e8ea41b36264771ec : public ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  operator()(::statiskit::UnivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_aa6b2bab0be654649ef497aa71dff2e3 : public ::statiskit::ContinuousSampleSpace, public boost::python::wrapper< struct ::statiskit::ContinuousSampleSpace >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
            virtual bool  is_compatible(struct ::statiskit::UnivariateEvent const * param_0) const
            { return this->get_override("is_compatible")(param_0); }

        protected:
            

        private:
            

    };

    class Wrap_ae5ffcb5f4c75f5cbb01e288fa5a986d : public ::statiskit::DiscreteUnivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::DiscreteUnivariateDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::UnivariateDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }

        protected:
            

        private:
            

    };

    class Wrap_b01f9728b14b55c9ba04fb0a2ddd2cda : public ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  operator()(::statiskit::MultivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_b14b3594a74c5ccc968141047b5145f4 : public ::statiskit::DiscreteMultivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::DiscreteMultivariateDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::MultivariateDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }

        protected:
            

        private:
            

    };

    class Wrap_b24ad967ae66587ba612c3f37635bddb : public ::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }

        protected:
            

        private:
            

    };

    class Wrap_c1af1f263c37571f8e1257a72f39fd05 : public ::statiskit::CategoricalMultivariateDistribution, public boost::python::wrapper< struct ::statiskit::CategoricalMultivariateDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }

        protected:
            

        private:
            

    };

    class Wrap_c4726473069d576fbb9e53aacbf298ea : public ::statiskit::CategoricalUnivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::CategoricalUnivariateDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::UnivariateDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }

        protected:
            

        private:
            

    };

    class Wrap_cf0179fb6c94524589e450e5bcacc532 : public ::statiskit::CategoricalEvent, public boost::python::wrapper< struct ::statiskit::CategoricalEvent >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
            virtual enum ::statiskit::event_type  get_event() const
            { return this->get_override("get_event")(); }

        protected:
            

        private:
            

    };

    class Wrap_cf0415be3d965595a8486e9a8659c1a9 : public ::statiskit::CategoricalUnivariateDistribution, public boost::python::wrapper< struct ::statiskit::CategoricalUnivariateDistribution >
    {
        public:
            
            virtual class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  get_values() const
            { return this->get_override("get_values")(); }
            virtual double  pdf(int const & param_0) const
            { return this->get_override("pdf")(param_0); }
            virtual double  pdf(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_0) const
            { return this->get_override("pdf")(param_0); }
            virtual double  ldf(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_0) const
            { return this->get_override("ldf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }

        protected:
            

        private:
            

    };

    class Wrap_e1c5f547b5d15a24a9c9a3bab487c15d : public ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  operator()(::statiskit::UnivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_f09c97b097575bf2b4af254e6faa082c : public ::statiskit::CategoricalMultivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::CategoricalMultivariateDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::MultivariateDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }

        protected:
            

        private:
            

    };

    class Wrap_f13beb88f0a956f5bc0cd7245bbd4b1c : public ::statiskit::ContinuousUnivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::ContinuousUnivariateDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::UnivariateDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }

        protected:
            

        private:
            

    };

    class Wrap_f1f8a991c324584993f9a58dcb9c014e : public ::statiskit::ContinuousMultivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::ContinuousMultivariateDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::MultivariateDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }

        protected:
            

        private:
            

    };

    class Wrap_0234ba92b21c578b96baa200aec8212e : public ::statiskit::IndependentMultivariateDistribution< ::statiskit::DiscreteMultivariateDistribution >, public boost::python::wrapper< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_0db25688c9bf5a57b1d944dcc1a3b7f2 : public ::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >, public boost::python::wrapper< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
            virtual int  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
            virtual double  cdf(int const & param_0) const
            { return this->get_override("cdf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_6923aecde43059bd8a00d1bd199ffa8d : public ::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
            virtual double  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
            virtual double  cdf(double const & param_0) const
            { return this->get_override("cdf")(param_0); }
            virtual double  pdf(double const & param_0) const
            { return this->get_override("pdf")(param_0); }
            virtual double  ldf(double const & param_0) const
            { return this->get_override("ldf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_7d0c9ca0e35156dda4481073c8664c19 : public ::statiskit::MixtureDistribution< ::statiskit::DiscreteUnivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
            virtual int  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
            virtual double  cdf(int const & param_0) const
            { return this->get_override("cdf")(param_0); }
            virtual double  pdf(int const & param_0) const
            { return this->get_override("pdf")(param_0); }
            virtual double  ldf(int const & param_0) const
            { return this->get_override("ldf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_84c9be0b16d95273a960328d06f07469 : public ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  operator()(::statiskit::UnivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_8d6042c687a1543d97b4931d7ca1fca8 : public ::statiskit::MixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }

        protected:
            

        private:
            

    };

    class Wrap_a4463e49d7865a6497ec20612e342cbe : public ::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >, public boost::python::wrapper< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >
    {
        public:
            
            virtual double  pdf(int const & param_0) const
            { return this->get_override("pdf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_b588087797ae51f7bce93503c0c1a013 : public ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  operator()(::statiskit::UnivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_bf5b68f25d1f5ab9ad2c936351edf740 : public ::statiskit::UnivariateFrequencyDistribution< ::statiskit::ContinuousUnivariateDistribution >, public boost::python::wrapper< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
            virtual double  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
            virtual double  cdf(double const & param_0) const
            { return this->get_override("cdf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_c50f0d84f3a05771b904e670721690e3 : public ::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >
    {
        public:
            
            virtual class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  get_values() const
            { return this->get_override("get_values")(); }
            virtual double  pdf(int const & param_0) const
            { return this->get_override("pdf")(param_0); }
            virtual double  pdf(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_0) const
            { return this->get_override("pdf")(param_0); }
            virtual double  ldf(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_0) const
            { return this->get_override("ldf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_d4b7bfff2e0551769c3e6767fe7dca05 : public ::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }

        protected:
            

        private:
            

    };

    class Wrap_d795e2008d505a07a0b1806c150970f3 : public ::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >, public boost::python::wrapper< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_dcb42c58c45353839bf4d081d804b14c : public ::statiskit::MixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }

        protected:
            

        private:
            

    };

    class Wrap_fcd0d238df3b57e18bea85b9cc6689bd : public ::statiskit::IndependentMultivariateDistribution< ::statiskit::CategoricalMultivariateDistribution >, public boost::python::wrapper< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_055ebc8a6eb3586cb94dfd0b3df1eb0f : public ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
            virtual int  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
            virtual double  cdf(int const & param_0) const
            { return this->get_override("cdf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_1935a142d4425b8e9212ebbb3d98b996 : public ::statiskit::OptimizationEstimation< double, ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  operator()(::statiskit::UnivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_55c0eb1fcb6e5b0da7045e99481d4b0c : public ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >
    {
        public:
            
            virtual class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  get_values() const
            { return this->get_override("get_values")(); }
            virtual double  pdf(int const & param_0) const
            { return this->get_override("pdf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_61234f1033f25f108ec6c1bb0d3ddf38 : public ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
            virtual double  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
            virtual double  cdf(double const & param_0) const
            { return this->get_override("cdf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_6345fc1b6c0c5953a1ea3e895aa4e75f : public ::statiskit::OptimizationEstimation< unsigned int, ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  operator()(::statiskit::UnivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_61733bdc2db95f128686b3292ae9259a : public ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >
    {
        public:
            
            virtual double  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };

    class Wrap_9961bd1cc47c50ed9fd0cd4ed55feeb4 : public ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >
    {
        public:
            
            virtual int  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };
}*/
#endif