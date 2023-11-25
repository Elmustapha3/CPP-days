/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:13:02 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:56:54 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& c):WrongAnimal(c){
    std::cout << "WrongCat copy constructor called" << std::endl;
    this->type = c.type;
}

WrongCat& WrongCat::operator=(const WrongCat& c){
    std::cout << "WrongCat copy assignment constructor called" << std::endl;
    if (this == &c)
        return *this;
    this->type = c.type;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat make sound" << std::endl;
}

