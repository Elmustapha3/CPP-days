/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:09:16 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:09:17 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice: public AMateria{
	public:
		Ice();
		Ice(const Ice& ice);
		Ice& operator=(const Ice& ice);
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
