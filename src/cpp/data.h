/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_DATA_H
#define STATISKIT_CORE_DATA_H

#include "base.h"
#include "sample_space.h"

#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>

namespace statiskit
{
    class WeightedUnivariateData;

    struct STATISKIT_CORE_API UnivariateData
    {
        typedef UnivariateSampleSpace sample_space_type;
        typedef UnivariateEvent event_type;
        typedef WeightedUnivariateData weighted_type;

        struct STATISKIT_CORE_API Generator
        {
            virtual bool is_valid() const = 0;

            virtual Generator& operator++() = 0;

            virtual const UnivariateEvent* event() const = 0;
            virtual double weight() const = 0;
        };

        virtual std::unique_ptr< UnivariateData::Generator > generator() const = 0;

        virtual const UnivariateSampleSpace* get_sample_space() const = 0;
    
        virtual std::unique_ptr< UnivariateData > copy() const = 0;
        
        double compute_total() const;
        std::unique_ptr< UnivariateEvent > compute_minimum() const;
        std::unique_ptr< UnivariateEvent > compute_maximum() const;
    };

    class STATISKIT_CORE_API NamedData
    {
        public:
            NamedData();
            NamedData(const std::string& name);
            NamedData(const NamedData& named_data);
            ~NamedData();

            const std::string& get_name() const;
            void set_name(const std::string& name);

        protected:
            std::string _name;


        private:
            static unsigned int __index;
    };

    class STATISKIT_CORE_API UnivariateDataFrame : public UnivariateData, public NamedData
    {
        public:
            UnivariateDataFrame(const UnivariateSampleSpace& sample_space);
            UnivariateDataFrame(const UnivariateDataFrame& data);
            virtual ~UnivariateDataFrame();

            virtual std::unique_ptr< UnivariateData::Generator > generator() const;

            virtual const UnivariateSampleSpace* get_sample_space() const;
            void set_sample_space(const UnivariateSampleSpace& sample_space);

            virtual std::unique_ptr< UnivariateData > copy() const;

            virtual Index get_nb_events() const;

            virtual const UnivariateEvent* get_event(const Index& index) const;
            virtual void set_event(const Index& index, const UnivariateEvent* event);

            virtual void add_event(const UnivariateEvent* event);
            virtual std::unique_ptr< UnivariateEvent > pop_event();

            virtual void insert_event(const Index& index, const UnivariateEvent* event);
            virtual void remove_event(const Index& index);

        protected:
            UnivariateSampleSpace* _sample_space;
            std::vector< UnivariateEvent* > _events;

            class STATISKIT_CORE_API Generator : public UnivariateData::Generator
            {
                public:
                    Generator(const UnivariateDataFrame* data);
                    virtual ~Generator();

                    virtual bool is_valid() const;

                    virtual UnivariateData::Generator& operator++();

                    virtual const UnivariateEvent* event() const;
                    virtual double weight() const;

                protected:
                    const UnivariateDataFrame* _data;
                    Index _index;
            };            
    };

    class WeightedMultivariateData;

    struct STATISKIT_CORE_API MultivariateData
    {
        typedef MultivariateSampleSpace sample_space_type;
        typedef MultivariateEvent event_type;
        typedef WeightedMultivariateData weighted_type;

        struct STATISKIT_CORE_API Generator
        {
            virtual bool is_valid() const = 0;

            virtual Generator& operator++() = 0;

            virtual const MultivariateEvent* event() const = 0;
            virtual double weight() const = 0;
        };

        virtual std::unique_ptr< MultivariateData::Generator > generator() const = 0;

        virtual const MultivariateSampleSpace* get_sample_space() const = 0;

        virtual std::unique_ptr< UnivariateData > extract(const Index& index) const = 0;
        virtual std::unique_ptr< MultivariateData > extract(const std::set< Index >& indices) const = 0;

        virtual std::unique_ptr< MultivariateData > copy() const = 0;

