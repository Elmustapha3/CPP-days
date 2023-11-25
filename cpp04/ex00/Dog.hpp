/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:12:38 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:12:39 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
    public:
        Dog();
        Dog(const Dog& d);
        Dog& operator=(const Dog& d);
        ~Dog();
        void makeSound() const;
};

#endif
