/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:07:33 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/22 18:35:37 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T1, typename T2>
void iter(T1* x, int y, void(*z)(T2)){
    for (int i = 0; i < y; i++)
    {
        z(x[i]);
    }
}

#endif
