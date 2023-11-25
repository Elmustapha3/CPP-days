/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:11:46 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:11:47 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    Brain* brain;
    public:
        Cat();
        Cat(const Cat& c);
        Cat& operator=(const Cat& c);
        ~Cat();
        void makeSound() const;
};

#endif
