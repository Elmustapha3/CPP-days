/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 03:57:54 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/14 14:09:56 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include <iostream>
class Intern {
    public:
        Intern();
        Intern(const Intern& in);
        Intern& operator=(const Intern& in);
        ~Intern();
        AForm* makeForm(std::string formName, std::string target);
};

#endif