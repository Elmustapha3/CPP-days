/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:02:08 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/27 20:24:58 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "Span.hpp"
int main()
{
	try{
		Span sp = Span(6);
		sp.addNumber(6);
		sp.addNumber(9);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// int tab1[] = {6, 3, 17, 9, 11};
		// sp.addRangeOfElements(tab1, 5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << "----------------" << std::endl;

		Span sp1 = Span(2);
		Span sp2 = sp1;
		int tab[200];
		for (size_t i = 0; i < 200; i++)
		{
			tab[i] = i + 1;
		}
		sp.addRangeOfElements(tab, sizeof(tab) / 4);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
