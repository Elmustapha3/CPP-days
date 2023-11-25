/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:12:48 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:56:45 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = a.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &a){
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this == &a)
        return *this;
	this->type = a.type;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal desctructor called" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "Wronganimal makeSound function called" << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->type;
}