        double compute_total() const;
        //virtual std::unique_ptr< MultivariateEvent > compute_minimum() const = 0;
        //virtual std::unique_ptr< MultivariateEvent > compute_maximum() const = 0;
    };

    class STATISKIT_CORE_API MultivariateDataFrame : public MultivariateData
    {
        public:
            MultivariateDataFrame();
            MultivariateDataFrame(const MultivariateDataFrame& data);
            virtual ~MultivariateDataFrame();

            virtual std::unique_ptr< MultivariateData::Generator > generator() const;

            virtual const MultivariateSampleSpace* get_sample_space() const;
            void set_sample_space(const MultivariateSampleSpace& sample_space);
            
            virtual std::unique_ptr< UnivariateData > extract(const Index& index) const;
            virtual std::unique_ptr< MultivariateData > extract(const std::set< Index >& indices) const;

            virtual std::unique_ptr< MultivariateData > copy() const;

            virtual Index get_nb_components() const;

            virtual const UnivariateDataFrame* get_component(const Index& index) const;
            virtual void set_component(const Index& index, const UnivariateDataFrame& component);

            virtual void add_component(const UnivariateDataFrame& component);
            virtual std::unique_ptr< UnivariateDataFrame > pop_component();

            virtual void insert_component(const Index& index, const UnivariateDataFrame& component);
            virtual void remove_component(const Index& index);

            virtual Index get_nb_events() const;

            virtual std::unique_ptr< MultivariateEvent > get_event(const Index& index) const;
            virtual void set_event(const Index& index, const MultivariateEvent* event);

            virtual void add_event(const MultivariateEvent* event);
            virtual std::unique_ptr< MultivariateEvent > pop_event();

            virtual void insert_event(const Index& index, const MultivariateEvent* event);
            virtual void remove_event(const Index& index);

        protected:
            class SampleSpace;

            SampleSpace* _sample_space;
            std::vector< UnivariateDataFrame* > _components;

            class STATISKIT_CORE_API SampleSpace : public MultivariateSampleSpace
            {
                public:
                    SampleSpace(const MultivariateDataFrame* data);
                    SampleSpace(const SampleSpace& sample_space);
                    virtual ~SampleSpace();

                    virtual Index size() const;
                    
                    virtual const UnivariateSampleSpace* get(const Index& index) const;
                                                            
                    virtual std::unique_ptr< MultivariateSampleSpace > copy() const;

                protected:
                    const MultivariateDataFrame* _data;
            };

            class STATISKIT_CORE_API Event : public MultivariateEvent
            {
                public:
                    Event(const MultivariateDataFrame* data, const Index& index);
                    Event(const Event& event);
                    virtual ~Event();

                    virtual Index size() const;
                            
                    virtual const UnivariateEvent* get(const Index& index) const;

                    virtual std::unique_ptr< MultivariateEvent > copy() const;

                    class STATISKIT_CORE_API Generator : public MultivariateData::Generator
                    {
                        public:
                            Generator(const MultivariateDataFrame* data);
                            virtual ~Generator();

                            virtual bool is_valid() const;

                            virtual MultivariateData::Generator& operator++();

                            virtual const MultivariateEvent* event() const;
                            virtual double weight() const;

                        protected:
                            Event* _event;
                    };     

                protected:
                    const MultivariateDataFrame* _data;
                    Index _index;
            };

            class STATISKIT_CORE_API UnivariateDataExtraction : public UnivariateData
            {
                public:
                    UnivariateDataExtraction(const MultivariateDataFrame* data, const Index& index);
                    virtual ~UnivariateDataExtraction();

                    virtual std::unique_ptr< UnivariateData::Generator > generator() const;

                    virtual const UnivariateSampleSpace* get_sample_space() const;
                
                    virtual std::unique_ptr< UnivariateData > copy() const;                

                protected:
                    const UnivariateDataFrame* _data;
            };

