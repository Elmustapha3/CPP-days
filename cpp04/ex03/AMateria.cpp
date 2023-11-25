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
}

AMateria::AMateria(std::string const & type){
	this->type = type;
}

AMateria::AMateria(const AMateria& an){
	this->type = an.type;
}

AMateria& AMateria::operator=(const AMateria& an){
	if (this == &an)
        return *this;
	this->type = an.type;
	return *this;
}

AMateria::~AMateria(){
}

const std::string& AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& ic){
	(void)ic;
}
