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
	std::cout << "Ice default constructor called" << std::endl;
	this->type = "ice";
}

Ice::Ice(const Ice& ice):AMateria(ice){
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& ice){
	std::cout << "Ice copy assignment operator called" << std::endl;
	if (this == &ice)
        return *this;
	return *this;
}

Ice::~Ice(){
	std::cout << "Ice Destructor called" << std::endl;
}

AMateria* Ice::clone() const{
	AMateria* ice = new Ice();
	return ice;
}

void Ice::use(ICharacter& ic){
	std::cout << "* shoots an ice bolt at " << ic.getName() << " *" << std::endl;
}