            class STATISKIT_CORE_API MultivariateDataExtraction : public MultivariateData
            {
                public:
                    MultivariateDataExtraction(const MultivariateDataFrame* data, const std::set< Index >& index);
                    virtual ~MultivariateDataExtraction();

                    virtual std::unique_ptr< MultivariateData::Generator > generator() const;

                    virtual const MultivariateSampleSpace* get_sample_space() const;

                    virtual std::unique_ptr< UnivariateData > extract(const Index& index) const;

                    virtual std::unique_ptr< MultivariateData > extract(const std::set< Index >& indices) const;

                    virtual std::unique_ptr< MultivariateData > copy() const;

                protected:
                    const MultivariateDataFrame* _data;
                    const MultivariateSampleSpace* _sample_space;
                    std::vector< Index > _indices;

                    class STATISKIT_CORE_API SampleSpace : public MultivariateSampleSpace
                    {
                        public:
                            SampleSpace(const MultivariateDataExtraction* data);
                            virtual ~SampleSpace();

                            virtual Index size() const;
                            
                            virtual const UnivariateSampleSpace* get(const Index& index) const;
                                                                    
                            virtual std::unique_ptr< MultivariateSampleSpace > copy() const;

                        protected:
                            const MultivariateDataExtraction* _data;
                    };

                    class STATISKIT_CORE_API Event : public MultivariateEvent
                    {
                        public:
                            Event(const MultivariateDataExtraction* data, const Index& index);
                            virtual ~Event();

                            virtual Index size() const;
                                    
                            virtual const UnivariateEvent* get(const Index& index) const;

                            virtual std::unique_ptr< MultivariateEvent > copy() const;

                            class STATISKIT_CORE_API Generator : public MultivariateData::Generator
                            {
                                public:
                                    Generator(const MultivariateDataExtraction* data);
                                    virtual ~Generator();

                                    virtual bool is_valid() const;

                                    virtual MultivariateData::Generator& operator++();

                                    virtual const MultivariateEvent* event() const;
                                    virtual double weight() const;

                                protected:
                                    Event* _event;
                            };

                        protected:
                            const MultivariateDataExtraction* _data;
                            Index _index;
                    };
            };
    };

    template<class D>
    class WeightedData : public D
    {
        public:
            WeightedData(const D* data);
            WeightedData(const WeightedData< D >& data);
            virtual ~WeightedData();

            virtual const typename D::sample_space_type* get_sample_space() const;

            virtual std::unique_ptr< typename D::Generator > generator() const;

            const D* get_data() const;

            Index get_nb_weights() const;

            virtual double get_weight(const Index& index) const;     
            void set_weight(const Index& index, const double& weight);       

        protected:
            const D* _data;
            std::vector< double > _weights;

            class STATISKIT_CORE_API Generator : public D::Generator
            {
                public:
                    Generator(const WeightedData< D >* data);
                    virtual ~Generator();

                    virtual bool is_valid() const;

                    virtual typename D::Generator& operator++();

                    virtual const typename D::event_type* event() const;
                    virtual double weight() const;
                    void weight(const double& weigth);

                protected:
                    const WeightedData< D >* _data;
                    typename D::Generator* _generator;
                    Index _index;
            };      
    };

    struct STATISKIT_CORE_API WeightedUnivariateData : WeightedData< UnivariateData >
    {
        WeightedUnivariateData(const UnivariateData* data);
        WeightedUnivariateData(const WeightedUnivariateData& data);
        virtual ~WeightedUnivariateData();

        virtual std::unique_ptr< UnivariateData > copy() const;
    };

    class STATISKIT_CORE_API WeightedMultivariateData : WeightedData< MultivariateData >
    {
        public:
            WeightedMultivariateData(const MultivariateData* data);
            WeightedMultivariateData(const WeightedMultivariateData& data);
            virtual ~WeightedMultivariateData();

            virtual std::unique_ptr< UnivariateData > extract(const Index& index) const;
            virtual std::unique_ptr< MultivariateData > extract(const std::set< Index >& indices) const;

