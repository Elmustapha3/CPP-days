/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:12:21 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:56:19 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& c):Animal(c){
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = c.type;
}

Cat& Cat::operator=(const Cat& c){
    std::cout << "Cat copy assignment constructor called" << std::endl;
    if (this == &c)
        return *this;
    this->type = c.type;
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Cat make sound" << std::endl;
}

