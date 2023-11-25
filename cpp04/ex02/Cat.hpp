/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:10:42 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:10:43 by eej-jama         ###   ########.fr       */
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
