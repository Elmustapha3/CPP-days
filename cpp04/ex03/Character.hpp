/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:08:46 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:08:47 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

typedef struct address {
	AMateria *adrs;
	struct address *next;
} addess;

void addBack(addess **list, address *n);

class Character: public ICharacter {
	AMateria* am[4];
	address *ad;
	public:
		Character();
		Character(std::string name);
		Character(const Character& c);
		Character& operator=(const Character& c);
		~Character();
		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
