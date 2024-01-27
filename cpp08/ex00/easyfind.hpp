/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:02:32 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/27 16:45:19 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

template <typename T>
void easyfind(T x, int y){
	typename T::iterator it;
	it = std::find(x.begin(), x.end(), y);
	if(it == x.end()){
		throw std::runtime_error("Element not found");
	}
	std::cout << "The element " << *it << " exist" << std::endl;
};

#endif
