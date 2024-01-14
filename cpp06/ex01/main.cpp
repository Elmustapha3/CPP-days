/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 20:26:04 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/14 20:34:18 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data d;
    d.key= 1;
    d.value = "rca";

    std::cout << Serializer::serialize(&d) << std::endl;
    std::cout << &d << std::endl;
    
    std::cout << Serializer::deserialize(Serializer::serialize(&d))->value << std::endl;
    
    return 0;
}
