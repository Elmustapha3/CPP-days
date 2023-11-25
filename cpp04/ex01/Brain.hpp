/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:11:34 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:11:35 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
    std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& b);
        Brain& operator=(const Brain& b);
        ~Brain();
};


#endif
