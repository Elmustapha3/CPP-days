/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:11:51 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:55:46 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& d):Animal(d){
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain();
    this->type = d.type;
    *this->brain = *d.brain;
}

Dog& Dog::operator=(const Dog& d){
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this == &d)
        return *this;
    this->brain = new Brain();
    this->type = d.type;
    *this->brain = *d.brain;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog desctructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const{
    std::cout << "Dog make sound" << std::endl;
}

