


#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>

template <class T>
class Array {

	T * element;
	unsigned int n;

	public:
		Array(){
			this->n = 0;
			this->element = new T[0];
		};

		Array(unsigned int n){
			this->n = n;
			this->element = new T[n];
			T *t = new T();
			for (size_t i = 0; i < n; i++)
			{
				this->element[i] = *t;
			}
			delete t;

		};

		Array(const Array& a){
			this->element = new T[a.n];
			this->n = a.n;
			*(this->element) = *(a.element);

		};

		Array& operator=(const Array& a){
			*(this->element) = *(a.element);
			return *this;
		};

		~Array(){
			delete [] this->element ;
		}

		int size() const{
			return this->n;
		}

		T& operator[](int i){
			if(i >= this->size() || i < 0)
				throw std::runtime_error("index out of range");
			return this->element[i];
		}

		const T& operator[](int i)const{
			if(i >= this->size() || i < 0)
				throw std::runtime_error("index out of range");
			return this->element[i];
		}
};


#endif
