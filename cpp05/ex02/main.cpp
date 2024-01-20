/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:01:12 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/20 12:07:54 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(){
    try {
        Bureaucrat b("b1", 1);
        PresidentialPardonForm f("f1");
        b.signForm(f);
        b.executeForm(f);
    }catch(std::exception& e)
    {
        std::cout << "exeption : " << e.what() << std::endl;
    }
}
