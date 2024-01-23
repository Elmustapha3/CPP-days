/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:02:39 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/23 20:02:41 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
int main()
{
	std::vector<int> arr;
	arr.push_back(1);
	arr.push_back(4);
	arr.push_back(3);
	arr.push_back(2);
	easyfind(arr, 3);
	return 0;
}
