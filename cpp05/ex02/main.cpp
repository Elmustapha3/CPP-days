/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:01:12 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/08 00:57:31 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"


int main(){
    try {
        Bureaucrat b("b1", 6);
        RobotomyRequestForm f("f1");
        f.beSigned(b);
        b.signForm(f);
        b.executeForm(f);
    }catch(std::exception& e)
    {
        std::cout << "exeption : " << e.what() << std::endl;
    }
}