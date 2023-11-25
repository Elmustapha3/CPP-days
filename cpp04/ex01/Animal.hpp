/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:11:24 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:11:25 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& a);
        Animal& operator=(const Animal& a);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};

#endif
