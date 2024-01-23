/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:02:16 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/23 20:02:21 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(){

}

Span::Span(unsigned int N){
	this->N = N;
}

Span::Span(const Span& s){
	this->N = s.N;
	this->v = s.v;
}

Span& Span::operator=(const Span& s){
	this->N = s.N;
	this->v = s.v;
	return *this;
}

Span::~Span(){}

void Span::addNumber(int a){
	if(this->v.size() + 1 > N)
		throw std::runtime_error("the vector not accept values any more");
	this->v.push_back(a);
}

int Span::shortestSpan(){
	if(this->v.size() == 1 || this->v.empty()){
		throw std::runtime_error("values in the vector is not enough");
	}

	sort(this->v.begin(), this->v.end());
	int shrt;
	shrt = this->v[1] - this->v[0];
	for (size_t i = 1; i < this->v.size() - 1; i++)
	{
		if(this->v[i + 1] - this->v[i] < shrt)
			shrt = this->v[i + 1] - this->v[i];
	}
	return shrt;
}

int Span::longestSpan(){
	if(this->v.size() == 1 || this->v.empty()){
		throw std::runtime_error("values in the vector is not enough");
	}
	sort(this->v.begin(), this->v.end());
	return this->v.back() - this->v[0] ;
}

void Span::addRangeOfElements(int *tab, size_t s){
	if(s > this->N)
		throw std::runtime_error("you try to insert more than the max possible");
	this->v.insert(this->v.begin(), tab, tab+s);
}

