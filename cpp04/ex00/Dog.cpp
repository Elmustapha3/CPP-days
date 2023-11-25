/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:12:30 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:56:30 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& d):Animal(d){
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = d.type;
}

Dog& Dog::operator=(const Dog& d){
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this == &d)
        return *this;
    this->type = d.type;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog desctructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Dog make sound" << std::endl;
}
