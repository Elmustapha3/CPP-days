/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:21:04 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/23 11:35:45 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define  MUTANTSTACK_HPP

#include <iostream>
#include <stack>
template <class container>
class MutantStack: public std::stack<container>{
    public:
        MutantStack();
        MutantStack(const MutantStack& ms);
        MutantStack& operator=(const MutantStack& ms);
        ~MutantStack();
};

#endif