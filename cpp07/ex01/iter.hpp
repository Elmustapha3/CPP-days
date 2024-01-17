/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:07:33 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/16 18:29:36 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T1, typename T2, typename T3> void iter(T1* x, T2 y,T3 z){
    for (int i = 0; i < y; i++)
    {
        z(x[i]);
    }
    
}

#endif