/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:12:43 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:12:44 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;

    std::cout << std::endl << std::endl;

    // wrong case

    const WrongAnimal* Wmeta = new WrongAnimal();
    const WrongAnimal* Wi = new WrongCat();
    std::cout << Wi->getType() << " " << std::endl;
    Wi->makeSound();
    Wmeta->makeSound();
    delete Wi;
    delete Wmeta;

    return 0;
}
