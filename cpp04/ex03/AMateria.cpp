/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:08:09 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:52:38 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type){
	std::cout << "AMateria parametrized constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria& an){
	std::cout << "AMateria copy constructor called" << std::endl;
	this->type = an.type;
}

AMateria& AMateria::operator=(const AMateria& an){
	std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this == &an)
        return *this;
	this->type = an.type;
	return *this;
}

AMateria::~AMateria(){
	std::cout << "AMateria destructor called" << std::endl;
}

const std::string& AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& ic){
	(void)ic;
	std::cout << "default use of AMateria" << std::endl;
}
