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
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name){
	std::cout << "Character parametrized constructor called" << std::endl;
		this->ad = NULL;
	for (int i = 0; i < 4; i++)
	{
		this->am[i] = NULL;
	}
	this->name = name;
}


Character::Character(const Character& c){
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		if(c.am[i] && c.am[i]->getType() == "ice")
			this->am[i] = new Ice();
		if(c.am[i] && c.am[i]->getType() == "cure")
			this->am[i] = new Cure();
	}
}

Character& Character::operator=(const Character& c){
	std::cout << "Character copy assignment operator called" << std::endl;
	if (this == &c)
        return *this;
	for (int i = 0; i < 4; i++){
		if(c.am[i]->getType() == "ice")
			this->am[i] = new Ice();
		if(c.am[i]->getType() == "cure")
			this->am[i] = new Cure();
	}
	return *this;
}


Character::~Character(){
	std::cout << "Character desctructor called" << std::endl;

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

