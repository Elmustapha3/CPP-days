/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:01:12 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/07 14:38:07 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"


int main(){
    try {
        Bureaucrat b("b1", 5);
        RobotomyRequestForm f("f1");
        // std::cout << b ;
        
        // f.beSigned(b);
        // b.signForm(f);
    }catch(std::exception& e)
    {
        std::cout << "exeption : " << e.what() << std::endl;
    }
}