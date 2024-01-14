/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:14:28 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/08 00:31:43 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& sf);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& sf);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};

#endif