/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_SAMPLE_SPACE_H
#define STATISKIT_CORE_SAMPLE_SPACE_H

#include "base.h"
#include "event.h"

#include <algorithm>
#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>
#include <map>
#include <armadillo>

namespace statiskit
{    
    enum ordering_type
    {
        NONE,
        TOTAL,
        PARTIAL,
    };

    struct UnivariateSampleSpace
    {
        virtual outcome_type get_outcome() const = 0;

        virtual ordering_type get_ordering() const = 0;

        virtual bool is_compatible(const UnivariateEvent* event) const = 0;

        std::unique_ptr< UnivariateSampleSpace > copy() const;
    };

    struct sample_space_error : parameter_error
    { sample_space_error(const std::string& parameter, const outcome_type& expected); };

    enum encoding_type 
    {
        TREATMENT,
        DEVIATION,
        CUMULATIVE,
    };

    struct CategoricalSampleSpace : public UnivariateSampleSpace
    {
        public:
            CategoricalSampleSpace(const std::set< std::string >& values);
            CategoricalSampleSpace(const CategoricalSampleSpace& sample_space);

            virtual bool is_compatible(const UnivariateEvent* event) const;
            
            virtual outcome_type get_outcome() const; 
            
            size_t get_cardinality() const;

            const std::set< std::string >& get_values() const;        
                
            encoding_type get_encoding() const;
            virtual void set_encoding(const encoding_type& encoding) = 0;
            
            virtual arma::rowvec encode(const std::string& outcome) const = 0;

        protected:
            std::set< std::string > _values;
            encoding_type _encoding;            
    };

    class NominalSampleSpace : public CategoricalSampleSpace
    {
        public:
            NominalSampleSpace(const std::set< std::string >& values);
            NominalSampleSpace(const NominalSampleSpace& sample_space);
            virtual ~NominalSampleSpace();
            
            virtual ordering_type get_ordering() const;

            const std::string& get_reference() const;
            void set_reference(const std::string& reference);

            void randomize();

            void set_encoding(const encoding_type& encoding);

            virtual arma::rowvec encode(const std::string& value) const;

            std::unique_ptr< UnivariateSampleSpace > copy() const;

        protected:
            std::set< std::string >::const_iterator _reference;
    };

    class OrdinalSampleSpace : public CategoricalSampleSpace
    {
        public:
            OrdinalSampleSpace(const std::vector< std::string >& values);
            OrdinalSampleSpace(const OrdinalSampleSpace& sample_space);
            virtual ~OrdinalSampleSpace();

            virtual ordering_type get_ordering() const;

            std::vector< std::string > get_ordered() const;

            const std::vector< size_t >& get_rank() const;
            void set_rank(const std::vector< size_t >& rank);

            void randomize();

            void set_encoding(const encoding_type& encoding);

            virtual arma::rowvec encode(const std::string& value) const;

            virtual std::unique_ptr< UnivariateSampleSpace > copy() const;

        protected:
            std::vector< size_t > _rank;
    };

    struct DiscreteSampleSpace : public UnivariateSampleSpace
    {
        virtual outcome_type get_outcome() const; 

        virtual ordering_type get_ordering() const;
    };

    class IntegerSampleSpace : public DiscreteSampleSpace
    {
        public:
            IntegerSampleSpace(const int& lower_bound=std::numeric_limits< int >::min(), const int& upper_bound=std::numeric_limits< int >::max());
            virtual ~IntegerSampleSpace();

            virtual bool is_compatible(const UnivariateEvent* event) const;

            const int& get_lower_bound() const;

            const int& get_upper_bound() const;

            virtual std::unique_ptr< UnivariateSampleSpace > copy() const;

        protected:
            int _lower_bound;
            int _upper_bound;
    };

    const IntegerSampleSpace& get_NN();
    const IntegerSampleSpace& get_ZZ();

    struct ContinuousSampleSpace : public UnivariateSampleSpace
    { 
        virtual outcome_type get_outcome() const;
    
        virtual ordering_type get_ordering() const;
    };
    
    class RealSampleSpace : public ContinuousSampleSpace
    {
        public:
            RealSampleSpace(const double& lower_bound=-1*std::numeric_limits< double >::infinity(), const double& upper_bound=std::numeric_limits< double >::infinity(), const bool& left_closed=false, const bool& right_closed=false);
            virtual ~RealSampleSpace();

            virtual bool is_compatible(const UnivariateEvent* event) const;

            const double& get_lower_bound() const;

            const double& get_upper_bound() const;

            const bool& get_left_closed() const;

            const bool& get_right_closed() const;

            virtual std::unique_ptr< UnivariateSampleSpace > copy() const;

        protected:
            double _lower_bound;
            double _upper_bound;
            bool _left_closed;
            bool _right_closed;
    };

    const RealSampleSpace& get_RR();
    const RealSampleSpace& get_PR();
    const RealSampleSpace& get_NR();

    struct MultivariateSampleSpace
    {
        virtual size_t size() const = 0;
        
        virtual const UnivariateSampleSpace* get(const size_t& index) const = 0;
        
        virtual size_t encode() const;
        
        virtual arma::rowvec encode(const MultivariateEvent& event) const;
        
        virtual std::unique_ptr< MultivariateSampleSpace > copy() const = 0;
    };

}

#endif
