/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:10:07 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:53:58 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->am[i] = NULL;


}

MateriaSource::MateriaSource(const MateriaSource& ms){
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		if(ms.am[i]->getType() == "ice")
			this->am[i] = new Ice();
		if(ms.am[i]->getType() == "cure")
			this->am[i] = new Cure();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ms){
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	if (this == &ms)
        return *this;
	for (int i = 0; i < 4; i++){
		if(ms.am[i]->getType() == "ice")
			this->am[i] = new Ice();
		if(ms.am[i]->getType() == "cure")
			this->am[i] = new Cure();
	}
	return *this;
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if(this->am[i])
			delete this->am[i];
	}
}

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; i++)
	{
		if (this->am[i] == NULL){
			this->am[i] = m;
			return ;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std:: string const & type){
	if(type == "ice"){
		return new Ice();
	}
	else if (type == "cure"){
		return new Cure();
	}
	else
		return NULL;
}

