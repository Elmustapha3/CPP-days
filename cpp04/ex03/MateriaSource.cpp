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
	for (int i = 0; i < 4; i++)
		this->am[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& ms){
	for (int i = 0; i < 4; i++)
	{
		if(ms.am[i])
			this->am[i] = ms.am[i]->clone();
		else
			this->am[i] = NULL;
	}
	*this->am = *ms.am; 
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ms){
	if (this == &ms)
        return *this;
	*this->am = *ms.am; 
	return *this;
}

MateriaSource::~MateriaSource(){
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

