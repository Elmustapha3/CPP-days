/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:53:03 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/17 22:34:12 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T> 
void swap(T &x, T &y){
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

template <typename T> T min(T x, T y){
    if(x < y)
        return x;
    else
        return y;
}

template <typename T> T max(T x, T y){
    if(x > y)
        return x;
    else
        return y;
}

#endif