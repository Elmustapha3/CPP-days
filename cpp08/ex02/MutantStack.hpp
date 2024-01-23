/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:21:04 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/23 21:21:36 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define  MUTANTSTACK_HPP

#include <iostream>
#include <stack>
template <class container>
class MutantStack: public std::stack<container>{
	public:
		MutantStack(){};
		MutantStack(const MutantStack& ms){
			(void)ms;
		};
		MutantStack& operator=(const MutantStack& ms){
			(void)ms;
			return *this;
		};
		~MutantStack(){};
		typedef typename std::stack<container>::container_type::iterator iterator;
		iterator begin(){
			return this->c.begin();
		};
		iterator end(){
			return this->c.end();
		};
};

#endif
