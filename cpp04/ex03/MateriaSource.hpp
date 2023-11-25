/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:10:12 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:10:13 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"


class MateriaSource: public IMateriaSource{
	AMateria* am[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& ms);
		MateriaSource& operator=(const MateriaSource& ms);
		~MateriaSource();
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif
