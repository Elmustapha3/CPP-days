/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:11:29 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:55:18 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& b){
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
            this->ideas[i] = b.ideas[i];
}

Brain& Brain::operator=(const Brain& b){
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this == &b)
        return *this;
    for (int i = 0; i < 100; i++)
            this->ideas[i] = b.ideas[i];
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

