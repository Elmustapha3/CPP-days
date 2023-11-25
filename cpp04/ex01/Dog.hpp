/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:11:56 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:11:57 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog: public Animal{
    Brain* brain;
    public:
        Dog();
        Dog(const Dog& d);
        Dog& operator=(const Dog& d);
        ~Dog();
        void makeSound() const;
};

#endif
