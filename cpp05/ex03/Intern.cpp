/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 03:57:58 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/20 13:23:26 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){};

Intern::Intern(const Intern& in){
    (void)in;
}

Intern& Intern::operator=(const Intern& in){
    (void)in;
    return *this;
}

Intern::~Intern(){}

int checkInvalidForm(std::string formName){
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    if(formName != forms[1] && formName != forms[2] && formName != forms[0]){
        std::cout << "invalid form" << std::endl;
        return 0;
    }
    return 1;
}

AForm* Intern::makeForm(std::string formName, std::string target){
    if(!checkInvalidForm(formName))
        _exit(0);
    AForm *a;
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if(formName == forms[i]){
            switch (i)
            {
                case 0:
                    a = new ShrubberyCreationForm(target);
                    break;
                case 1:
                    a = new RobotomyRequestForm(target);
                    break;
                case 2:
                    a = new PresidentialPardonForm(target);
                    break;
                default:
                    break;
            }
        }
    }
    return a;
}
