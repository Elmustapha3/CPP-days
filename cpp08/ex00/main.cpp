/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:02:39 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/27 20:18:01 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
int main()
{
	try{
		std::vector<int> arr;
		arr.push_back(1);
		arr.push_back(4);
		arr.push_back(3);
		arr.push_back(2);
		easyfind<std::vector<int> >(arr, 0);

	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
