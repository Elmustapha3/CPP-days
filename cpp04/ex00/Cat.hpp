/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:12:25 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:12:26 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{
    public:
        Cat();
        Cat(const Cat& c);
        Cat& operator=(const Cat& c);
        ~Cat();
        void makeSound() const ;
};

#endif
