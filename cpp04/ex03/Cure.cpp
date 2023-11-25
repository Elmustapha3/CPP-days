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
	this->type = "cure";
}

Cure::Cure(const Cure& c):AMateria(c){
}

Cure& Cure::operator=(const Cure& c){
	if (this == &c)
        return *this;
	return *this;
}

Cure::~Cure(){
}

AMateria* Cure::clone() const{
	AMateria* cure = new Cure();
	return cure;
}

void Cure::use(ICharacter& ic){
	std::cout << "* heals " << ic.getName() << "’s wounds *" << std::endl;
}
