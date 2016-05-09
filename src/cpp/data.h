/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_DATA_H
#define STATISKIT_CORE_DATA_H

#include "sample_space.h"

#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>

namespace statiskit
{
    struct UnivariateData
    {
        typedef UnivariateSampleSpace sample_space_type;
        typedef UnivariateEvent event_type;

        virtual const UnivariateSampleSpace* get_sample_space() const = 0;
        
        virtual size_t size() const = 0;
        
        virtual const UnivariateEvent* get_event(const size_t& index) const = 0;
        virtual void set_event(const size_t& index, const UnivariateEvent* event) = 0;
        
        virtual bool is_weighted() const = 0;

        virtual double get_weight(const size_t& index) const = 0;
        
        virtual double compute_total() const;
        virtual std::unique_ptr< UnivariateEvent > compute_minimum() const;
        virtual std::unique_ptr< UnivariateEvent > compute_maximum() const;
        
        virtual void lock() = 0;
        virtual void unlock() = 0;
        virtual const bool& is_locked() const = 0;

        virtual std::unique_ptr< UnivariateData > copy() const = 0;
    };
 
    class NamedData
    {
        public:
            NamedData();
            NamedData(const std::string& identifier);
            NamedData(const NamedData& named_data);
            ~NamedData();

            const std::string& get_identifier() const;
            void set_identifier(const std::string& identifier);

            const std::string& get_ascii() const;
            void set_ascii(const std::string& ascii);

            const std::string& get_latex() const;
            void set_latex(const std::string& latex);

        protected:
            std::string _identifier;
            std::string _ascii;
            std::string _latex;

        private:
            static unsigned int __index;
    };

    class UnivariateDataFrame : public UnivariateData, public NamedData
    {
        public:
            UnivariateDataFrame(const UnivariateSampleSpace& sample_space);
            UnivariateDataFrame(const UnivariateDataFrame& data);
            virtual ~UnivariateDataFrame();

            virtual const UnivariateSampleSpace* get_sample_space() const;
            void set_sample_space(const UnivariateSampleSpace& sample_space);

            virtual size_t size() const;

            virtual const UnivariateEvent* get_event(const size_t& index) const;
            virtual void set_event(const size_t& index, const UnivariateEvent* event);

            virtual void add_event(const UnivariateEvent* event);
            virtual std::unique_ptr< UnivariateEvent > pop_event();

            virtual void insert_event(const size_t& index, const UnivariateEvent* event);
            virtual void remove_event(const size_t& index);

            virtual bool is_weighted() const;

            virtual double get_weight(const size_t& index) const;
            
            virtual void lock();
            virtual void unlock();
            virtual const bool& is_locked() const;

            virtual std::unique_ptr< UnivariateData > copy() const;

        protected:
            UnivariateSampleSpace* _sample_space;
            std::vector< UnivariateEvent* > _events;
            bool _locked;
    };

    class WeightedUnivariateDataFrame : public UnivariateDataFrame
    {
        public:
            WeightedUnivariateDataFrame(const UnivariateSampleSpace& sample_space);
            WeightedUnivariateDataFrame(const WeightedUnivariateDataFrame& data);
            virtual ~WeightedUnivariateDataFrame();

            virtual void add_event(const UnivariateEvent* event);
            virtual std::unique_ptr< UnivariateEvent > pop_event();

            virtual void insert_event(const size_t& index, const UnivariateEvent* event);
            virtual void remove_event(const size_t& index);

            virtual bool is_weighted() const;

            virtual double get_weight(const size_t& index) const;     
            void set_weight(const size_t& index, const double& weight);       

            virtual std::unique_ptr< UnivariateData > copy() const;            

        protected:
            std::vector< double > _weights;
    };

    struct MultivariateData
    {
        typedef MultivariateSampleSpace sample_space_type;
        typedef MultivariateEvent event_type;
        
        virtual const MultivariateSampleSpace* get_sample_space() const = 0;
        
        virtual explicit operator bool() const = 0;
        
        virtual size_t size() const = 0;

        virtual const MultivariateEvent* get_event(const size_t& index) const = 0;
        virtual void set_event(const size_t& index, const MultivariateEvent* event) = 0;

        virtual bool is_weighted() const = 0;

        virtual double get_weight(const size_t& index) const = 0;
        
        virtual double compute_total() const;
        virtual std::unique_ptr< MultivariateEvent > compute_minimum() const;
        virtual std::unique_ptr< MultivariateEvent > compute_maximum() const;
        
        virtual void lock() = 0;
        virtual void unlock() = 0;
        virtual const bool& is_locked() const = 0;
        
        virtual std::unique_ptr< MultivariateData > copy() const = 0;
    };

