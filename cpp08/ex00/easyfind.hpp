
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

template <typename T> void easyfind(T x, int y){
	typename T::iterator it;
	it = std::find(x.begin(), x.end(), y);
	if(it == x.end()){
		throw std::runtime_error("not found");
	}
	std::cout << "the element exist " << *it << std::endl;
}

#endif
