/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:11:39 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:55:26 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& c):Animal(c){
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain();
    this->type = c.type;
    *this->brain = *c.brain;

}

Cat& Cat::operator=(const Cat& c){
    std::cout << "Cat copy assignment constructor called" << std::endl;
    if (this == &c)
        return *this;
    this->type = c.type;
    *this->brain = *c.brain;
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const {
    std::cout << "Cat make sound" << std::endl;
}

