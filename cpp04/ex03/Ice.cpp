/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:09:11 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:53:19 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(){
	this->type = "ice";
}

Ice::Ice(const Ice& ice):AMateria(ice){
}

Ice& Ice::operator=(const Ice& ice){
	if (this == &ice)
        return *this;
	return *this;
}

Ice::~Ice(){
}

AMateria* Ice::clone() const{
	AMateria* ice = new Ice();
	return ice;
}

void Ice::use(ICharacter& ic){
	std::cout << "* shoots an ice bolt at " << ic.getName() << " *" << std::endl;
}

