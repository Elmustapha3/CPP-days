/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:12:02 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:37:25 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	// const Cat a;
	// a.makeSound();

	// Animal *b = new Cat(a);
	// b->makeSound();
	// delete b;


	const Animal *an[6];
	for (int i = 0; i < 6; i++)
	{
		if(i % 2 == 0)
			an[i] = new Dog();
		else
			an[i] = new Cat();
	}

	std::cout << std:: endl << std::endl;

    for (int i = 0; i < 6; i++)
	    an[i]->makeSound();

    std::cout << std:: endl << std::endl;

	for (int i = 0; i < 6; i++)
		delete an[i];


	return 0;
}
