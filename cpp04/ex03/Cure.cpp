/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:08:52 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:52:52 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(){
	std::cout << "Cure default constructor called" << std::endl;
	this->type = "cure";
}

Cure::Cure(const Cure& c):AMateria(c){
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& c){
	std::cout << "Cure copy assignment operator called" << std::endl;
	if (this == &c)
        return *this;
	return *this;
}

Cure::~Cure(){
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const{
	AMateria* cure = new Cure();
	return cure;
}

void Cure::use(ICharacter& ic){
	std::cout << "* heals " << ic.getName() << "’s wounds *" << std::endl;
}
