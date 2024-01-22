/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:14:32 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/22 18:43:29 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void add2(char &a)
{
    a = a + 2;
}

template <typename T>
void add1(T &a)
{
    std::cout << a << std::endl;
}

int main()
{
    char m[] = {'a', 'b'};
    iter(m, 2, add1<char>);
    std::cout << m[1]<< std::endl;
    return 0;
}
