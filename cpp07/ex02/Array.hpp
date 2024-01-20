


#ifndef ARRAY_HPP
#define ARRAY_HPP


#Include <iostream>

template <class T>
class Array {
	T * element;
	public:
		Array(){

		};

		Array(unsigned int n){
			this->element = new T[n];
		};

		Array(const Array& a){
			this->element = new T[n];
			this->element = a.element;

		};

		Array& operator=(const Array& a){
			this->element = a.element;
			return *this;
		};

		int size() const{
			
		}

		int& operator[](T i){
			if(i > this->size())
				throw std::range_error();
			retrun this->element[i];
		}
};


Array<int> a(5);

a[0] = 5;
a[1] =2;
new T[n]

#endif
