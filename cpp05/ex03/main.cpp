/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:01:12 by eej-jama          #+#    #+#             */
/*   Updated: 2024/01/14 14:36:57 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"


int main(){
    try {
        Bureaucrat b("b1", 6);
        Intern i;
        AForm* f = i.makeForm("robotomy request", "stagaire");
        f->beSigned(b);
        b.signForm(*f);
        b.executeForm(*f);
    }catch(std::exception& e)
    {
        std::cout << "exeption : " << e.what() << std::endl;
    }
}