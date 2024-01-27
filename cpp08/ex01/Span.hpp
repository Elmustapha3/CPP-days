/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:02:23 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/27 17:37:45 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	std::vector<int> v;
	size_t N;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& s);
		Span& operator=(const Span& s);
		~Span();
		void addNumber(int a);
		int shortestSpan();
		int longestSpan();
		void addRangeOfElements(int *tab, size_t s);
};


#endif
