/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:12:09 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:56:12 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &a){
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = a.type;
}

Animal& Animal::operator=(const Animal &a){
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this == &a)
        return *this;
	this->type = a.type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal desctructor called" << std::endl;
}

void Animal::makeSound() const{
	std::cout << "animal make sound" << std::endl;
}

std::string Animal::getType() const{
	return this->type;
}
