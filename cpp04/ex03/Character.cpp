/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:08:37 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:52:28 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(){
	this->ad = NULL;
	for (int i = 0; i < 4; i++)
	{
		this->am[i] = NULL;
	}
}

Character::Character(std::string name){
		this->ad = NULL;
	for (int i = 0; i < 4; i++)
	{
		this->am[i] = NULL;
	}
	this->name = name;
}


Character::Character(const Character& c){
	for (int i = 0; i < 4; i++){
		if(c.am[i])
			this->am[i] = c.am[i]->clone();
		else
			this->am[i] = NULL;
	}
	*this->am = *c.am;
}

Character& Character::operator=(const Character& c){
	if (this == &c)
        return *this;
	*this->am = *c.am;
	return *this;
}


Character::~Character(){
	for (int i = 0; i < 4; i++)
	{
		if(this->am[i]){
			delete this->am[i];
		}
	}

	address *tmp;
	tmp = this->ad;
	while (this->ad)
	{
		delete this->ad->adrs;
		this->ad->adrs = NULL;
		this->ad = this->ad->next;
	}
	this->ad = tmp;
	while (this->ad)
	{
		tmp = this->ad->next;
		delete this->ad;
		this->ad = tmp;
	}
}

const std::string& Character::getName() const{
	return this->name;
}


void Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++)
	{
		if(am[i] == m)
			break;
		if (this->am[i] == NULL){
			this->am[i] = m;
			return ;
		}
	}
	address *tmp;
	tmp = this->ad;
	while (tmp)
	{
		if(tmp->adrs == m)
			return;
		tmp = tmp->next;
	}
	for (int i = 0; i < 4; i++)
	{
		if(am[i] == m)
			return;
	}
	addess* n = new addess;
	n->adrs = m;
	addBack(&(this->ad), n);

}

void addBack(addess **list, address *n)
{
	address *tmp;
	n->next = NULL;
	tmp = *list;
	while (tmp)
	{
		if(tmp->adrs == n->adrs)
			return;
		tmp = tmp->next;
	}
	if((*list) == NULL){
		(*list) = n;
		return;
	}


	tmp = *list;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = n;
}

void Character::unequip(int idx){

	if(idx >= 4 || idx < 0 || this->am[idx] == NULL)
		return;
	addess* n = new addess;
	n->adrs = this->am[idx];
	addBack(&(this->ad), n);
	this->am[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if(this->am[idx])
		this->am[idx]->use(target);
}