            virtual std::unique_ptr< MultivariateData > copy() const;

        protected:       

            template<class D>
            class DataExtraction : public D
            {
                public:
                    DataExtraction(const WeightedMultivariateData* weights, const D* data);
                    DataExtraction(const DataExtraction< D >& data);
                    virtual ~DataExtraction();

                    virtual std::unique_ptr< typename D::Generator > generator() const;

                    virtual const typename D::sample_space_type* get_sample_space() const;
                
                protected:
                    const WeightedMultivariateData* _weights;
                    const D* _data;

                    class Generator : public D::Generator
                    {
                        public:
                            Generator(const DataExtraction< D >* data);
                            virtual ~Generator();

                            virtual bool is_valid() const;

                            virtual typename D::Generator& operator++();

                            virtual const typename D::event_type* event() const;
                            virtual double weight() const;

                        protected:
                            const DataExtraction< D >* _data;
                            typename D::Generator* _generator;
                            Index _index;
                    };      
            };

            struct STATISKIT_CORE_API UnivariateDataExtraction : DataExtraction< UnivariateData >
            { 
                UnivariateDataExtraction(const WeightedMultivariateData* weights, const Index& index);
                UnivariateDataExtraction(const UnivariateDataExtraction& data);
                virtual ~UnivariateDataExtraction();

                virtual std::unique_ptr< UnivariateData > copy() const;
            };


            class STATISKIT_CORE_API MultivariateDataExtraction : public DataExtraction< MultivariateData >
            { 
                public:
                    MultivariateDataExtraction(const WeightedMultivariateData* weights, const std::set< Index >& indices);
                    MultivariateDataExtraction(const MultivariateDataExtraction& data);
                    virtual ~MultivariateDataExtraction();

                    virtual std::unique_ptr< UnivariateData > extract(const Index& index) const;
                    virtual std::unique_ptr< MultivariateData > extract(const std::set< Index >& indices) const;

                    virtual std::unique_ptr< MultivariateData > copy() const;

                protected:
                    std::vector< Index > _indices;
            };
    };


    /*template<class D>
    class DataMask : public D
    {
        public:
            DataMask(const std::shared_ptr< D >& masked);
            DataMask(const DataMask< D >& data);

            const std::shared_ptr< D >& get_masked() const;

            virtual const typename D::sample_space_type* get_sample_space() const;
                         
            virtual const typename D::event_type * get_event(const Index& index) const;
            virtual void set_event(const Index& index, const typename D::event_type* event);
           
            virtual bool is_weighted() const;

            virtual double get_weight(const Index& index) const;
            
            virtual void lock();
            virtual void unlock();
            virtual const bool& is_locked() const;
            
        protected:
            std::shared_ptr< D > _masked;
            
            virtual Index compute_index(const Index& index) const = 0;
    };

    template<class D>
    class RandomizedData : public DataMask< D >
    {
        public:
            RandomizedData(const std::shared_ptr< D >& randomized);
            RandomizedData(const RandomizedData< D >& data);
            
            virtual Index size() const;

            const std::shared_ptr< D >& get_randomized() const;

            const std::vector< Index >& get_randomization() const;

            void randomize();

            virtual std::unique_ptr< D > copy() const;

        protected:
            std::vector< Index > _randomization;
            
            virtual Index compute_index(const Index& index) const;       
    };

  
    template<class D>
    class DataIntervalMask : public DataMask< D >
    {
        public:
            DataIntervalMask(const std::shared_ptr< D >& masked, const Index& lower, const Index& upper, const bool& inside);
            DataIntervalMask(const DataIntervalMask< D >& data);
            
            virtual Index size() const;
            
            const bool& get_inside() const;
            void set_inside(const bool& inside);

            virtual std::unique_ptr< D > copy() const;

        protected:
            Index _lower;
            Index _upper;
            bool _inside;
            
            virtual Index compute_index(const Index& index) const;                    
    };*/
}

#include "data.hpp"
#endif
