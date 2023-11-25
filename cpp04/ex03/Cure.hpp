/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:08:57 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:08:58 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure();
		Cure(const Cure& c);
		Cure& operator=(const Cure& c);
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);

};

#endif