    class MultivariateDataFrame : public MultivariateData
    {
        public:
            MultivariateDataFrame();
            MultivariateDataFrame(const std::vector< std::shared_ptr< UnivariateData > >& variables);
            MultivariateDataFrame(const MultivariateDataFrame& data);
            virtual ~MultivariateDataFrame();
 
            virtual const MultivariateSampleSpace* get_sample_space() const;

            virtual explicit operator bool() const;
            
            virtual size_t size() const;

            virtual const MultivariateEvent* get_event(const size_t& index) const;
            virtual void set_event(const size_t& index, const MultivariateEvent* event);

            virtual void add_event(const UnivariateEvent* event);
            virtual std::unique_ptr< UnivariateEvent > pop_event();

            virtual void insert_event(const size_t& index, const MultivariateEvent* event);
            virtual void remove_event(const size_t& index);
     
            virtual bool is_weighted() const;

            double get_weight(const size_t& index) const;

            size_t get_nb_variables() const;
            
            const std::shared_ptr< UnivariateData >& get_variable(const size_t& index) const;
            std::shared_ptr< MultivariateDataFrame > get_variables(const std::set< size_t >& indices) const;
            void set_variable(const size_t& index, const std::shared_ptr< UnivariateData >& variable);
            void insert_variable(const size_t& index, const std::shared_ptr< UnivariateData >& variable);
            void remove_variable(const size_t& index);
            void append_variable(const std::shared_ptr< UnivariateData >& variable);

            void lock();
            void unlock();
            const bool& is_locked() const;

            double compute_total() const;
            
            virtual std::unique_ptr< MultivariateData > copy() const;

        protected:
            class Event : public MultivariateEvent
            {
                public:
                    Event(const size_t* index, const MultivariateDataFrame* data);
                    Event(const Event& event);
                    virtual ~Event();

                    virtual size_t size() const;

                    virtual const UnivariateEvent* get(const size_t& index) const;
                    virtual void set(const size_t& index, const UnivariateEvent* event);
 
                    virtual std::unique_ptr< MultivariateEvent > copy() const;

                protected:
                    const size_t* _index;
                    const MultivariateDataFrame* _data;
            };

            class SampleSpace : public MultivariateSampleSpace
            {
                public:
                    SampleSpace(MultivariateDataFrame* data);
                    SampleSpace(const SampleSpace& sample_space);
                    virtual ~SampleSpace();

                    virtual size_t size() const;

                    virtual const UnivariateSampleSpace* get(const size_t& index) const;
 
                    virtual std::unique_ptr< MultivariateSampleSpace > copy() const;

                protected:
                    size_t _index;
                    MultivariateDataFrame* _data;
            };

            SampleSpace* _sample_space;
            std::vector< std::shared_ptr< UnivariateData > > _variables;
            bool _locked;
    };

    template<class D>
    class DataMask : public D
    {
        public:
            DataMask(const std::shared_ptr< D >& masked);
            DataMask(const DataMask< D >& data);

            const std::shared_ptr< D >& get_masked() const;

            virtual const typename D::sample_space_type* get_sample_space() const;
                         
            virtual const typename D::event_type * get_event(const size_t& index) const;
            virtual void set_event(const size_t& index, const typename D::event_type* event);
           
            virtual bool is_weighted() const;

            virtual double get_weight(const size_t& index) const;
            
            virtual void lock();
            virtual void unlock();
            virtual const bool& is_locked() const;
            
        protected:
            std::shared_ptr< D > _masked;
            
            virtual size_t compute_index(const size_t& index) const = 0;
    };

    template<class D>
    class RandomizedData : public DataMask< D >
    {
        public:
            RandomizedData(const std::shared_ptr< D >& randomized);
            RandomizedData(const RandomizedData< D >& data);
            
            virtual size_t size() const;

            const std::shared_ptr< D >& get_randomized() const;

            const std::vector< size_t >& get_randomization() const;

            void randomize();

            virtual std::unique_ptr< D > copy() const;

        protected:
            std::vector< size_t > _randomization;
            
            virtual size_t compute_index(const size_t& index) const;       
    };

  
    template<class D>
    class DataIntervalMask : public DataMask< D >
    {
        public:
            DataIntervalMask(const std::shared_ptr< D >& masked, const size_t& lower, const size_t& upper, const bool& inside);
            DataIntervalMask(const DataIntervalMask< D >& data);
            
            virtual size_t size() const;
            
            const bool& get_inside() const;
            void set_inside(const bool& inside);

            virtual std::unique_ptr< D > copy() const;

        protected:
            size_t _lower;
            size_t _upper;
            bool _inside;
            
            virtual size_t compute_index(const size_t& index) const;                    
    };
}

#include "data.hpp"
#endif
